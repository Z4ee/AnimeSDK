#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_8.h"
#include "unitysdk/RPG/Client/PlayerSettingItem.h"

namespace System { class Object; }

#define RPG_CLIENT_SERVERPLAYERSETTINGITEM_GET_SERVERTYPE_OFFSET UNITYSDK_OFFSET(0x19F40890)
#define RPG_CLIENT_SERVERPLAYERSETTINGITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19F40650)
#define RPG_CLIENT_SERVERPLAYERSETTINGITEM_SET_SERVERTYPE_OFFSET UNITYSDK_OFFSET(0x19F408A0)
#define RPG_CLIENT_SERVERPLAYERSETTINGITEM_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x19F40690)
#define RPG_CLIENT_SERVERPLAYERSETTINGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19F40640)

namespace RPG::Client
{
	inline static constexpr unsigned int ServerPlayerSettingItem_TypeDefinitionIndex = 63745;

	class ServerPlayerSettingItem : public ::RPG::Client::PlayerSettingItem
	{
	public:
		::Enum_3_01618AD0437C8486_8 _ServerType_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGITEM__CTOR_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGITEM_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGITEM_SET_VALUE_OFFSET))(this, a1);
		}

		::Enum_3_01618AD0437C8486_8 get_ServerType()
		{
			return ((::Enum_3_01618AD0437C8486_8(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGITEM_GET_SERVERTYPE_OFFSET))(this);
		}

		::System::Void set_ServerType(::Enum_3_01618AD0437C8486_8 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGITEM_SET_SERVERTYPE_OFFSET))(this, a1);
		}
	};
}
