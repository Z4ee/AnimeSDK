#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_KeyCollection_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTFORBINARYRESPONSE_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15F3C520)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTFORBINARYRESPONSE_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F3D270)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTFORBINARYRESPONSE_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F3D2D0)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTFORBINARYRESPONSE_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15F3D280)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTFORBINARYRESPONSE_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F3C510)
#define MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTFORBINARYRESPONSE_D__20__CTOR_OFFSET UNITYSDK_OFFSET(0x15F3A890)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil__PerformHttpRequestForBinaryResponse_d__20_TypeDefinitionIndex = 7192;

	class NetUtil__PerformHttpRequestForBinaryResponse_d__20 : public ::System::Object
	{
	public:
		::System::String* _errorMsg_5__8; // 0x10
		::System::String* _value_5__6; // 0x18
		::System::Object* __2__current; // 0x20
		::UnityEngine::Networking::UnityWebRequest* _request_5__3; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x30
		::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>* completeCallback; // 0x38
		::System::Exception* _ex_5__9; // 0x40
		::System::Action* timeoutCallback; // 0x48
		::System::Func_1<::UnityEngine::Networking::UnityWebRequest*>* buildRequestFun; // 0x50
		::System::String* _key_5__5; // 0x58
		::System::Collections::Generic::Dictionary_2_KeyCollection_Enumerator<::System::String*, ::System::String*> __s__4; // 0x60
		::System::Int32 _delayTimeMs_5__1; // 0x78
		::System::Int32 _leftRetryCount_5__2; // 0x7C
		::System::Int64 _responseCode_5__7; // 0x80
		::System::Int32 __1__state; // 0x88
		::System::Single timeoutSecond; // 0x8C
		::System::Int32 retryLimit; // 0x90

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTFORBINARYRESPONSE_D__20__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTFORBINARYRESPONSE_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTFORBINARYRESPONSE_D__20_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTFORBINARYRESPONSE_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTFORBINARYRESPONSE_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__PERFORMHTTPREQUESTFORBINARYRESPONSE_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
