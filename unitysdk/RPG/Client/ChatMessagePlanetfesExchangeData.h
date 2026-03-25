#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_1.h"
#include "unitysdk/RPG/Client/ChatMessageExtendData.h"

class Class_1_9F4DE0130D72755A;

#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GETRUNTIMEVAILD_OFFSET UNITYSDK_OFFSET(0x9313810)
#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x9313A20)
#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x9313A40)
#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x9313A30)
#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x9313A50)
#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9313260)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatMessagePlanetfesExchangeData_TypeDefinitionIndex = 51309;

	class ChatMessagePlanetfesExchangeData : public ::RPG::Client::ChatMessageExtendData
	{
	public:
		::System::UInt64 _ItemID_k__BackingField; // 0x18
		::Enum_3_0A3761FE34514D6C_1 _ContentType_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_9F4DE0130D72755A* planetFesChatMsg, ::System::UInt32 timeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9F4DE0130D72755A*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA__CTOR_OFFSET))(this, planetFesChatMsg, timeStamp);
		}

		::System::Boolean GetRunTimeVaild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GETRUNTIMEVAILD_OFFSET))(this);
		}

		::Enum_3_0A3761FE34514D6C_1 get_ContentType()
		{
			return ((::Enum_3_0A3761FE34514D6C_1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::Enum_3_0A3761FE34514D6C_1 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_SET_CONTENTTYPE_OFFSET))(this, value);
		}

		::System::UInt64 get_ItemID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_SET_ITEMID_OFFSET))(this, value);
		}
	};
}
