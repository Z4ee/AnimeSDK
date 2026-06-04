#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ServerPlayerSettingItem.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_GET_CLIENTPREFSETTER_OFFSET UNITYSDK_OFFSET(0xC8B6620)
#define RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SETVALUEFROMSERVER_OFFSET UNITYSDK_OFFSET(0xC8B6460)
#define RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SET_CLIENTPREFSETTER_OFFSET UNITYSDK_OFFSET(0xC8B6630)
#define RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0xC8B65F0)
#define RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SYNCCLIENTPREF_OFFSET UNITYSDK_OFFSET(0xC8B6580)
#define RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC8B6640)

namespace RPG::Client
{
	inline static constexpr unsigned int ServerPlayerSettingBoolItem_TypeDefinitionIndex = 62380;

	class ServerPlayerSettingBoolItem : public ::RPG::Client::ServerPlayerSettingItem
	{
	public:
		::System::Action_1<::System::Boolean>* _ClientPrefSetter_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM__CTOR_OFFSET))(this);
		}

		::System::Void SetValueFromServer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SETVALUEFROMSERVER_OFFSET))(this, a1);
		}

		::System::Void SyncClientPref(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SYNCCLIENTPREF_OFFSET))(this, a1);
		}

		::System::Void set_DefaultValue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SET_DEFAULTVALUE_OFFSET))(this, a1);
		}

		::System::Action_1<::System::Boolean>* get_ClientPrefSetter()
		{
			return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_GET_CLIENTPREFSETTER_OFFSET))(this);
		}

		::System::Void set_ClientPrefSetter(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SET_CLIENTPREFSETTER_OFFSET))(this, a1);
		}
	};
}
