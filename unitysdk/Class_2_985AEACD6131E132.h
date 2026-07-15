#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleViewService_1.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_111;
class Class_1_2CDF619C23140440;
class Class_2_566E5C710244EEC1;
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;
class FiveDimRenderingItem;
class FiveDimRenderingPanelRuntime;
namespace RPG::GameCore { class FiveDimBaseCameraConfig; }
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }
namespace RPG::GameCore { class FourRotateVoxelRevert2DVoxelConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_985AEACD6131E132_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C4DE60)
#define CLASS_2_985AEACD6131E132_METHOD_2_0B4EEE54147D1CCA_OFFSET UNITYSDK_OFFSET(0x17C55130)
#define CLASS_2_985AEACD6131E132_METHOD_2_0F98E199554C757C_OFFSET UNITYSDK_OFFSET(0x17C51940)
#define CLASS_2_985AEACD6131E132_METHOD_2_1392F93CBBAA8B7E_OFFSET UNITYSDK_OFFSET(0x17C4E0A0)
#define CLASS_2_985AEACD6131E132_METHOD_2_3779201892A01BB4_OFFSET UNITYSDK_OFFSET(0x17C54FC0)
#define CLASS_2_985AEACD6131E132_METHOD_2_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x17C557E0)
#define CLASS_2_985AEACD6131E132_METHOD_2_571362FC81B1611D_OFFSET UNITYSDK_OFFSET(0x17C4E9B0)
#define CLASS_2_985AEACD6131E132_METHOD_2_6D83A9CECE1AAD66_OFFSET UNITYSDK_OFFSET(0x17C4EAE0)
#define CLASS_2_985AEACD6131E132_METHOD_2_6E0D227FDEAA8A41_OFFSET UNITYSDK_OFFSET(0x17C4EB30)
#define CLASS_2_985AEACD6131E132_METHOD_2_74C86BA2F64A5BC2_OFFSET UNITYSDK_OFFSET(0x17C512A0)
#define CLASS_2_985AEACD6131E132_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x17C4E0E0)
#define CLASS_2_985AEACD6131E132_METHOD_2_92E07EF7AC627659_OFFSET UNITYSDK_OFFSET(0x17C55330)
#define CLASS_2_985AEACD6131E132_METHOD_2_9727D69841B41573_OFFSET UNITYSDK_OFFSET(0x17C556A0)
#define CLASS_2_985AEACD6131E132_METHOD_2_9A269784A8A199E9_OFFSET UNITYSDK_OFFSET(0x17C4E610)
#define CLASS_2_985AEACD6131E132_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x17C51CC0)
#define CLASS_2_985AEACD6131E132_METHOD_2_BDD79B65A8FD0174_OFFSET UNITYSDK_OFFSET(0x17C554E0)
#define CLASS_2_985AEACD6131E132_METHOD_2_DAF13376AAE9F3C9_OFFSET UNITYSDK_OFFSET(0x17C51B20)
#define CLASS_2_985AEACD6131E132_METHOD_2_F4B543CA35778A4F_OFFSET UNITYSDK_OFFSET(0x17C517B0)
#define CLASS_2_985AEACD6131E132__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C557F0)
#define CLASS_2_985AEACD6131E132__CTOR_OFFSET UNITYSDK_OFFSET(0x17C4DA20)
#define CLASS_2_985AEACD6131E132__GETMONOVIEW_OFFSET UNITYSDK_OFFSET(0x17C4E3E0)
#define CLASS_2_985AEACD6131E132__ONRELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x17C4E2D0)

inline static constexpr unsigned int Class_2_985AEACD6131E132_TypeDefinitionIndex = 72797;

class Class_2_985AEACD6131E132 : public ::RPG::Client::LittleGame::SimpleViewService_1<::Class_2_56DCA1B58073717B*>
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_56DCA1B58073717B*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_56DCA1B58073717B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_985AEACD6131E132_TypeDefinitionIndex)->GetStaticField(0x38200);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_985AEACD6131E132_TypeDefinitionIndex)->GetStaticField(0x9610);
	}
	::Class_3_001D9EA49F6215B6* Field_2_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::Il2CppArray<::System::Single>*>* Field_2_3; // 0x38
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::UnityEngine::Vector3>* Field_2_4; // 0x40
	::Class_2_566E5C710244EEC1* Field_2_5; // 0x48
	::System::Collections::Generic::HashSet_1<::Class_2_56DCA1B58073717B*>* Field_2_6; // 0x50
	::System::Collections::Generic::HashSet_1<::FiveDimRenderingPanelRuntime*>* Field_2_7; // 0x58
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingPanelRuntime*, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>>* Field_2_8; // 0x60
	::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* Field_2_9; // 0x68
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* Field_2_10; // 0x70
	::Class_1_2CDF619C23140440* Field_2_11; // 0x78
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::System::Single>* Field_2_12; // 0x80

	::System::Void _ctor(::Class_3_001D9EA49F6215B6* a1, ::Class_1_2CDF619C23140440* a2, ::Class_2_566E5C710244EEC1* a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_001D9EA49F6215B6*, ::Class_1_2CDF619C23140440*, ::Class_2_566E5C710244EEC1*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingPanelRuntime*, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>>* Method_2_1392F93CBBAA8B7E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::FiveDimRenderingPanelRuntime*, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_1392F93CBBAA8B7E_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void _OnReleaseView(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132__ONRELEASEVIEW_OFFSET))(this, a1);
	}

	::System::Void _GetMonoView(::Class_2_56DCA1B58073717B* a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::Class_0_16E4307DCC419505_111*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::String*, ::UnityEngine::GameObject*, ::Class_0_16E4307DCC419505_111*&))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132__GETMONOVIEW_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_56DCA1B58073717B* Method_2_9A269784A8A199E9(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::Class_2_56DCA1B58073717B*(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_9A269784A8A199E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_571362FC81B1611D(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimBaseCameraConfig* a2, ::RPG::GameCore::FiveDimCameraPriority a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimBaseCameraConfig*, ::RPG::GameCore::FiveDimCameraPriority))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_571362FC81B1611D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6D83A9CECE1AAD66(::RPG::GameCore::FiveDimBaseCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimBaseCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_6D83A9CECE1AAD66_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E0D227FDEAA8A41(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_6E0D227FDEAA8A41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0F98E199554C757C(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FourRotateVoxelFinishPointConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FourRotateVoxelFinishPointConfig*))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_0F98E199554C757C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_74C86BA2F64A5BC2(::FiveDimRenderingPanelRuntime* a1, ::Class_2_56DCA1B58073717B* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingPanelRuntime*, ::Class_2_56DCA1B58073717B*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_74C86BA2F64A5BC2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_F4B543CA35778A4F(::Class_2_56DCA1B58073717B* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_F4B543CA35778A4F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DAF13376AAE9F3C9(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig*))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_DAF13376AAE9F3C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_A2172401030892FD_OFFSET))(this);
	}

	static ::System::Void Method_2_0B4EEE54147D1CCA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_0B4EEE54147D1CCA_OFFSET))(a1);
	}

	static ::System::Void Method_2_92E07EF7AC627659(::System::Int32 a1, ::FiveDimRenderingItem* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Int32, ::FiveDimRenderingItem*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_92E07EF7AC627659_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_3779201892A01BB4(::Il2CppArray<::System::Single>* a1, ::FiveDimRenderingItem* a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_3779201892A01BB4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_BDD79B65A8FD0174(::System::Collections::Generic::List_1<::System::Single>* a1, ::FiveDimRenderingItem* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Single>*, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_BDD79B65A8FD0174_OFFSET))(a1, a2);
	}

	::System::Void Method_2_9727D69841B41573(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_9727D69841B41573_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132_METHOD_2_4D71BCFB74C16073_OFFSET))(this);
	}
};
