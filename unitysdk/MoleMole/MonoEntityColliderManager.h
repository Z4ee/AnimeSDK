#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ADDHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x13AB12A0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_CLEARHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x13AB1230)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_EMPTY_OFFSET UNITYSDK_OFFSET(0x13AB21D0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_HASHULLCOLLIDERWITHNOCOLLIDER_OFFSET UNITYSDK_OFFSET(0x13AB2B60)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_METHOD_5_2DCDFF29E7FDDAA8_1_OFFSET UNITYSDK_OFFSET(0x13AB0980)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_METHOD_5_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x13AB06B0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_METHOD_5_BD658202BB4C4431_1_OFFSET UNITYSDK_OFFSET(0x13AB30E0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_METHOD_5_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x13AB3080)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13AB0B90)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13AB08C0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13AB05F0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x13AB13C0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERHULLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x13AB17C0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTEROTHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x13AB1EB0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERWALLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x13AB1BF0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_SETDEFAULTHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x13AB1370)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYCOLLIDERINSTANCEID_OFFSET UNITYSDK_OFFSET(0x13AB27A0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYHITCOLLIDER_1_OFFSET UNITYSDK_OFFSET(0x13AB2690)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x13AB2490)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYWALLCOLLIDERINSTANCEID_OFFSET UNITYSDK_OFFSET(0x13AB2A50)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x13AB0CD0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERHULLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x13AB0DF0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTEROTHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x13AB1040)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERWALLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x13AB0F10)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AB2D80)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB2C50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityColliderManager_TypeDefinitionIndex = 53272;

	class MonoEntityColliderManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>** StaticGet_Field_5_1()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityColliderManager_TypeDefinitionIndex)->GetStaticField(0x46E30);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>** StaticGet_Field_5_7()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityColliderManager_TypeDefinitionIndex)->GetStaticField(0x46E38);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_5_5()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityColliderManager_TypeDefinitionIndex)->GetStaticField(0x46E40);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityColliderManager_TypeDefinitionIndex)->GetStaticField(0x46E48);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>** StaticGet_Field_5_6()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityColliderManager_TypeDefinitionIndex)->GetStaticField(0x46E50);
		}
		::UnityEngine::Collider* defaultHitCollider; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* triggerColliderList; // 0x20
		::UnityEngine::Collider* defaultHullCollider; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* hullColliderList; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* wallColliderList; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* hullColliderInitEntityNoCollider; // 0x40
		::Il2CppArray<::UnityEngine::Collider*>* hullColliderWithEntityNoCollider; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* otherColliderList; // 0x50
		::System::Boolean Field_5_12; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_19; // 0x60
		::System::Boolean Field_5_18; // 0x68
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_17; // 0x70
		::System::Boolean Field_5_16; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_23; // 0x80
		::System::Boolean Field_5_22; // 0x88
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_21; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearHitCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_CLEARHITCOLLIDER_OFFSET))(this);
		}

		::System::Void AddHitCollider(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ADDHITCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void SetDefaultHitCollider(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_SETDEFAULTHITCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void RegisterHitCollider(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERHITCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void UnRegisterHitCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERHITCOLLIDER_OFFSET))(this);
		}

		::System::Void RegisterHullCollider(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERHULLCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void UnRegisterHullCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERHULLCOLLIDER_OFFSET))(this);
		}

		::System::Void RegisterWallCollider(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERWALLCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void UnRegisterWallCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERWALLCOLLIDER_OFFSET))(this);
		}

		::System::Void RegisterOtherCollider(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTEROTHERCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void UnRegisterOtherCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTEROTHERCOLLIDER_OFFSET))(this);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_EMPTY_OFFSET))();
		}

		static ::System::Boolean TryGetRegisterEntityByHitCollider(::UnityEngine::Collider* a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYHITCOLLIDER_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryGetRegisterEntityByHitCollider_1(::System::Int32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYHITCOLLIDER_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryGetRegisterEntityByColliderInstanceId(::System::Int32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYCOLLIDERINSTANCEID_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryGetRegisterEntityByWallColliderInstanceId(::System::Int32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYWALLCOLLIDERINSTANCEID_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasHullColliderWithNoCollider(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_HASHULLCOLLIDERWITHNOCOLLIDER_OFFSET))(a1);
		}

		::System::Void Method_5_BD658202BB4C4431()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_METHOD_5_BD658202BB4C4431_OFFSET))(this);
		}

		::System::Void Method_5_2DCDFF29E7FDDAA8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_METHOD_5_2DCDFF29E7FDDAA8_OFFSET))(this);
		}

		::System::Void Method_5_BD658202BB4C4431_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_METHOD_5_BD658202BB4C4431_1_OFFSET))(this);
		}

		::System::Void Method_5_2DCDFF29E7FDDAA8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_METHOD_5_2DCDFF29E7FDDAA8_1_OFFSET))(this);
		}
	};
}
