#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ThunderNotificationEvent.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class DownloadPoint; }
namespace MiHoYo::SDK { class FileDownloadTask; }
namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Timers { class ElapsedEventArgs; }
namespace System::Timers { class Timer; }

#define MIHOYO_SDK_THUNDER_CANCELALLTASKS_OFFSET UNITYSDK_OFFSET(0x1B7324E0)
#define MIHOYO_SDK_THUNDER_GETDISKFREESPACEEXA_OFFSET UNITYSDK_OFFSET(0x1B731500)
#define MIHOYO_SDK_THUNDER_GETDISKFREESPACEEX_OFFSET UNITYSDK_OFFSET(0x1B7315F0)
#define MIHOYO_SDK_THUNDER_GETTOTALFREESPACE_OFFSET UNITYSDK_OFFSET(0x1B7316E0)
#define MIHOYO_SDK_THUNDER_GETUNCOMPLETEDTASKS_OFFSET UNITYSDK_OFFSET(0x1B731960)
#define MIHOYO_SDK_THUNDER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B730620)
#define MIHOYO_SDK_THUNDER_GET__ALLTASKS_OFFSET UNITYSDK_OFFSET(0x1B730650)
#define MIHOYO_SDK_THUNDER_INVALIDATETIMER_OFFSET UNITYSDK_OFFSET(0x1B7326D0)
#define MIHOYO_SDK_THUNDER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1B730E60)
#define MIHOYO_SDK_THUNDER_ONPROGRESSTIMEREVENT_OFFSET UNITYSDK_OFFSET(0x1B733040)
#define MIHOYO_SDK_THUNDER_PAUSEALLTASKS_OFFSET UNITYSDK_OFFSET(0x1B732780)
#define MIHOYO_SDK_THUNDER_PAUSETASKS_OFFSET UNITYSDK_OFFSET(0x1B731BC0)
#define MIHOYO_SDK_THUNDER_RECORDDOWNLOADTIME_OFFSET UNITYSDK_OFFSET(0x1B731E60)
#define MIHOYO_SDK_THUNDER_REMOVETASKS_OFFSET UNITYSDK_OFFSET(0x1B731EC0)
#define MIHOYO_SDK_THUNDER_RESETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B7329E0)
#define MIHOYO_SDK_THUNDER_RESTARTDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1B731EB0)
#define MIHOYO_SDK_THUNDER_RESUMETASKS_OFFSET UNITYSDK_OFFSET(0x1B731EA0)
#define MIHOYO_SDK_THUNDER_SETUPTASKWITHJSONSTRING_OFFSET UNITYSDK_OFFSET(0x1B7309F0)
#define MIHOYO_SDK_THUNDER_STARTBACKGROUNDDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1B7310E0)
#define MIHOYO_SDK_THUNDER_STARTDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1B7328F0)
#define MIHOYO_SDK_THUNDER_STARTPROGRESSTIMER_OFFSET UNITYSDK_OFFSET(0x1B731370)
#define MIHOYO_SDK_THUNDER_STRINGVALUEFOREVENT_OFFSET UNITYSDK_OFFSET(0x1B732FF0)
#define MIHOYO_SDK_THUNDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7339E0)
#define MIHOYO_SDK_THUNDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7306B0)
#define MIHOYO_SDK_THUNDER__STARTDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1B732A90)
#define MIHOYO_SDK_THUNDER___CTOR_B__17_1_OFFSET UNITYSDK_OFFSET(0x1B733A40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Thunder_TypeDefinitionIndex = 44559;

	class Thunder : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Thunder** StaticGet_instance()
		{
			return (::MiHoYo::SDK::Thunder**)Il2CppClass::FromTypeDefinitionIndex(Thunder_TypeDefinitionIndex)->GetStaticField(0xCBA0);
		}
		static ::System::Boolean* StaticGet_pausing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Thunder_TypeDefinitionIndex)->GetStaticField(0x48D0);
		}
		static ::System::Int32* StaticGet_MultiTaskCountLimit()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Thunder_TypeDefinitionIndex)->GetStaticField(0x48D4);
		}
		static ::System::UInt64* StaticGet_lastDownloadDuration()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Thunder_TypeDefinitionIndex)->GetStaticField(0x48D8);
		}
		static ::System::UInt64* StaticGet_downloadTime()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Thunder_TypeDefinitionIndex)->GetStaticField(0x48E0);
		}
		static ::System::UInt64* StaticGet_lastDownloadSize()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Thunder_TypeDefinitionIndex)->GetStaticField(0x48E8);
		}
		::System::String* _rawDownloadTasks; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::FileDownloadTask*>* pendingQueue; // 0x18
		::System::Collections::Generic::List_1<::MiHoYo::SDK::FileDownloadTask*>* failureTasks; // 0x20
		::System::Collections::Generic::List_1<::MiHoYo::SDK::FileDownloadTask*>* successTasks; // 0x28
		::System::Timers::Timer* progressTimer; // 0x30
		::System::Collections::Generic::List_1<::MiHoYo::SDK::DownloadPoint*>* downloadPoints; // 0x38
		::System::UInt64 startTime; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Thunder* get_Instance()
		{
			return ((::MiHoYo::SDK::Thunder*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_GET_INSTANCE_OFFSET))();
		}

		::System::Collections::Generic::List_1<::MiHoYo::SDK::FileDownloadTask*>* get__allTasks()
		{
			return ((::System::Collections::Generic::List_1<::MiHoYo::SDK::FileDownloadTask*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_GET__ALLTASKS_OFFSET))(this);
		}

		::System::Void SetupTaskWithJSONString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_SETUPTASKWITHJSONSTRING_OFFSET))(this, a1);
		}

		static ::System::Boolean GetDiskFreeSpaceExA(::System::String* a1, ::System::UInt64& a2, ::System::UInt64& a3, ::System::UInt64& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_GETDISKFREESPACEEXA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetDiskFreeSpaceEx(::System::String* a1, ::System::UInt64& a2, ::System::UInt64& a3, ::System::UInt64& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_GETDISKFREESPACEEX_OFFSET))(a1, a2, a3, a4);
		}

		::System::String* GetTotalFreeSpace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_GETTOTALFREESPACE_OFFSET))(this);
		}

		::System::String* GetUnCompletedTasks()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_GETUNCOMPLETEDTASKS_OFFSET))(this);
		}

		::System::Void PauseTasks(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_PAUSETASKS_OFFSET))(this, a1);
		}

		::System::Void ResumeTasks(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_RESUMETASKS_OFFSET))(this, a1);
		}

		::System::Void RemoveTasks(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_REMOVETASKS_OFFSET))(this, a1);
		}

		::System::Void RestartDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_RESTARTDOWNLOAD_OFFSET))(this);
		}

		::System::Void CancelAllTasks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_CANCELALLTASKS_OFFSET))(this);
		}

		::System::Void PauseAllTasks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_PAUSEALLTASKS_OFFSET))(this);
		}

		::System::Void RecordDownloadTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_RECORDDOWNLOADTIME_OFFSET))(this);
		}

		::System::Void InvalidateTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_INVALIDATETIMER_OFFSET))(this);
		}

		::System::Boolean StartBackgroundDownload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_STARTBACKGROUNDDOWNLOAD_OFFSET))(this);
		}

		::System::Void StartDownload(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_STARTDOWNLOAD_OFFSET))(this, a1);
		}

		::System::Void ResetTimestamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_RESETTIMESTAMP_OFFSET))(this);
		}

		::System::Void _StartDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER__STARTDOWNLOAD_OFFSET))(this);
		}

		::System::Void Notify(::MiHoYo::SDK::ThunderNotificationEvent a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ThunderNotificationEvent, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_NOTIFY_OFFSET))(this, a1, a2);
		}

		::System::String* StringValueForEvent(::MiHoYo::SDK::ThunderNotificationEvent a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::ThunderNotificationEvent))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_STRINGVALUEFOREVENT_OFFSET))(this, a1);
		}

		::System::Void StartProgressTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_STARTPROGRESSTIMER_OFFSET))(this);
		}

		::System::Void OnProgressTimerEvent(::System::Object* a1, ::System::Timers::ElapsedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_ONPROGRESSTIMEREVENT_OFFSET))(this, a1, a2);
		}

		::System::Void __ctor_b__17_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER___CTOR_B__17_1_OFFSET))(this);
		}
	};
}
