#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleViewService_1.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_92;
class Class_1_2CDF619C23140440;
class Class_2_31D39E0B0ADFB12E;
class Class_2_B8E38BF47138A2E5;
class Class_3_D6E9A038FA23103A;
class FiveDimRenderingItem;
class FiveDimRenderingPanelRuntime;
namespace RPG::GameCore { class FiveDimBaseCameraConfig; }
namespace RPG::GameCore { class FourRotateVoxelRevert2DVoxelConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EBC0545D40C86C40_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13602060)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_1392F93CBBAA8B7E_OFFSET UNITYSDK_OFFSET(0x136022D0)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_2027AC45A69D718B_OFFSET UNITYSDK_OFFSET(0x13605440)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x13602310)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_3779201892A01BB4_OFFSET UNITYSDK_OFFSET(0x136092B0)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x13609750)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_571362FC81B1611D_OFFSET UNITYSDK_OFFSET(0x13602C00)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_6B1930E1B382906A_OFFSET UNITYSDK_OFFSET(0x136095E0)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_6D83A9CECE1AAD66_OFFSET UNITYSDK_OFFSET(0x13602D30)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_6E0D227FDEAA8A41_OFFSET UNITYSDK_OFFSET(0x13602D80)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_70FB48151596BA20_OFFSET UNITYSDK_OFFSET(0x13602830)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0x13605C30)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_92E07EF7AC627659_OFFSET UNITYSDK_OFFSET(0x13609100)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_A8FA1D5DD9DF46A1_OFFSET UNITYSDK_OFFSET(0x13605AC0)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_BDD79B65A8FD0174_OFFSET UNITYSDK_OFFSET(0x13609420)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_BE0DF5D2AA19CFE5_OFFSET UNITYSDK_OFFSET(0x13608ED0)
#define CLASS_2_EBC0545D40C86C40_METHOD_2_F4B543CA35778A4F_OFFSET UNITYSDK_OFFSET(0x13605980)
#define CLASS_2_EBC0545D40C86C40__CCTOR_OFFSET UNITYSDK_OFFSET(0x13609760)
#define CLASS_2_EBC0545D40C86C40__CTOR_OFFSET UNITYSDK_OFFSET(0x13601C00)
#define CLASS_2_EBC0545D40C86C40__GETMONOVIEW_OFFSET UNITYSDK_OFFSET(0x13602620)
#define CLASS_2_EBC0545D40C86C40__ONRELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x136024E0)
#define CLASS_2_EBC0545D40C86C40___ADDREVERTALL2DVOXELINTERACTTRIGGER_B__12_0_OFFSET UNITYSDK_OFFSET(0x136097C0)
#define CLASS_2_EBC0545D40C86C40___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13609A00)

inline static constexpr unsigned int Class_2_EBC0545D40C86C40_TypeDefinitionIndex = 71275;

class Class_2_EBC0545D40C86C40 : public ::RPG::Client::LittleGame::SimpleViewService_1<::Class_2_B8E38BF47138A2E5*>
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_B8E38BF47138A2E5*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_B8E38BF47138A2E5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EBC0545D40C86C40_TypeDefinitionIndex)->GetStaticField(0x47CC0);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_EBC0545D40C86C40_TypeDefinitionIndex)->GetStaticField(0xD260);
	}
	::Class_1_2CDF619C23140440* Field_2_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* Field_2_3; // 0x38
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::System::Single>* Field_2_4; // 0x40
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::Il2CppArray<::System::Single>*>* Field_2_5; // 0x48
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::UnityEngine::Vector3>* Field_2_6; // 0x50
	::Class_2_31D39E0B0ADFB12E* Field_2_7; // 0x58
	::Class_3_D6E9A038FA23103A* Field_2_8; // 0x60
	::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* Field_2_9; // 0x68
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingPanelRuntime*, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>>* Field_2_10; // 0x70
	::System::Collections::Generic::HashSet_1<::Class_2_B8E38BF47138A2E5*>* Field_2_11; // 0x78
	::System::Collections::Generic::HashSet_1<::FiveDimRenderingPanelRuntime*>* Field_2_12; // 0x80

	::System::Void _ctor(::Class_3_D6E9A038FA23103A* a1, ::Class_1_2CDF619C23140440* a2, ::Class_2_31D39E0B0ADFB12E* a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6E9A038FA23103A*, ::Class_1_2CDF619C23140440*, ::Class_2_31D39E0B0ADFB12E*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingPanelRuntime*, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>>* Method_2_1392F93CBBAA8B7E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::FiveDimRenderingPanelRuntime*, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_1392F93CBBAA8B7E_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void _OnReleaseView(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40__ONRELEASEVIEW_OFFSET))(this, a1);
	}

	::System::Void _GetMonoView(::Class_2_B8E38BF47138A2E5* a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::Class_0_16E4307DCC419505_92*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*, ::UnityEngine::GameObject*, ::Class_0_16E4307DCC419505_92*&))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40__GETMONOVIEW_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_B8E38BF47138A2E5* Method_2_70FB48151596BA20(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::Class_2_B8E38BF47138A2E5*(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_70FB48151596BA20_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_571362FC81B1611D(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimBaseCameraConfig* a2, ::RPG::GameCore::FiveDimCameraPriority a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimBaseCameraConfig*, ::RPG::GameCore::FiveDimCameraPriority))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_571362FC81B1611D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6D83A9CECE1AAD66(::RPG::GameCore::FiveDimBaseCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimBaseCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_6D83A9CECE1AAD66_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E0D227FDEAA8A41(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_6E0D227FDEAA8A41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2027AC45A69D718B(::FiveDimRenderingPanelRuntime* a1, ::Class_2_B8E38BF47138A2E5* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingPanelRuntime*, ::Class_2_B8E38BF47138A2E5*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_2027AC45A69D718B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_F4B543CA35778A4F(::Class_2_B8E38BF47138A2E5* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_F4B543CA35778A4F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A8FA1D5DD9DF46A1(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_A8FA1D5DD9DF46A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7B411317D337F87A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_7B411317D337F87A_OFFSET))(this);
	}

	static ::System::Void Method_2_BE0DF5D2AA19CFE5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_BE0DF5D2AA19CFE5_OFFSET))(a1);
	}

	static ::System::Void Method_2_92E07EF7AC627659(::System::Int32 a1, ::FiveDimRenderingItem* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Int32, ::FiveDimRenderingItem*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_92E07EF7AC627659_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_3779201892A01BB4(::Il2CppArray<::System::Single>* a1, ::FiveDimRenderingItem* a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_3779201892A01BB4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_BDD79B65A8FD0174(::System::Collections::Generic::List_1<::System::Single>* a1, ::FiveDimRenderingItem* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Single>*, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_BDD79B65A8FD0174_OFFSET))(a1, a2);
	}

	::System::Void Method_2_6B1930E1B382906A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_6B1930E1B382906A_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40_METHOD_2_4D71BCFB74C16073_OFFSET))(this);
	}

	::System::Void __AddRevertAll2DVoxelInteractTrigger_b__12_0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40___ADDREVERTALL2DVOXELINTERACTTRIGGER_B__12_0_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
