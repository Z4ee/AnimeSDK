#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_1.h"
#include "unitysdk/RPG/Client/ChatMessageExtendData.h"

class Class_1_9F9C2AEAEFFE3610;

#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GETRUNTIMEVAILD_OFFSET UNITYSDK_OFFSET(0xB599320)
#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xB599530)
#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xB599550)
#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xB599540)
#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xB599560)
#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB598D70)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatMessagePlanetfesExchangeData_TypeDefinitionIndex = 59165;

	class ChatMessagePlanetfesExchangeData : public ::RPG::Client::ChatMessageExtendData
	{
	public:
		::Enum_3_0A3761FE34514D6C_1 _ContentType_k__BackingField; // 0x18
		::System::UInt64 _ItemID_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_9F9C2AEAEFFE3610* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9F9C2AEAEFFE3610*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetRunTimeVaild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GETRUNTIMEVAILD_OFFSET))(this);
		}

		::Enum_3_0A3761FE34514D6C_1 get_ContentType()
		{
			return ((::Enum_3_0A3761FE34514D6C_1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::Enum_3_0A3761FE34514D6C_1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_SET_CONTENTTYPE_OFFSET))(this, a1);
		}

		::System::UInt64 get_ItemID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_SET_ITEMID_OFFSET))(this, a1);
		}
	};
}
