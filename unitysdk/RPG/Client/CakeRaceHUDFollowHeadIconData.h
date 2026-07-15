#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceParticipantData; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AACF960)
#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_GET_FOLLOWGO_OFFSET UNITYSDK_OFFSET(0x1AACFA50)
#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_GET_NEEDDESTROY_OFFSET UNITYSDK_OFFSET(0x1AACFA70)
#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_GET_OWNERDATA_OFFSET UNITYSDK_OFFSET(0x1AACFA30)
#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_SET_FOLLOWGO_OFFSET UNITYSDK_OFFSET(0x1AACFA60)
#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_SET_NEEDDESTROY_OFFSET UNITYSDK_OFFSET(0x1AACFA80)
#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_SET_OWNERDATA_OFFSET UNITYSDK_OFFSET(0x1AACFA40)
#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AACFA00)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHUDFollowHeadIconData_TypeDefinitionIndex = 60249;

	class CakeRaceHUDFollowHeadIconData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _FollowGO_k__BackingField; // 0x10
		::RPG::Client::CakeRaceParticipantData* _OwnerData_k__BackingField; // 0x18
		::System::Boolean _NeedDestroy_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::CakeRaceHUDFollowHeadIconData* Create(::System::UInt32 a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::CakeRaceHUDFollowHeadIconData*(*)(::System::UInt32, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::CakeRaceParticipantData* get_OwnerData()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_GET_OWNERDATA_OFFSET))(this);
		}

		::System::Void set_OwnerData(::RPG::Client::CakeRaceParticipantData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_SET_OWNERDATA_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_FollowGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_GET_FOLLOWGO_OFFSET))(this);
		}

		::System::Void set_FollowGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_SET_FOLLOWGO_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedDestroy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_GET_NEEDDESTROY_OFFSET))(this);
		}

		::System::Void set_NeedDestroy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_SET_NEEDDESTROY_OFFSET))(this, a1);
		}
	};
}
