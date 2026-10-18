#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A8D44899F7FF41D9_Enum_3_A76E7A97ADA6F210.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/MessageContentTradeBlock_TradeDisplayType.h"

class Class_1_A8D44899F7FF41D9;
namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xD69A7B0)
#define RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD69A950)
#define RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_DETAILCASE_OFFSET UNITYSDK_OFFSET(0xD69A940)
#define RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_DISPLAYTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD69A920)
#define RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xD69A930)
#define RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_HASOPERATOR_OFFSET UNITYSDK_OFFSET(0xD69A870)
#define RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_HASTIME_OFFSET UNITYSDK_OFFSET(0xD69A8C0)
#define RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_OPERATORUID_OFFSET UNITYSDK_OFFSET(0xD69A910)
#define RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_OTHERCONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0xD69B110)
#define RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_SELFCONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0xD69B1A0)
#define RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD69A4B0)
#define RPG_CLIENT_MESSAGECONTENTTRADEBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xD69A500)
#define RPG_CLIENT_MESSAGECONTENTTRADEBLOCK__GETOPERATORNAME_OFFSET UNITYSDK_OFFSET(0xD69B230)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentTradeBlock_TypeDefinitionIndex = 63253;

	class MessageContentTradeBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		// static const ::System::UInt32 _CANCEL_REASON_REJECT = 0x2; // 0x0
		::System::UInt32 _DisplayTimeStamp_k__BackingField; // 0x18
		::RPG::Client::MessageContentTradeBlock_TradeDisplayType _DisplayType_k__BackingField; // 0x1C
		::Class_1_A8D44899F7FF41D9_Enum_3_A76E7A97ADA6F210 _DetailCase_k__BackingField; // 0x20
		::System::UInt32 _OperatorUID_k__BackingField; // 0x24

		::System::Void _ctor(::Class_1_A8D44899F7FF41D9* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A8D44899F7FF41D9*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTRADEBLOCK__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasOperator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_HASOPERATOR_OFFSET))(this);
		}

		::System::Boolean get_HasTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_HASTIME_OFFSET))(this);
		}

		::System::UInt32 get_OperatorUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_OPERATORUID_OFFSET))(this);
		}

		::System::UInt32 get_DisplayTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_DISPLAYTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::MessageContentTradeBlock_TradeDisplayType get_DisplayType()
		{
			return ((::RPG::Client::MessageContentTradeBlock_TradeDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::Class_1_A8D44899F7FF41D9_Enum_3_A76E7A97ADA6F210 get_DetailCase()
		{
			return ((::Class_1_A8D44899F7FF41D9_Enum_3_A76E7A97ADA6F210(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_DETAILCASE_OFFSET))(this);
		}

		::System::String* get_Content()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_CONTENT_OFFSET))(this);
		}

		::System::String* get_SelfContentTextID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_SELFCONTENTTEXTID_OFFSET))(this);
		}

		::System::String* get_OtherContentTextID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTRADEBLOCK_GET_OTHERCONTENTTEXTID_OFFSET))(this);
		}

		::System::String* _GetOperatorName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTRADEBLOCK__GETOPERATORNAME_OFFSET))(this);
		}
	};
}
