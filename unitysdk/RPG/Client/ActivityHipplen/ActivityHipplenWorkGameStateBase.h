#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE_GET_RELATEDWORKDATA_OFFSET UNITYSDK_OFFSET(0x1B7BE310)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1B7BE330)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1B7BE0C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE_SET_RELATEDWORKDATA_OFFSET UNITYSDK_OFFSET(0x1B7BE320)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B7A6D90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7BE0B0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenWorkGameStateBase_TypeDefinitionIndex = 75235;

	class ActivityHipplenWorkGameStateBase : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* _RelatedWorkData_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void OnEnter(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE_ONENTER_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* get_RelatedWorkData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE_GET_RELATEDWORKDATA_OFFSET))(this);
		}

		::System::Void set_RelatedWorkData(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE_SET_RELATEDWORKDATA_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE_GET_TITLE_OFFSET))(this);
		}
	};
}
