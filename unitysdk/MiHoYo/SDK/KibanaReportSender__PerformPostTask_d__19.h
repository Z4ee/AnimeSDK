#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CC4E1A0)
#define MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CC4F2B0)
#define MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CC4F310)
#define MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CC4F2C0)
#define MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CC4E190)
#define MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC4E180)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaReportSender__PerformPostTask_d__19_TypeDefinitionIndex = 37614;

	class KibanaReportSender__PerformPostTask_d__19 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders; // 0x10
		::UnityEngine::Networking::UnityWebRequest* _unityWebRequest_5__2; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20
		::System::Object* __2__current; // 0x28
		::System::String* requestUrl; // 0x30
		::System::Action* timeoutCallback; // 0x38
		::System::String* bodyString; // 0x40
		::System::Single timeoutSecond; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
