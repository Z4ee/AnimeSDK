#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseMonoTriggerRegion.h"
#include "unitysdk/Struct_2_591DD46947F040CB.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOTRIGGERREGION_ENABLECOLLIDER_OFFSET UNITYSDK_OFFSET(0xD8742E0)
#define RPG_CLIENT_MONOTRIGGERREGION_GET_CORRESPONDCOLLIDER_OFFSET UNITYSDK_OFFSET(0xD8743B0)
#define RPG_CLIENT_MONOTRIGGERREGION_METHOD_6_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0xD874130)
#define RPG_CLIENT_MONOTRIGGERREGION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD8740E0)
#define RPG_CLIENT_MONOTRIGGERREGION_ONGUESTCOLLIDERDISABLE_OFFSET UNITYSDK_OFFSET(0xD874340)
#define RPG_CLIENT_MONOTRIGGERREGION_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xD873EF0)
#define RPG_CLIENT_MONOTRIGGERREGION_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xD874020)
#define RPG_CLIENT_MONOTRIGGERREGION_OVERLAPPOINT_OFFSET UNITYSDK_OFFSET(0xD873950)
#define RPG_CLIENT_MONOTRIGGERREGION_OVERLAP_OFFSET UNITYSDK_OFFSET(0xD873680)
#define RPG_CLIENT_MONOTRIGGERREGION_SETCOLLIDER_OFFSET UNITYSDK_OFFSET(0xD874290)
#define RPG_CLIENT_MONOTRIGGERREGION__CTOR_OFFSET UNITYSDK_OFFSET(0xD8743C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTriggerRegion_TypeDefinitionIndex = 68588;

	class MonoTriggerRegion : public ::RPG::Client::BaseMonoTriggerRegion
	{
	public:
		::UnityEngine::Collider* GBDKBLPAHEL; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* AHHMLCPGGJH; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>* Overlap(::UnityEngine::LayerMask a1)
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>*(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_OVERLAP_OFFSET))(this, a1);
		}

		::System::Boolean OverlapPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_OVERLAPPOINT_OFFSET))(this, a1);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetCollider(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_SETCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void EnableCollider(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_ENABLECOLLIDER_OFFSET))(this, a1);
		}

		::System::Void Method_6_C56DC3B2E26040B8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_METHOD_6_C56DC3B2E26040B8_OFFSET))(this);
		}

		::System::Void OnGuestColliderDisable(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_ONGUESTCOLLIDERDISABLE_OFFSET))(this, a1);
		}

		::UnityEngine::Collider* get_CorrespondCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRIGGERREGION_GET_CORRESPONDCOLLIDER_OFFSET))(this);
		}
	};
}
