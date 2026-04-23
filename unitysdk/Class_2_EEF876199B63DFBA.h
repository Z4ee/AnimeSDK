#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleViewService_1.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_93;
class Class_1_4D11CE62B2BEC69E;
class Class_2_0C58AD91B0F4D809;
class Class_2_AF4E89503EBBCCA0;
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

#define CLASS_2_EEF876199B63DFBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FB4D90)
#define CLASS_2_EEF876199B63DFBA_METHOD_2_108FDB892121C056_OFFSET UNITYSDK_OFFSET(0x8FB5A90)
#define CLASS_2_EEF876199B63DFBA_METHOD_2_277E504CC0A67851_OFFSET UNITYSDK_OFFSET(0x8FB55B0)
#define CLASS_2_EEF876199B63DFBA_METHOD_2_3779201892A01BB4_OFFSET UNITYSDK_OFFSET(0x8FBC040)
#define CLASS_2_EEF876199B63DFBA_METHOD_2_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x8FBC920)
#define CLASS_2_EEF876199B63DFBA_METHOD_2_53108F187541F144_OFFSET UNITYSDK_OFFSET(0x8FBC210)
#define CLASS_2_EEF876199B63DFBA_METHOD_2_571362FC81B1611D_OFFSET UNITYSDK_OFFSET(0x8FB5960)
#define CLASS_2_EEF876199B63DFBA_METHOD_2_66E9CBD8F7EC8991_OFFSET UNITYSDK_OFFSET(0x8FB8220)
#define CLASS_2_EEF876199B63DFBA_METHOD_2_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0x8FB8950)
#define CLASS_2_EEF876199B63DFBA_METHOD_2_7B611711B291982E_OFFSET UNITYSDK_OFFSET(0x8FB8680)
#define CLASS_2_EEF876199B63DFBA_METHOD_2_92E07EF7AC627659_OFFSET UNITYSDK_OFFSET(0x8FBC470)
#define CLASS_2_EEF876199B63DFBA_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x8FB5000)
#define CLASS_2_EEF876199B63DFBA_METHOD_2_A8FA1D5DD9DF46A1_OFFSET UNITYSDK_OFFSET(0x8FB8800)
#define CLASS_2_EEF876199B63DFBA_METHOD_2_D5111B6AECEE40BA_OFFSET UNITYSDK_OFFSET(0x8FBC620)
#define CLASS_2_EEF876199B63DFBA_METHOD_2_EEBB7BA0EB4C8B79_OFFSET UNITYSDK_OFFSET(0x8FBC790)
#define CLASS_2_EEF876199B63DFBA__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FBC930)
#define CLASS_2_EEF876199B63DFBA__CTOR_OFFSET UNITYSDK_OFFSET(0x8FB49A0)
#define CLASS_2_EEF876199B63DFBA__GETMONOVIEW_OFFSET UNITYSDK_OFFSET(0x8FB53A0)
#define CLASS_2_EEF876199B63DFBA__ONRELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x8FB5250)
#define CLASS_2_EEF876199B63DFBA___ADDREVERTALL2DVOXELINTERACTTRIGGER_B__10_0_OFFSET UNITYSDK_OFFSET(0x8FBC990)
#define CLASS_2_EEF876199B63DFBA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FBCBD0)

inline static constexpr unsigned int Class_2_EEF876199B63DFBA_TypeDefinitionIndex = 70459;

class Class_2_EEF876199B63DFBA : public ::RPG::Client::LittleGame::SimpleViewService_1<::Class_2_0C58AD91B0F4D809*>
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_0C58AD91B0F4D809*>** StaticGet_Field_2_6()
	{
		return (::System::Collections::Generic::List_1<::Class_2_0C58AD91B0F4D809*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EEF876199B63DFBA_TypeDefinitionIndex)->GetStaticField(0x613D0);
	}
	static ::System::Int32* StaticGet_Field_2_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_EEF876199B63DFBA_TypeDefinitionIndex)->GetStaticField(0x104C0);
	}
	::System::Collections::Generic::HashSet_1<::FiveDimRenderingPanelRuntime*>* Field_2_8; // 0x30
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::System::Single>* Field_2_2; // 0x38
	::System::Collections::Generic::HashSet_1<::Class_2_0C58AD91B0F4D809*>* Field_2_0; // 0x40
	::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* Field_2_5; // 0x48
	::Class_1_4D11CE62B2BEC69E* Field_2_9; // 0x50
	::Class_2_AF4E89503EBBCCA0* Field_2_10; // 0x58
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::UnityEngine::Vector3>* Field_2_1; // 0x60
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::Il2CppArray<::System::Single>*>* Field_2_4; // 0x68
	::Class_3_D6E9A038FA23103A* Field_2_11; // 0x70
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* Field_2_3; // 0x78

	::System::Void _ctor(::Class_3_D6E9A038FA23103A* a1, ::Class_1_4D11CE62B2BEC69E* a2, ::Class_2_AF4E89503EBBCCA0* a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6E9A038FA23103A*, ::Class_1_4D11CE62B2BEC69E*, ::Class_2_AF4E89503EBBCCA0*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void _OnReleaseView(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA__ONRELEASEVIEW_OFFSET))(this, a1);
	}

	::System::Void _GetMonoView(::Class_2_0C58AD91B0F4D809* a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::Class_0_16E4307DCC419505_93*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::System::String*, ::UnityEngine::GameObject*, ::Class_0_16E4307DCC419505_93*&))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA__GETMONOVIEW_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_0C58AD91B0F4D809* Method_2_277E504CC0A67851(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::Class_2_0C58AD91B0F4D809*(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_METHOD_2_277E504CC0A67851_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_571362FC81B1611D(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimBaseCameraConfig* a2, ::RPG::GameCore::FiveDimCameraPriority a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimBaseCameraConfig*, ::RPG::GameCore::FiveDimCameraPriority))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_METHOD_2_571362FC81B1611D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_108FDB892121C056(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_METHOD_2_108FDB892121C056_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_66E9CBD8F7EC8991(::FiveDimRenderingPanelRuntime* a1, ::Class_2_0C58AD91B0F4D809* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingPanelRuntime*, ::Class_2_0C58AD91B0F4D809*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_METHOD_2_66E9CBD8F7EC8991_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_7B611711B291982E(::Class_2_0C58AD91B0F4D809* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_METHOD_2_7B611711B291982E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A8FA1D5DD9DF46A1(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_METHOD_2_A8FA1D5DD9DF46A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7B411317D337F87A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_METHOD_2_7B411317D337F87A_OFFSET))(this);
	}

	static ::System::Void Method_2_53108F187541F144(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_METHOD_2_53108F187541F144_OFFSET))(a1);
	}

	static ::System::Void Method_2_92E07EF7AC627659(::System::Int32 a1, ::FiveDimRenderingItem* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Int32, ::FiveDimRenderingItem*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_METHOD_2_92E07EF7AC627659_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_3779201892A01BB4(::Il2CppArray<::System::Single>* a1, ::FiveDimRenderingItem* a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_METHOD_2_3779201892A01BB4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_D5111B6AECEE40BA(::System::Collections::Generic::List_1<::System::Single>* a1, ::FiveDimRenderingItem* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Single>*, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_METHOD_2_D5111B6AECEE40BA_OFFSET))(a1, a2);
	}

	::System::Void Method_2_EEBB7BA0EB4C8B79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_METHOD_2_EEBB7BA0EB4C8B79_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_METHOD_2_4D71BCFB74C16073_OFFSET))(this);
	}

	::System::Void __AddRevertAll2DVoxelInteractTrigger_b__10_0(::Class_2_0C58AD91B0F4D809* entity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA___ADDREVERTALL2DVOXELINTERACTTRIGGER_B__10_0_OFFSET))(this, entity);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
