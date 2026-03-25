#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x84FAF00)
#define MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x84FBB70)
#define MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x84FBBD0)
#define MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x84FBB80)
#define MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x84FAEF0)
#define MIHOYO_SDK_KIBANAREPORTSENDER__PERFORMPOSTTASK_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x84F9F90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaReportSender__PerformPostTask_d__19_TypeDefinitionIndex = 37264;

	class KibanaReportSender__PerformPostTask_d__19 : public ::System::Object
	{
	public:
		::System::String* requestUrl; // 0x10
		::System::String* bodyString; // 0x18
		::UnityEngine::Networking::UnityWebRequest* _unityWebRequest_5__2; // 0x20
		::System::Action_1<::System::String*>* callback; // 0x28
		::System::Object* __2__current; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders; // 0x38
		::System::Action* timeoutCallback; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Single timeoutSecond; // 0x4C

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
