#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA227520)
#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA228720)
#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA228780)
#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA228730)
#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA227510)
#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0xA227250)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCNetwork__PerformHttpRequestBinary_d__6_TypeDefinitionIndex = 43867;

	class UGCNetwork__PerformHttpRequestBinary_d__6 : public ::System::Object
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* _request_5__4; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reportDict; // 0x20
		::System::Action* timeoutCallback; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x30
		::System::Func_1<::UnityEngine::Networking::UnityWebRequest*>* buildRequestFun; // 0x38
		::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* completeCallback; // 0x40
		::System::Int32 _delayTimeMs_5__2; // 0x48
		::System::Int32 __1__state; // 0x4C
		::System::Boolean checkMD5; // 0x50
		::System::Single timeoutSecond; // 0x54
		::System::Int32 _leftRetryCount_5__3; // 0x58
		::System::Int32 retryLimit; // 0x5C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
