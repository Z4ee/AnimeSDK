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

#define MIHOYO_SDK_THUNDER_CANCELALLTASKS_OFFSET UNITYSDK_OFFSET(0x1C83D5B0)
#define MIHOYO_SDK_THUNDER_GETDISKFREESPACEEXA_OFFSET UNITYSDK_OFFSET(0x1C83C430)
#define MIHOYO_SDK_THUNDER_GETDISKFREESPACEEX_OFFSET UNITYSDK_OFFSET(0x1C83C520)
#define MIHOYO_SDK_THUNDER_GETTOTALFREESPACE_OFFSET UNITYSDK_OFFSET(0x1C83C610)
#define MIHOYO_SDK_THUNDER_GETUNCOMPLETEDTASKS_OFFSET UNITYSDK_OFFSET(0x1C83C900)
#define MIHOYO_SDK_THUNDER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C83B530)
#define MIHOYO_SDK_THUNDER_GET__ALLTASKS_OFFSET UNITYSDK_OFFSET(0x1C83B590)
#define MIHOYO_SDK_THUNDER_INVALIDATETIMER_OFFSET UNITYSDK_OFFSET(0x1C83D750)
#define MIHOYO_SDK_THUNDER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1C83BDE0)
#define MIHOYO_SDK_THUNDER_ONPROGRESSTIMEREVENT_OFFSET UNITYSDK_OFFSET(0x1C83DDA0)
#define MIHOYO_SDK_THUNDER_PAUSEALLTASKS_OFFSET UNITYSDK_OFFSET(0x1C83D790)
#define MIHOYO_SDK_THUNDER_PAUSETASKS_OFFSET UNITYSDK_OFFSET(0x1C83CBB0)
#define MIHOYO_SDK_THUNDER_RECORDDOWNLOADTIME_OFFSET UNITYSDK_OFFSET(0x1C83CEF0)
#define MIHOYO_SDK_THUNDER_REMOVETASKS_OFFSET UNITYSDK_OFFSET(0x1C83CF80)
#define MIHOYO_SDK_THUNDER_RESETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C83D960)
#define MIHOYO_SDK_THUNDER_RESTARTDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1C83CF70)
#define MIHOYO_SDK_THUNDER_RESUMETASKS_OFFSET UNITYSDK_OFFSET(0x1C83CF60)
#define MIHOYO_SDK_THUNDER_SETUPTASKWITHJSONSTRING_OFFSET UNITYSDK_OFFSET(0x1C83B960)
#define MIHOYO_SDK_THUNDER_STARTBACKGROUNDDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1C83C080)
#define MIHOYO_SDK_THUNDER_STARTDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1C83D8D0)
#define MIHOYO_SDK_THUNDER_STARTPROGRESSTIMER_OFFSET UNITYSDK_OFFSET(0x1C83C2F0)
#define MIHOYO_SDK_THUNDER_STRINGVALUEFOREVENT_OFFSET UNITYSDK_OFFSET(0x1C83DD50)
#define MIHOYO_SDK_THUNDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C83E900)
#define MIHOYO_SDK_THUNDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C83B5F0)
#define MIHOYO_SDK_THUNDER__STARTDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1C83D990)
#define MIHOYO_SDK_THUNDER___CTOR_B__17_1_OFFSET UNITYSDK_OFFSET(0x1C83E970)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Thunder_TypeDefinitionIndex = 36674;

	class Thunder : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Thunder** StaticGet_instance()
		{
			return (::MiHoYo::SDK::Thunder**)Il2CppClass::FromTypeDefinitionIndex(Thunder_TypeDefinitionIndex)->GetStaticField(0x28090);
		}
		static ::System::UInt64* StaticGet_lastDownloadDuration()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Thunder_TypeDefinitionIndex)->GetStaticField(0x86F0);
		}
		static ::System::UInt64* StaticGet_lastDownloadSize()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Thunder_TypeDefinitionIndex)->GetStaticField(0x86F8);
		}
		static ::System::UInt64* StaticGet_downloadTime()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Thunder_TypeDefinitionIndex)->GetStaticField(0x8700);
		}
		static ::System::Boolean* StaticGet_pausing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Thunder_TypeDefinitionIndex)->GetStaticField(0x8708);
		}
		static ::System::Int32* StaticGet_MultiTaskCountLimit()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Thunder_TypeDefinitionIndex)->GetStaticField(0x870C);
		}
		::System::String* _rawDownloadTasks; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::FileDownloadTask*>* successTasks; // 0x18
		::System::Collections::Generic::List_1<::MiHoYo::SDK::FileDownloadTask*>* failureTasks; // 0x20
		::System::Collections::Generic::List_1<::MiHoYo::SDK::DownloadPoint*>* downloadPoints; // 0x28
		::System::Collections::Generic::List_1<::MiHoYo::SDK::FileDownloadTask*>* pendingQueue; // 0x30
		::System::Timers::Timer* progressTimer; // 0x38
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

		::System::Void SetupTaskWithJSONString(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_SETUPTASKWITHJSONSTRING_OFFSET))(this, jsonString);
		}

		static ::System::Boolean GetDiskFreeSpaceExA(::System::String* lpDirectoryName, ::System::UInt64& lpFreeBytesAvailable, ::System::UInt64& lpTotalNumberOfBytes, ::System::UInt64& lpTotalNumberOfFreeBytes)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_GETDISKFREESPACEEXA_OFFSET))(lpDirectoryName, lpFreeBytesAvailable, lpTotalNumberOfBytes, lpTotalNumberOfFreeBytes);
		}

		static ::System::Boolean GetDiskFreeSpaceEx(::System::String* lpDirectoryName, ::System::UInt64& lpFreeBytesAvailable, ::System::UInt64& lpTotalNumberOfBytes, ::System::UInt64& lpTotalNumberOfFreeBytes)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_GETDISKFREESPACEEX_OFFSET))(lpDirectoryName, lpFreeBytesAvailable, lpTotalNumberOfBytes, lpTotalNumberOfFreeBytes);
		}

		::System::String* GetTotalFreeSpace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_GETTOTALFREESPACE_OFFSET))(this);
		}

		::System::String* GetUnCompletedTasks()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_GETUNCOMPLETEDTASKS_OFFSET))(this);
		}

		::System::Void PauseTasks(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_PAUSETASKS_OFFSET))(this, jsonString);
		}

		::System::Void ResumeTasks(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_RESUMETASKS_OFFSET))(this, jsonString);
		}

		::System::Void RemoveTasks(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_REMOVETASKS_OFFSET))(this, jsonString);
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

		::System::Void StartDownload(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_STARTDOWNLOAD_OFFSET))(this, param);
		}

		::System::Void ResetTimestamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_RESETTIMESTAMP_OFFSET))(this);
		}

		::System::Void _StartDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER__STARTDOWNLOAD_OFFSET))(this);
		}

		::System::Void Notify(::MiHoYo::SDK::ThunderNotificationEvent evt, ::MiHoYo::SDK::JSONNode* param)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ThunderNotificationEvent, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_NOTIFY_OFFSET))(this, evt, param);
		}

		::System::String* StringValueForEvent(::MiHoYo::SDK::ThunderNotificationEvent evt)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::ThunderNotificationEvent))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_STRINGVALUEFOREVENT_OFFSET))(this, evt);
		}

		::System::Void StartProgressTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_STARTPROGRESSTIMER_OFFSET))(this);
		}

		::System::Void OnProgressTimerEvent(::System::Object* source, ::System::Timers::ElapsedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER_ONPROGRESSTIMEREVENT_OFFSET))(this, source, e);
		}

		::System::Void __ctor_b__17_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER___CTOR_B__17_1_OFFSET))(this);
		}
	};
}
