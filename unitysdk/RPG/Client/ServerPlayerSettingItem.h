#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_6.h"
#include "unitysdk/RPG/Client/PlayerSettingItem.h"

namespace System { class Object; }

#define RPG_CLIENT_SERVERPLAYERSETTINGITEM_GET_SERVERTYPE_OFFSET UNITYSDK_OFFSET(0xC8B67A0)
#define RPG_CLIENT_SERVERPLAYERSETTINGITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xC8B6660)
#define RPG_CLIENT_SERVERPLAYERSETTINGITEM_SET_SERVERTYPE_OFFSET UNITYSDK_OFFSET(0xC8B67B0)
#define RPG_CLIENT_SERVERPLAYERSETTINGITEM_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xC8B6670)
#define RPG_CLIENT_SERVERPLAYERSETTINGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC8B6650)
#define RPG_CLIENT_SERVERPLAYERSETTINGITEM___IFIXBASEPROXY_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xC8B67C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ServerPlayerSettingItem_TypeDefinitionIndex = 62379;

	class ServerPlayerSettingItem : public ::RPG::Client::PlayerSettingItem
	{
	public:
		::Enum_3_01618AD0437C8486_6 _ServerType_k__BackingField; // 0x18

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

		::Enum_3_01618AD0437C8486_6 get_ServerType()
		{
			return ((::Enum_3_01618AD0437C8486_6(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGITEM_GET_SERVERTYPE_OFFSET))(this);
		}

		::System::Void set_ServerType(::Enum_3_01618AD0437C8486_6 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_6))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGITEM_SET_SERVERTYPE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_set_Value(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGITEM___IFIXBASEPROXY_SET_VALUE_OFFSET))(this, a1);
		}
	};
}
