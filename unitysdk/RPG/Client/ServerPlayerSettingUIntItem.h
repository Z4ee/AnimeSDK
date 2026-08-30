#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ServerPlayerSettingItem.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_GET_CLIENTPREFSETTER_OFFSET UNITYSDK_OFFSET(0xE077AC0)
#define RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_SETVALUEFROMSERVER_OFFSET UNITYSDK_OFFSET(0xE0778C0)
#define RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_SET_CLIENTPREFSETTER_OFFSET UNITYSDK_OFFSET(0xE077AD0)
#define RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_SYNCCLIENTPREF_OFFSET UNITYSDK_OFFSET(0xE077A50)
#define RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE077AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ServerPlayerSettingUIntItem_TypeDefinitionIndex = 66732;

	class ServerPlayerSettingUIntItem : public ::RPG::Client::ServerPlayerSettingItem
	{
	public:
		::System::Action_1<::System::UInt32>* _ClientPrefSetter_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM__CTOR_OFFSET))(this);
		}

		::System::Void SetValueFromServer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_SETVALUEFROMSERVER_OFFSET))(this, a1);
		}

		::System::Void SyncClientPref(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_SYNCCLIENTPREF_OFFSET))(this, a1);
		}

		::System::Action_1<::System::UInt32>* get_ClientPrefSetter()
		{
			return ((::System::Action_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_GET_CLIENTPREFSETTER_OFFSET))(this);
		}

		::System::Void set_ClientPrefSetter(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_SET_CLIENTPREFSETTER_OFFSET))(this, a1);
		}
	};
}
