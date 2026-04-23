#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceParticipantData; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F04BB0)
#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_GET_FOLLOWGO_OFFSET UNITYSDK_OFFSET(0x9F04D00)
#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_GET_NEEDDESTROY_OFFSET UNITYSDK_OFFSET(0x9F04D20)
#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_GET_OWNERDATA_OFFSET UNITYSDK_OFFSET(0x9F04CE0)
#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_SET_FOLLOWGO_OFFSET UNITYSDK_OFFSET(0x9F04D10)
#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_SET_NEEDDESTROY_OFFSET UNITYSDK_OFFSET(0x9F04D30)
#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_SET_OWNERDATA_OFFSET UNITYSDK_OFFSET(0x9F04CF0)
#define RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F04C50)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHUDFollowHeadIconData_TypeDefinitionIndex = 58062;

	class CakeRaceHUDFollowHeadIconData : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceParticipantData* _OwnerData_k__BackingField; // 0x10
		::UnityEngine::GameObject* _FollowGO_k__BackingField; // 0x18
		::System::Boolean _NeedDestroy_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 ownerID, ::UnityEngine::GameObject* followGO, ::System::Boolean needDestroy)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA__CTOR_OFFSET))(this, ownerID, followGO, needDestroy);
		}

		static ::RPG::Client::CakeRaceHUDFollowHeadIconData* Create(::System::UInt32 ownerID, ::UnityEngine::GameObject* followGO, ::System::Boolean needDestroy)
		{
			return ((::RPG::Client::CakeRaceHUDFollowHeadIconData*(*)(::System::UInt32, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_CREATE_OFFSET))(ownerID, followGO, needDestroy);
		}

		::RPG::Client::CakeRaceParticipantData* get_OwnerData()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_GET_OWNERDATA_OFFSET))(this);
		}

		::System::Void set_OwnerData(::RPG::Client::CakeRaceParticipantData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_SET_OWNERDATA_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_FollowGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_GET_FOLLOWGO_OFFSET))(this);
		}

		::System::Void set_FollowGO(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_SET_FOLLOWGO_OFFSET))(this, value);
		}

		::System::Boolean get_NeedDestroy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_GET_NEEDDESTROY_OFFSET))(this);
		}

		::System::Void set_NeedDestroy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDFOLLOWHEADICONDATA_SET_NEEDDESTROY_OFFSET))(this, value);
		}
	};
}
