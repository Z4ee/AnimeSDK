#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RecordPropertyType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_E4E0EE0B8D84A8B2;
namespace RPG::Client { class BinderIndex; }
namespace RPG::Client { class PoolPropertyScriptableObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_POOLABLEBINDER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x19399FD0)
#define RPG_CLIENT_POOLABLEBINDER_ISPOOLABLE_OFFSET UNITYSDK_OFFSET(0x1939A1C0)
#define RPG_CLIENT_POOLABLEBINDER_METHOD_5_336790322D186E73_OFFSET UNITYSDK_OFFSET(0x1939A0E0)
#define RPG_CLIENT_POOLABLEBINDER_METHOD_5_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x19399AD0)
#define RPG_CLIENT_POOLABLEBINDER_METHOD_5_D7D030A2E17FBB84_OFFSET UNITYSDK_OFFSET(0x193997C0)
#define RPG_CLIENT_POOLABLEBINDER_RECORDBEFOREPROPERTYSET_1_OFFSET UNITYSDK_OFFSET(0x193994D0)
#define RPG_CLIENT_POOLABLEBINDER_RECORDBEFOREPROPERTYSET_OFFSET UNITYSDK_OFFSET(0x193992B0)
#define RPG_CLIENT_POOLABLEBINDER_SPAWNED_OFFSET UNITYSDK_OFFSET(0x19399A80)
#define RPG_CLIENT_POOLABLEBINDER_TRYRECORD_1_OFFSET UNITYSDK_OFFSET(0x19399980)
#define RPG_CLIENT_POOLABLEBINDER_TRYRECORD_OFFSET UNITYSDK_OFFSET(0x193996F0)
#define RPG_CLIENT_POOLABLEBINDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1939A2D0)
#define RPG_CLIENT_POOLABLEBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1939A250)

namespace RPG::Client
{
	inline static constexpr unsigned int PoolableBinder_TypeDefinitionIndex = 69347;

	class PoolableBinder : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_PoolTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PoolableBinder_TypeDefinitionIndex)->GetStaticField(0x1BFC0);
		}
		static ::System::String** StaticGet_UnPoolTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PoolableBinder_TypeDefinitionIndex)->GetStaticField(0x1BFC8);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E4E0EE0B8D84A8B2*>* Field_5_2; // 0x18
		::RPG::Client::PoolPropertyScriptableObject* m_poolPropertyRecord; // 0x20
		::System::Boolean Field_5_4; // 0x28
		::RPG::Client::BinderIndex* Field_5_5; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER__CCTOR_OFFSET))();
		}

		::System::Void RecordBeforePropertySet(::UnityEngine::GameObject* a1, ::RPG::Client::RecordPropertyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::RecordPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_RECORDBEFOREPROPERTYSET_OFFSET))(this, a1, a2);
		}

		::System::Void RecordBeforePropertySet_1(::UnityEngine::Behaviour* a1, ::RPG::Client::RecordPropertyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Behaviour*, ::RPG::Client::RecordPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_RECORDBEFOREPROPERTYSET_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void TryRecord(::UnityEngine::GameObject* a1, ::RPG::Client::RecordPropertyType a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::RecordPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_TRYRECORD_OFFSET))(a1, a2);
		}

		static ::System::Void TryRecord_1(::UnityEngine::Behaviour* a1, ::RPG::Client::RecordPropertyType a2)
		{
			return ((::System::Void(*)(::UnityEngine::Behaviour*, ::RPG::Client::RecordPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_TRYRECORD_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PoolableBinder* Method_5_D7D030A2E17FBB84(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::PoolableBinder*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_METHOD_5_D7D030A2E17FBB84_OFFSET))(a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_DESPAWNED_OFFSET))(this);
		}

		::RPG::Client::BinderIndex* Method_5_336790322D186E73()
		{
			return ((::RPG::Client::BinderIndex*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_METHOD_5_336790322D186E73_OFFSET))(this);
		}

		::System::Void Method_5_33E2FA8E6403B93D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_METHOD_5_33E2FA8E6403B93D_OFFSET))(this);
		}

		::System::Boolean IsPoolable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLABLEBINDER_ISPOOLABLE_OFFSET))(this);
		}
	};
}
