#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class FatigueRemindModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_ANTIADDICTIONMANAGER_GETFATIGUEREMINDERACTIVETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x19FBEF00)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER_GETFATIGUEREMINDERRESETDATEKEY_OFFSET UNITYSDK_OFFSET(0x19FBEBF0)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER_GETFATIGUEREMINDERTOTALTIMEKEY_OFFSET UNITYSDK_OFFSET(0x19FBF2D0)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER_GETNOWDATE_OFFSET UNITYSDK_OFFSET(0x19FBE120)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER_GETNOWMILLISEC_OFFSET UNITYSDK_OFFSET(0x19FBDD30)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER_GETONEDAYSEC_OFFSET UNITYSDK_OFFSET(0x19FBE110)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER_GETTODAYNOWSEC_OFFSET UNITYSDK_OFFSET(0x19FBDF30)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER_INCREASEFATIGUEREMINDER_OFFSET UNITYSDK_OFFSET(0x19FBE1D0)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER_INITFATIGUEREMINDERCONFIG_OFFSET UNITYSDK_OFFSET(0x19FBD6E0)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19FBD620)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER_ISFATIGUEREMINDERCONFIGVALID_OFFSET UNITYSDK_OFFSET(0x19FBDAF0)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER_RECORDFATIGUEREMINDERACTIVETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x19FBF040)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER_RESETFATIGUEREMINDERTIME_OFFSET UNITYSDK_OFFSET(0x19FBED30)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER_SENDFATIGUEREMINDER_OFFSET UNITYSDK_OFFSET(0x19FBF410)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER_STARTFATIGUEREMINDERMONITOR_OFFSET UNITYSDK_OFFSET(0x19FBDB70)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER_STOPFATIGUEREMINDERMONITOR_OFFSET UNITYSDK_OFFSET(0x19FBDCF0)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FBD6B0)
#define MIHOYO_SDK_ANTIADDICTIONMANAGER__STARTFATIGUEREMINDERMONITOR_B__11_0_OFFSET UNITYSDK_OFFSET(0x19FBF880)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AntiAddictionManager_TypeDefinitionIndex = 18848;

	class AntiAddictionManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::AntiAddictionManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::AntiAddictionManager**)Il2CppClass::FromTypeDefinitionIndex(AntiAddictionManager_TypeDefinitionIndex)->GetStaticField(0xAED0);
		}
		// static const ::System::Single FATIGUE_REMINDER_MONITOR_INTERVAL; // 0x0
		// static const ::System::String* FATIGUE_REMINDER_TOTAL_TIME; // 0x0
		// static const ::System::String* FATIGUE_REMINDER_RESET_DATE; // 0x0
		// static const ::System::String* FATIGUE_REMINDER_ACTIVE_TIMESTAMP; // 0x0
		// static const ::System::String* FATIGUE_REMIND_KEY; // 0x0
		::MiHoYo::SDK::FatigueRemindModel* m_fatigueRemindModel; // 0x10
		::UnityEngine::Coroutine* m_fatigueReminderCoroutine; // 0x18
		::System::Object* m_lockFatigueRemind; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::AntiAddictionManager* Instance()
		{
			return ((::MiHoYo::SDK::AntiAddictionManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_INSTANCE_OFFSET))();
		}

		::System::Void InitFatigueReminderConfig(::MiHoYo::SDK::JSONNode* jsonResponseData)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_INITFATIGUEREMINDERCONFIG_OFFSET))(this, jsonResponseData);
		}

		::System::Void StartFatigueReminderMonitor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_STARTFATIGUEREMINDERMONITOR_OFFSET))(this);
		}

		::System::Void StopFatigueReminderMonitor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_STOPFATIGUEREMINDERMONITOR_OFFSET))(this);
		}

		::System::Boolean IsFatigueReminderConfigValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_ISFATIGUEREMINDERCONFIGVALID_OFFSET))(this);
		}

		::System::Int64 GetNowMillisec()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_GETNOWMILLISEC_OFFSET))(this);
		}

		::System::Int64 GetTodayNowSec()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_GETTODAYNOWSEC_OFFSET))(this);
		}

		::System::Int32 GetOneDaySec()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_GETONEDAYSEC_OFFSET))(this);
		}

		::System::String* GetNowDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_GETNOWDATE_OFFSET))(this);
		}

		::System::Void IncreaseFatigueReminder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_INCREASEFATIGUEREMINDER_OFFSET))(this);
		}

		::System::Void SendFatigueReminder(::System::Int32 nTimeInterval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_SENDFATIGUEREMINDER_OFFSET))(this, nTimeInterval);
		}

		::System::Void ResetFatigueReminderTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_RESETFATIGUEREMINDERTIME_OFFSET))(this);
		}

		::System::String* GetFatigueReminderTotalTimeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_GETFATIGUEREMINDERTOTALTIMEKEY_OFFSET))(this);
		}

		::System::String* GetFatigueReminderResetDateKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_GETFATIGUEREMINDERRESETDATEKEY_OFFSET))(this);
		}

		::System::String* GetFatigueReminderActiveTimestamp()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_GETFATIGUEREMINDERACTIVETIMESTAMP_OFFSET))(this);
		}

		::System::Void RecordFatigueReminderActiveTimestamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER_RECORDFATIGUEREMINDERACTIVETIMESTAMP_OFFSET))(this);
		}

		::System::Void _StartFatigueReminderMonitor_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANTIADDICTIONMANAGER__STARTFATIGUEREMINDERMONITOR_B__11_0_OFFSET))(this);
		}
	};
}
