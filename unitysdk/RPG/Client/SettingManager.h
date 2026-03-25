#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SettingManager_HoekeySettingType.h"
#include "unitysdk/RPG/Client/SettingManager_WalkSwitchMode.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SETTINGMANAGER_CHECKISNEEDSETTINGHDR_OFFSET UNITYSDK_OFFSET(0xA474CA0)
#define RPG_CLIENT_SETTINGMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA474860)
#define RPG_CLIENT_SETTINGMANAGER_GETEIGHTWHEELDEFAULTINDEXBYORDER_OFFSET UNITYSDK_OFFSET(0xA474B80)
#define RPG_CLIENT_SETTINGMANAGER_GETFOURWHEELDEFAULTINDEXBYORDER_OFFSET UNITYSDK_OFFSET(0xA474BD0)
#define RPG_CLIENT_SETTINGMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA475510)
#define RPG_CLIENT_SETTINGMANAGER_GET_ISMOBILEGAMEPADMODE_OFFSET UNITYSDK_OFFSET(0xA4753F0)
#define RPG_CLIENT_SETTINGMANAGER_GET_PSDEFAULTMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0xA475410)
#define RPG_CLIENT_SETTINGMANAGER_GET_PSDEFAULTPAPERWHITE_OFFSET UNITYSDK_OFFSET(0xA475440)
#define RPG_CLIENT_SETTINGMANAGER_GET_PSHIGHESTMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0xA475430)
#define RPG_CLIENT_SETTINGMANAGER_GET_PSHIGHESTPAPERWHITE_OFFSET UNITYSDK_OFFSET(0xA475460)
#define RPG_CLIENT_SETTINGMANAGER_GET_PSLOWERMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0xA475420)
#define RPG_CLIENT_SETTINGMANAGER_GET_PSLOWESTPAPERWHITE_OFFSET UNITYSDK_OFFSET(0xA475450)
#define RPG_CLIENT_SETTINGMANAGER_GET_WALKSWITCHVALUE_OFFSET UNITYSDK_OFFSET(0xA4752C0)
#define RPG_CLIENT_SETTINGMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA474820)
#define RPG_CLIENT_SETTINGMANAGER_ISSUPPORTDLSS_OFFSET UNITYSDK_OFFSET(0xA4754B0)
#define RPG_CLIENT_SETTINGMANAGER_RESETACTIONBIND_OFFSET UNITYSDK_OFFSET(0xA474910)
#define RPG_CLIENT_SETTINGMANAGER_RESETEIGHTWHEELSETTING_OFFSET UNITYSDK_OFFSET(0xA474C20)
#define RPG_CLIENT_SETTINGMANAGER_RESETFOURWHEELSETTING_OFFSET UNITYSDK_OFFSET(0xA474C60)
#define RPG_CLIENT_SETTINGMANAGER_SAVESETTINGS_OFFSET UNITYSDK_OFFSET(0xA4748A0)
#define RPG_CLIENT_SETTINGMANAGER_SET_ISMOBILEGAMEPADMODE_OFFSET UNITYSDK_OFFSET(0xA475400)
#define RPG_CLIENT_SETTINGMANAGER_SET_WALKSWITCHVALUE_OFFSET UNITYSDK_OFFSET(0xA4752D0)
#define RPG_CLIENT_SETTINGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA475540)

namespace RPG::Client
{
	inline static constexpr unsigned int SettingManager_TypeDefinitionIndex = 55755;

	class SettingManager : public ::System::Object
	{
	public:
		// static const ::System::Single _HDRSettingThreshold; // 0x0
		::System::Single _PSLowestPaperWhite; // 0x10
		::RPG::Client::SettingManager_WalkSwitchMode _WalkSwitchValue; // 0x14
		::System::Single _PSHighestMaxLuminance; // 0x18
		::System::Single _PSHighestPaperRatio; // 0x1C
		::System::Single _PSLowestMaxLuminance; // 0x20
		::System::Boolean _IsMobileGamePadMode; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SaveSettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_SAVESETTINGS_OFFSET))(this);
		}

		::System::Void ResetActionBind(::RPG::Client::SettingManager_HoekeySettingType settingType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SettingManager_HoekeySettingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_RESETACTIONBIND_OFFSET))(this, settingType);
		}

		::System::Int32 GetEightWheelDefaultIndexByOrder(::System::Int32 order)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GETEIGHTWHEELDEFAULTINDEXBYORDER_OFFSET))(this, order);
		}

		::System::Int32 GetFourWheelDefaultIndexByOrder(::System::Int32 order)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GETFOURWHEELDEFAULTINDEXBYORDER_OFFSET))(this, order);
		}

		::System::Void ResetEightWheelSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_RESETEIGHTWHEELSETTING_OFFSET))(this);
		}

		::System::Void ResetFourWheelSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_RESETFOURWHEELSETTING_OFFSET))(this);
		}

		::System::Boolean CheckIsNeedSettingHDR()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_CHECKISNEEDSETTINGHDR_OFFSET))(this);
		}

		::RPG::Client::SettingManager_WalkSwitchMode get_WalkSwitchValue()
		{
			return ((::RPG::Client::SettingManager_WalkSwitchMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_WALKSWITCHVALUE_OFFSET))(this);
		}

		::System::Void set_WalkSwitchValue(::RPG::Client::SettingManager_WalkSwitchMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SettingManager_WalkSwitchMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_SET_WALKSWITCHVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_IsMobileGamePadMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_ISMOBILEGAMEPADMODE_OFFSET))(this);
		}

		::System::Void set_IsMobileGamePadMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_SET_ISMOBILEGAMEPADMODE_OFFSET))(this, value);
		}

		::System::Single get_PSDefaultMaxLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_PSDEFAULTMAXLUMINANCE_OFFSET))(this);
		}

		::System::Single get_PSLowerMaxLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_PSLOWERMAXLUMINANCE_OFFSET))(this);
		}

		::System::Single get_PSHighestMaxLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_PSHIGHESTMAXLUMINANCE_OFFSET))(this);
		}

		::System::Single get_PSDefaultPaperWhite()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_PSDEFAULTPAPERWHITE_OFFSET))(this);
		}

		::System::Single get_PSLowestPaperWhite()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_PSLOWESTPAPERWHITE_OFFSET))(this);
		}

		::System::Single get_PSHighestPaperWhite()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_PSHIGHESTPAPERWHITE_OFFSET))(this);
		}

		::System::Boolean IsSupportDlss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_ISSUPPORTDLSS_OFFSET))(this);
		}

		static ::RPG::Client::SettingManager* get_Instance()
		{
			return ((::RPG::Client::SettingManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_INSTANCE_OFFSET))();
		}
	};
}
