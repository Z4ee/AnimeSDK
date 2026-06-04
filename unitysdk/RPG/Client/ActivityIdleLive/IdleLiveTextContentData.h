#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDanmuContentData.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class IdleLiveChatContentRow; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB172530)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xB172510)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xB172520)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB1725E0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTextContentData_TypeDefinitionIndex = 70223;

	class IdleLiveTextContentData : public ::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData
	{
	public:
		::RPG::Client::TextID _Content_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::IdleLiveChatContentRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveChatContentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA_SET_CONTENT_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveTextContentData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTextContentData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA_CREATE_OFFSET))(a1);
		}
	};
}
