#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRaceChatEventType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CAKERACESENDCHATEVENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F10C30)
#define RPG_CLIENT_CAKERACESENDCHATEVENTDATA_GET_DATAID_OFFSET UNITYSDK_OFFSET(0x9F10CE0)
#define RPG_CLIENT_CAKERACESENDCHATEVENTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F10CC0)
#define RPG_CLIENT_CAKERACESENDCHATEVENTDATA_SET_DATAID_OFFSET UNITYSDK_OFFSET(0x9F10CF0)
#define RPG_CLIENT_CAKERACESENDCHATEVENTDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F10CD0)
#define RPG_CLIENT_CAKERACESENDCHATEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F10CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceSendChatEventData_TypeDefinitionIndex = 58067;

	class CakeRaceSendChatEventData : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceChatEventType _Type_k__BackingField; // 0x10
		::System::UInt32 _DataID_k__BackingField; // 0x14

		::System::Void _ctor(::RPG::Client::CakeRaceChatEventType type, ::System::UInt32 dataID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceChatEventType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESENDCHATEVENTDATA__CTOR_OFFSET))(this, type, dataID);
		}

		static ::RPG::Client::CakeRaceSendChatEventData* Create(::RPG::Client::CakeRaceChatEventType type, ::System::UInt32 dataID)
		{
			return ((::RPG::Client::CakeRaceSendChatEventData*(*)(::RPG::Client::CakeRaceChatEventType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESENDCHATEVENTDATA_CREATE_OFFSET))(type, dataID);
		}

		::RPG::Client::CakeRaceChatEventType get_Type()
		{
			return ((::RPG::Client::CakeRaceChatEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESENDCHATEVENTDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::CakeRaceChatEventType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceChatEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESENDCHATEVENTDATA_SET_TYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_DataID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESENDCHATEVENTDATA_GET_DATAID_OFFSET))(this);
		}

		::System::Void set_DataID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESENDCHATEVENTDATA_SET_DATAID_OFFSET))(this, value);
		}
	};
}
