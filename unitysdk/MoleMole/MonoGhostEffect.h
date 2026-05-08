#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/MonoGhostEffect_Struct_2_F13019C0699F85E5.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_EA1FEF8121ADE963;
class NapGradient;
namespace MoleMole { class MonoGhostEffect_Class_1_48702BF31018C59D; }
namespace MoleMole::Config { class ConfigGhostMove; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGHOSTEFFECT_CREATEISOLATEDGHOST_OFFSET UNITYSDK_OFFSET(0x13E9EA30)
#define MOLEMOLE_MONOGHOSTEFFECT_EMPTY_OFFSET UNITYSDK_OFFSET(0x13E9C2F0)
#define MOLEMOLE_MONOGHOSTEFFECT_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x13E9C400)
#define MOLEMOLE_MONOGHOSTEFFECT_GET_ECHOTIME_OFFSET UNITYSDK_OFFSET(0x13E9C850)
#define MOLEMOLE_MONOGHOSTEFFECT_GET_IGNOREOWNERTIMESCALE_OFFSET UNITYSDK_OFFSET(0x13E9CD30)
#define MOLEMOLE_MONOGHOSTEFFECT_GET_IGNOREWORLDTIMESCALE_OFFSET UNITYSDK_OFFSET(0x13E9CB00)
#define MOLEMOLE_MONOGHOSTEFFECT_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x13E9C8C0)
#define MOLEMOLE_MONOGHOSTEFFECT_GET_MAXGHOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x13E9C640)
#define MOLEMOLE_MONOGHOSTEFFECT_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x13E9CDA0)
#define MOLEMOLE_MONOGHOSTEFFECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13E9D570)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_0A17961F2C7839AC_OFFSET UNITYSDK_OFFSET(0x13E9C950)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x13EA1D20)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_21378A7EB1BCB13B_OFFSET UNITYSDK_OFFSET(0x13E9E320)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_26C5221AC22B6534_OFFSET UNITYSDK_OFFSET(0x13EA30A0)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_2A1A0DC3332BB4CD_OFFSET UNITYSDK_OFFSET(0x13E9C6B0)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_33ED1D695A028734_OFFSET UNITYSDK_OFFSET(0x13E9D4D0)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_37B1A315712743DC_OFFSET UNITYSDK_OFFSET(0x13EA1C00)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_5B94350BBAC6A35E_OFFSET UNITYSDK_OFFSET(0x13E9D360)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_691A1C2F360A8C86_OFFSET UNITYSDK_OFFSET(0x13EA1D30)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_7272DB0445BC9CB0_OFFSET UNITYSDK_OFFSET(0x13EA3C00)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_7BCE151B405796FB_OFFSET UNITYSDK_OFFSET(0x13E9FA40)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_86ADBB4228161C74_OFFSET UNITYSDK_OFFSET(0x13EA3E60)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_89A73E9731D84A94_OFFSET UNITYSDK_OFFSET(0x13E9E510)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_91A773A85E497E9E_OFFSET UNITYSDK_OFFSET(0x13EA3B70)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_923D2292AD68A88F_OFFSET UNITYSDK_OFFSET(0x13EA1A90)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_92EF378E5C246C05_OFFSET UNITYSDK_OFFSET(0x13EA06C0)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_A41BBC1FFFE80811_OFFSET UNITYSDK_OFFSET(0x13EA39C0)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0x13EA20A0)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_BF9BB9E2BBF3B6F4_OFFSET UNITYSDK_OFFSET(0x13E9CB70)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_D0B68C1DD4B91F49_OFFSET UNITYSDK_OFFSET(0x13EA40A0)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_D7952B26E014026F_OFFSET UNITYSDK_OFFSET(0x13EA2040)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_E2BCD1B56132A826_OFFSET UNITYSDK_OFFSET(0x13E9F340)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_E35EDDEF9577BCE6_OFFSET UNITYSDK_OFFSET(0x13EA3210)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x13EA27D0)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_EDA3923B891A3359_OFFSET UNITYSDK_OFFSET(0x13EA1B90)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x13EA4230)
#define MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13EA4090)
#define MOLEMOLE_MONOGHOSTEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13E9E4C0)
#define MOLEMOLE_MONOGHOSTEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13E9E1A0)
#define MOLEMOLE_MONOGHOSTEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13E9C530)
#define MOLEMOLE_MONOGHOSTEFFECT_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x13EA04C0)
#define MOLEMOLE_MONOGHOSTEFFECT_SET_ECHOTIME_OFFSET UNITYSDK_OFFSET(0x13E9C860)
#define MOLEMOLE_MONOGHOSTEFFECT_SET_IGNOREOWNERTIMESCALE_OFFSET UNITYSDK_OFFSET(0x13E9CD40)
#define MOLEMOLE_MONOGHOSTEFFECT_SET_IGNOREWORLDTIMESCALE_OFFSET UNITYSDK_OFFSET(0x13E9CB10)
#define MOLEMOLE_MONOGHOSTEFFECT_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x13E9C8D0)
#define MOLEMOLE_MONOGHOSTEFFECT_SET_MAXGHOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x13E9C650)
#define MOLEMOLE_MONOGHOSTEFFECT_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x13E9CDB0)
#define MOLEMOLE_MONOGHOSTEFFECT_STARTANDACTIVEGHOSTEFFECT_OFFSET UNITYSDK_OFFSET(0x13E9F930)
#define MOLEMOLE_MONOGHOSTEFFECT_STARTGHOSTMOVE_OFFSET UNITYSDK_OFFSET(0x13EA0190)
#define MOLEMOLE_MONOGHOSTEFFECT_STOPGHOSTEFFECT_OFFSET UNITYSDK_OFFSET(0x13E9FEA0)
#define MOLEMOLE_MONOGHOSTEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EA05F0)
#define MOLEMOLE_MONOGHOSTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EA0510)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGhostEffect_TypeDefinitionIndex = 55933;

	class MonoGhostEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoGhostEffect*>** StaticGet_Field_5_2()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoGhostEffect*>**)Il2CppClass::FromTypeDefinitionIndex(MonoGhostEffect_TypeDefinitionIndex)->GetStaticField(0x2E890);
		}
		static ::System::Int32* StaticGet_Field_5_35()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoGhostEffect_TypeDefinitionIndex)->GetStaticField(0xA9F0);
		}
		static ::System::Int32* StaticGet_Field_5_36()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoGhostEffect_TypeDefinitionIndex)->GetStaticField(0xA9F4);
		}
		::System::Boolean Field_5_0; // 0x18
		::System::Boolean Field_5_1; // 0x19
		::System::Boolean Field_5_3; // 0x1A
		::Foundation::AssetPath Field_5_4; // 0x20
		::UnityEngine::Material* Field_5_5; // 0x30
		::System::Int32 Field_5_6; // 0x38
		::System::Single Field_5_7; // 0x3C
		::System::Single Field_5_8; // 0x40
		::System::Boolean Field_5_9; // 0x44
		::System::Boolean Field_5_10; // 0x45
		::System::Boolean HidePartsByEntity; // 0x46
		::System::Boolean NeedAlwaysHandleVisibilityState; // 0x47
		::MoleMole::Config::ConfigGhostMove* GhostMoveConfig; // 0x48
		::Class_1_EA1FEF8121ADE963* AttackData; // 0x50
		::System::Boolean Field_5_15; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* Field_5_16; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NapGradient*>* Field_5_17; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>* Field_5_18; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::MonoGhostEffect_Class_1_48702BF31018C59D*>* Field_5_19; // 0x78
		::System::Single Field_5_20; // 0x80
		::UnityEngine::GameObject* Field_5_21; // 0x88
		::UnityEngine::GameObject* Field_5_22; // 0x90
		::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* Field_5_23; // 0x98
		::Il2CppArray<::System::Int32>* Field_5_24; // 0xA0
		::UnityEngine::GameObject* Field_5_25; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_5_26; // 0xB0
		::UnityEngine::GameObject* Field_5_27; // 0xB8
		::System::String* Field_5_28; // 0xC0
		::MoleMole::EntityHandle Field_5_29; // 0xC8
		::System::Boolean Field_5_30; // 0xD8
		::UnityEngine::Material* Field_5_31; // 0xE0
		::System::Collections::Generic::List_1<::System::String*>* Field_5_32; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoGhostEffect_Struct_2_F13019C0699F85E5>* Field_5_33; // 0xF0
		::System::String* Field_5_34; // 0xF8
		::System::Boolean Field_5_37; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT__CCTOR_OFFSET))();
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_EMPTY_OFFSET))();
		}

		static ::MoleMole::MonoGhostEffect* GetComponentSafely(::System::Int32 a1)
		{
			return ((::MoleMole::MonoGhostEffect*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GETCOMPONENTSAFELY_OFFSET))(a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Int32 get_MaxGhostCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GET_MAXGHOSTCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxGhostCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_SET_MAXGHOSTCOUNT_OFFSET))(this, a1);
		}

		::System::Single get_EchoTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GET_ECHOTIME_OFFSET))(this);
		}

		::System::Void set_EchoTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_SET_ECHOTIME_OFFSET))(this, a1);
		}

		::System::Single get_LifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GET_LIFETIME_OFFSET))(this);
		}

		::System::Void set_LifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_SET_LIFETIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IgnoreWorldTimescale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GET_IGNOREWORLDTIMESCALE_OFFSET))(this);
		}

		::System::Void set_IgnoreWorldTimescale(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_SET_IGNOREWORLDTIMESCALE_OFFSET))(this, a1);
		}

		::System::Boolean get_IgnoreOwnerTimescale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GET_IGNOREOWNERTIMESCALE_OFFSET))(this);
		}

		::System::Void set_IgnoreOwnerTimescale(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_SET_IGNOREOWNERTIMESCALE_OFFSET))(this, a1);
		}

		::MoleMole::EntityHandle get_OwnerEntity()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_SET_OWNERENTITY_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::GameObject* CreateIsolatedGhost(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CREATEISOLATEDGHOST_OFFSET))(this, a1);
		}

		::System::Void StartAndActiveGhostEffect(::System::String* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_STARTANDACTIVEGHOSTEFFECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void StopGhostEffect(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_STOPGHOSTEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void StartGhostMove(::Class_1_EA1FEF8121ADE963* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_STARTGHOSTMOVE_OFFSET))(this, a1);
		}

		::System::Void OnEntityRemove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_ONENTITYREMOVE_OFFSET))(this);
		}

		::System::Void Method_5_92EF378E5C246C05()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_92EF378E5C246C05_OFFSET))(this);
		}

		::System::Void Method_5_89A73E9731D84A94()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_89A73E9731D84A94_OFFSET))(this);
		}

		::System::Void Method_5_37B1A315712743DC(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Collections::Generic::List_1<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_37B1A315712743DC_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Void Method_5_691A1C2F360A8C86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_691A1C2F360A8C86_OFFSET))(this);
		}

		::System::Void Method_5_D7952B26E014026F(::MoleMole::MonoGhostEffect_Class_1_48702BF31018C59D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGhostEffect_Class_1_48702BF31018C59D*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_D7952B26E014026F_OFFSET))(this, a1);
		}

		::System::Void Method_5_BF9BB9E2BBF3B6F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_BF9BB9E2BBF3B6F4_OFFSET))(this);
		}

		::System::Void Method_5_33ED1D695A028734(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_33ED1D695A028734_OFFSET))(this, a1);
		}

		::System::Void Method_5_26C5221AC22B6534()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_26C5221AC22B6534_OFFSET))(this);
		}

		::System::Void Method_5_E35EDDEF9577BCE6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_E35EDDEF9577BCE6_OFFSET))(this);
		}

		::System::Void Method_5_0A17961F2C7839AC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_0A17961F2C7839AC_OFFSET))(this);
		}

		::System::Void Method_5_91A773A85E497E9E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_91A773A85E497E9E_OFFSET))(this);
		}

		::UnityEngine::Transform* Method_5_923D2292AD68A88F(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_923D2292AD68A88F_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_2A1A0DC3332BB4CD(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_2A1A0DC3332BB4CD_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_AE80CBC984AADFD5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_AE80CBC984AADFD5_OFFSET))(this);
		}

		::System::Void Method_5_7BCE151B405796FB(::System::String* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9, ::MoleMole::Config::ConfigGhostMove* a10, ::Class_1_EA1FEF8121ADE963* a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean, ::MoleMole::Config::ConfigGhostMove*, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_7BCE151B405796FB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void Method_5_E876C8B6D3B840A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_E876C8B6D3B840A6_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_5_21378A7EB1BCB13B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_21378A7EB1BCB13B_OFFSET))(this);
		}

		::System::Void Method_5_EDA3923B891A3359(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_EDA3923B891A3359_OFFSET))(this, a1);
		}

		static ::UnityEngine::Transform* Method_5_7272DB0445BC9CB0(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_7272DB0445BC9CB0_OFFSET))(a1, a2);
		}

		::System::Boolean Method_5_86ADBB4228161C74()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_86ADBB4228161C74_OFFSET))(this);
		}

		::System::Void Method_5_D0B68C1DD4B91F49(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_D0B68C1DD4B91F49_OFFSET))(this, a1);
		}

		::System::Void Method_5_A41BBC1FFFE80811(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_A41BBC1FFFE80811_OFFSET))(this, a1);
		}

		::System::Void Method_5_5B94350BBAC6A35E(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_5B94350BBAC6A35E_OFFSET))(this, a1);
		}

		::System::Void Method_5_E2BCD1B56132A826()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_E2BCD1B56132A826_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_METHOD_5_F0088C88851A7DFB_1_OFFSET))(this);
		}
	};
}
