#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PamChatFeedbackConfigRow; }
namespace RPG::GameCore { class ReportTypeConfigRow; }

#define RPG_CLIENT_CHATREPORTREASON_GET_ID_OFFSET UNITYSDK_OFFSET(0x9F87EE0)
#define RPG_CLIENT_CHATREPORTREASON_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9F87EF0)
#define RPG_CLIENT_CHATREPORTREASON__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9F87EB0)
#define RPG_CLIENT_CHATREPORTREASON__CTOR_OFFSET UNITYSDK_OFFSET(0x9F83590)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatReportReason_TypeDefinitionIndex = 58237;

	class ChatReportReason : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::RPG::Client::TextID _Name_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::ReportTypeConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ReportTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATREPORTREASON__CTOR_OFFSET))(this, row);
		}

		::System::Void _ctor_1(::RPG::GameCore::PamChatFeedbackConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PamChatFeedbackConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATREPORTREASON__CTOR_1_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATREPORTREASON_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATREPORTREASON_GET_NAME_OFFSET))(this);
		}
	};
}
