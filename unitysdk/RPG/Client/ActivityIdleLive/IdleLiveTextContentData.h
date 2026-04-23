#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDanmuContentData.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class IdleLiveChatContentRow; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9BD6D00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x9BD6CE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x9BD6CF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD6DB0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTextContentData_TypeDefinitionIndex = 69411;

	class IdleLiveTextContentData : public ::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData
	{
	public:
		::RPG::Client::TextID _Content_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::IdleLiveChatContentRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveChatContentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA__CTOR_OFFSET))(this, row);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA_SET_CONTENT_OFFSET))(this, value);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveTextContentData* Create(::System::UInt32 chatContentId)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTextContentData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTCONTENTDATA_CREATE_OFFSET))(chatContentId);
		}
	};
}
