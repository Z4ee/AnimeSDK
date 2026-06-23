#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C735860)
#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C7369A0)
#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C736A00)
#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C7369B0)
#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C735850)
#define MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C735840)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCNetwork__PerformHttpRequestBinary_d__6_TypeDefinitionIndex = 36842;

	class UGCNetwork__PerformHttpRequestBinary_d__6 : public ::System::Object
	{
	public:
		::System::Func_1<::UnityEngine::Networking::UnityWebRequest*>* buildRequestFun; // 0x10
		::UnityEngine::Networking::UnityWebRequest* _request_5__4; // 0x18
		::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* completeCallback; // 0x20
		::System::Action* timeoutCallback; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x30
		::System::Object* __2__current; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reportDict; // 0x40
		::System::Single timeoutSecond; // 0x48
		::System::Int32 _leftRetryCount_5__3; // 0x4C
		::System::Int32 _delayTimeMs_5__2; // 0x50
		::System::Int32 retryLimit; // 0x54
		::System::Boolean checkMD5; // 0x58
		::System::Int32 __1__state; // 0x5C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK__PERFORMHTTPREQUESTBINARY_D__6__CTOR_OFFSET))(this, __1__state);
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
