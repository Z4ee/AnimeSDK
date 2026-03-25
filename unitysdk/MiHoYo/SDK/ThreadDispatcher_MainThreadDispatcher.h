#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_THREADDISPATCHER_MAINTHREADDISPATCHER_DISPATCHTOMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x16000780)
#define MIHOYO_SDK_THREADDISPATCHER_MAINTHREADDISPATCHER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16000B50)
#define MIHOYO_SDK_THREADDISPATCHER_MAINTHREADDISPATCHER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16000910)
#define MIHOYO_SDK_THREADDISPATCHER_MAINTHREADDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x160008B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThreadDispatcher_MainThreadDispatcher_TypeDefinitionIndex = 7025;

	class ThreadDispatcher_MainThreadDispatcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Object* locker; // 0x18
		::System::Collections::Generic::List_1<::System::Action*>* actions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADDISPATCHER_MAINTHREADDISPATCHER__CTOR_OFFSET))(this);
		}

		::System::Void DispatchToMainThread(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADDISPATCHER_MAINTHREADDISPATCHER_DISPATCHTOMAINTHREAD_OFFSET))(this, action);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADDISPATCHER_MAINTHREADDISPATCHER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADDISPATCHER_MAINTHREADDISPATCHER_ONDESTROY_OFFSET))(this);
		}
	};
}
