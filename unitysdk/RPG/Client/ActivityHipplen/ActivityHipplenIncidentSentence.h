#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityHipplenSentenceRow; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSENTENCE_GET_DESC_OFFSET UNITYSDK_OFFSET(0x8F1C710)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSENTENCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x8F1C650)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSENTENCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8F1C6E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSENTENCE_GET_SHOWNAME_OFFSET UNITYSDK_OFFSET(0x8F1C670)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSENTENCE_SET_ID_OFFSET UNITYSDK_OFFSET(0x8F1C660)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSENTENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F1C610)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenIncidentSentence_TypeDefinitionIndex = 61694;

	class ActivityHipplenIncidentSentence : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityHipplenSentenceRow* _Row; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSENTENCE__CTOR_OFFSET))(this, id);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSENTENCE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSENTENCE_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_ShowName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSENTENCE_GET_SHOWNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSENTENCE_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSENTENCE_GET_DESC_OFFSET))(this);
		}
	};
}
