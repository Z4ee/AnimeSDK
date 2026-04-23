#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

#define RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_CANCELFEEDBACK_OFFSET UNITYSDK_OFFSET(0xA88A2A0)
#define RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA88A2F0)
#define RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_GET_CANREGENERATE_OFFSET UNITYSDK_OFFSET(0xA88A380)
#define RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_GET_ISLIKE_OFFSET UNITYSDK_OFFSET(0xA88A340)
#define RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_GET_ISUNLIKE_OFFSET UNITYSDK_OFFSET(0xA88A360)
#define RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA88A230)
#define RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_SETUPFEEDBACK_OFFSET UNITYSDK_OFFSET(0xA88A250)
#define RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_SET_ISLIKE_OFFSET UNITYSDK_OFFSET(0xA88A350)
#define RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_SET_ISUNLIKE_OFFSET UNITYSDK_OFFSET(0xA88A370)
#define RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xA88A240)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentFeedbackBlock_TypeDefinitionIndex = 58277;

	class MessageContentFeedbackBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::Boolean _IsUnlike_k__BackingField; // 0x18
		::System::Boolean _IsLike_k__BackingField; // 0x19
		::System::Boolean _CanRegenerate_k__BackingField; // 0x1A

		::System::Void _ctor(::System::Boolean canRegenerate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK__CTOR_OFFSET))(this, canRegenerate);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Void SetupFeedback(::System::Boolean isLike)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_SETUPFEEDBACK_OFFSET))(this, isLike);
		}

		::System::Void CancelFeedback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_CANCELFEEDBACK_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean get_IsLike()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_GET_ISLIKE_OFFSET))(this);
		}

		::System::Void set_IsLike(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_SET_ISLIKE_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlike()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_GET_ISUNLIKE_OFFSET))(this);
		}

		::System::Void set_IsUnlike(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_SET_ISUNLIKE_OFFSET))(this, value);
		}

		::System::Boolean get_CanRegenerate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFEEDBACKBLOCK_GET_CANREGENERATE_OFFSET))(this);
		}
	};
}
