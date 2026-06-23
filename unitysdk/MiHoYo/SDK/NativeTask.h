#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NATIVETASK_DOLOGGER_OFFSET UNITYSDK_OFFSET(0x1C0DBFE0)
#define MIHOYO_SDK_NATIVETASK_ISNATIVETASKSWITCHENABLE_OFFSET UNITYSDK_OFFSET(0x1C0DC040)
#define MIHOYO_SDK_NATIVETASK_KIBANAREPORTEASY_OFFSET UNITYSDK_OFFSET(0x1C0DC3B0)
#define MIHOYO_SDK_NATIVETASK_NATIVEINVOKERETURN_OFFSET UNITYSDK_OFFSET(0x1C0DC460)
#define MIHOYO_SDK_NATIVETASK_NATIVEINVOKE_OFFSET UNITYSDK_OFFSET(0x1C0DC070)
#define MIHOYO_SDK_NATIVETASK_ONSYNCDATATONATIVE_OFFSET UNITYSDK_OFFSET(0x1C0DC060)
#define MIHOYO_SDK_NATIVETASK_SYNCDATATONATIVE_OFFSET UNITYSDK_OFFSET(0x1C0DC050)
#define MIHOYO_SDK_NATIVETASK_USINGNATIVETASK_OFFSET UNITYSDK_OFFSET(0x1C0DBDD0)
#define MIHOYO_SDK_NATIVETASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0DC6F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NativeTask_TypeDefinitionIndex = 19750;

	class NativeTask : public ::System::Object
	{
	public:
		// static const ::System::String* TASK_STARTED_EVENT; // 0x0
		// static const ::System::String* TASK_COMPLETED_EVENT; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* m_dicTaskNames; // 0x10
		::System::Boolean m_bIsCheckedAllTaskRegistered; // 0x18
		::System::Boolean m_bIsAllTaskRegistered; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NATIVETASK__CTOR_OFFSET))(this);
		}

		::System::Boolean UsingNativeTask(::System::String* strTaskName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NATIVETASK_USINGNATIVETASK_OFFSET))(this, strTaskName);
		}

		::System::Boolean IsNativeTaskSwitchEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NATIVETASK_ISNATIVETASKSWITCHENABLE_OFFSET))(this);
		}

		::System::Void SyncDataToNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NATIVETASK_SYNCDATATONATIVE_OFFSET))(this);
		}

		::System::Void OnSyncDataToNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NATIVETASK_ONSYNCDATATONATIVE_OFFSET))(this);
		}

		::System::Void NativeInvoke(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NATIVETASK_NATIVEINVOKE_OFFSET))(this, funcName, args, callback);
		}

		::System::String* NativeInvokeReturn(::System::String* funcName, ::System::String* args)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NATIVETASK_NATIVEINVOKERETURN_OFFSET))(this, funcName, args);
		}

		::System::Void KibanaReportEasy(::System::String* strEventName, ::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NATIVETASK_KIBANAREPORTEASY_OFFSET))(this, strEventName, strMsg);
		}

		::System::Void DoLogger(::System::String* strLogger)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NATIVETASK_DOLOGGER_OFFSET))(this, strLogger);
		}
	};
}
