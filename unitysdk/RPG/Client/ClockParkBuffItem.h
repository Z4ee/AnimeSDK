#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkBuffType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkEffectResult; }
namespace RPG::GameCore { class ClockParkBuffRow; }
namespace RPG::GameCore { class ClockParkBuffTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_CLOCKPARKBUFFITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA096230)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GETBUFFEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xA0975B0)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0xA0977D0)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_BUFFICONPATH_OFFSET UNITYSDK_OFFSET(0xA097840)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0xA0977A0)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_BUFFTYPECONFIG_OFFSET UNITYSDK_OFFSET(0xA097800)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA097700)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_EFFECTPARAM1_OFFSET UNITYSDK_OFFSET(0xA097740)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_EFFECTPARAM2_OFFSET UNITYSDK_OFFSET(0xA097760)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_EFFECTPARAM3_OFFSET UNITYSDK_OFFSET(0xA097780)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xA097630)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xA096C60)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_ISJOIN_OFFSET UNITYSDK_OFFSET(0xA096930)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_ISMANUALRELEASE_OFFSET UNITYSDK_OFFSET(0xA097820)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_REMAINEFFECTTIMES_OFFSET UNITYSDK_OFFSET(0xA097690)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_TAKEEFFECTTIMES_OFFSET UNITYSDK_OFFSET(0xA097670)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_TOTALEFFECTTIMES_OFFSET UNITYSDK_OFFSET(0xA0976E0)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA097720)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_GET_UID_OFFSET UNITYSDK_OFFSET(0xA097650)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_SET_BUFFTYPECONFIG_OFFSET UNITYSDK_OFFSET(0xA097810)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA097710)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xA097640)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_SET_TAKEEFFECTTIMES_OFFSET UNITYSDK_OFFSET(0xA097680)
#define RPG_CLIENT_CLOCKPARKBUFFITEM_SET_UID_OFFSET UNITYSDK_OFFSET(0xA097660)
#define RPG_CLIENT_CLOCKPARKBUFFITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA097320)
#define RPG_CLIENT_CLOCKPARKBUFFITEM__REFRESHEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xA097330)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkBuffItem_TypeDefinitionIndex = 56696;

	class ClockParkBuffItem : public ::System::Object
	{
	public:
		::RPG::GameCore::ClockParkBuffRow* _Config_k__BackingField; // 0x10
		::RPG::GameCore::ClockParkBuffTypeRow* _BuffTypeConfig_k__BackingField; // 0x18
		::RPG::Client::ClockParkEffectResult* EffectResult; // 0x20
		::System::UInt32 _TakeEffectTimes_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C
		::System::UInt64 _UID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ClockParkBuffItem* Create(::System::UInt32 id, ::System::UInt32 takeEffectTimes, ::System::UInt64 uid)
		{
			return ((::RPG::Client::ClockParkBuffItem*(*)(::System::UInt32, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_CREATE_OFFSET))(id, takeEffectTimes, uid);
		}

		static ::System::Void GetBuffEffectResult(::System::UInt32 buffID, ::RPG::Client::ClockParkEffectResult*& result)
		{
			return ((::System::Void(*)(::System::UInt32, ::RPG::Client::ClockParkEffectResult*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GETBUFFEFFECTRESULT_OFFSET))(buffID, result);
		}

		static ::System::Void _RefreshEffectResult(::RPG::GameCore::ClockParkBuffRow* config, ::RPG::Client::ClockParkEffectResult*& result)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkBuffRow*, ::RPG::Client::ClockParkEffectResult*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM__REFRESHEFFECTRESULT_OFFSET))(config, result);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_SET_ID_OFFSET))(this, value);
		}

		::System::UInt64 get_UID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_SET_UID_OFFSET))(this, value);
		}

		::System::UInt32 get_TakeEffectTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_TAKEEFFECTTIMES_OFFSET))(this);
		}

		::System::Void set_TakeEffectTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_SET_TAKEEFFECTTIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_RemainEffectTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_REMAINEFFECTTIMES_OFFSET))(this);
		}

		::RPG::GameCore::ClockParkBuffRow* get_Config()
		{
			return ((::RPG::GameCore::ClockParkBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ClockParkBuffRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkBuffRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_SET_CONFIG_OFFSET))(this, value);
		}

		::RPG::GameCore::ClockParkBuffType get_Type()
		{
			return ((::RPG::GameCore::ClockParkBuffType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_TotalEffectTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_TOTALEFFECTTIMES_OFFSET))(this);
		}

		::System::Int32 get_EffectParam1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_EFFECTPARAM1_OFFSET))(this);
		}

		::System::Int32 get_EffectParam2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_EFFECTPARAM2_OFFSET))(this);
		}

		::System::Int32 get_EffectParam3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_EFFECTPARAM3_OFFSET))(this);
		}

		::RPG::Client::TextID get_BuffName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_BUFFNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_BuffDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_BUFFDESC_OFFSET))(this);
		}

		::RPG::GameCore::ClockParkBuffTypeRow* get_BuffTypeConfig()
		{
			return ((::RPG::GameCore::ClockParkBuffTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_BUFFTYPECONFIG_OFFSET))(this);
		}

		::System::Void set_BuffTypeConfig(::RPG::GameCore::ClockParkBuffTypeRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkBuffTypeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_SET_BUFFTYPECONFIG_OFFSET))(this, value);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_ISDISPLAY_OFFSET))(this);
		}

		::System::Boolean get_IsJoin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_ISJOIN_OFFSET))(this);
		}

		::System::Boolean get_IsManualRelease()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_ISMANUALRELEASE_OFFSET))(this);
		}

		::System::String* get_BuffIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFITEM_GET_BUFFICONPATH_OFFSET))(this);
		}
	};
}
