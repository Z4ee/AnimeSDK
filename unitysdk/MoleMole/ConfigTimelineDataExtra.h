#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ChatPlusTimelineExtraData; }
namespace MoleMole { class TimelineDataExtra; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGTIMELINEDATAEXTRA_GET_CHATPLUSTIMELINEEXTRADATAS_OFFSET UNITYSDK_OFFSET(0x158D5280)
#define MOLEMOLE_CONFIGTIMELINEDATAEXTRA_SET_CHATPLUSTIMELINEEXTRADATAS_OFFSET UNITYSDK_OFFSET(0x158D54C0)
#define MOLEMOLE_CONFIGTIMELINEDATAEXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0x158D54D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTimelineDataExtra_TypeDefinitionIndex = 56720;

	class ConfigTimelineDataExtra : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Int32 prorityOrder; // 0x58
		::System::Int32 timelineType; // 0x5C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineDataExtra*>* timelineExtraDatas; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINEDATAEXTRA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChatPlusTimelineExtraData*>* get_chatPlusTimelineExtraDatas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChatPlusTimelineExtraData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINEDATAEXTRA_GET_CHATPLUSTIMELINEEXTRADATAS_OFFSET))(this);
		}

		::System::Void set_chatPlusTimelineExtraDatas(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChatPlusTimelineExtraData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChatPlusTimelineExtraData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINEDATAEXTRA_SET_CHATPLUSTIMELINEEXTRADATAS_OFFSET))(this, value);
		}
	};
}
