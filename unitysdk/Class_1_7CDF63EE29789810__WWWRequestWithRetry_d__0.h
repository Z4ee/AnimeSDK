#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class WWWForm; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define CLASS_1_7CDF63EE29789810__WWWREQUESTWITHRETRY_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB9C96E0)
#define CLASS_1_7CDF63EE29789810__WWWREQUESTWITHRETRY_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB9C9E80)
#define CLASS_1_7CDF63EE29789810__WWWREQUESTWITHRETRY_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB9C9EE0)
#define CLASS_1_7CDF63EE29789810__WWWREQUESTWITHRETRY_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB9C9E90)
#define CLASS_1_7CDF63EE29789810__WWWREQUESTWITHRETRY_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9C96C0)
#define CLASS_1_7CDF63EE29789810__WWWREQUESTWITHRETRY_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0xB9C94A0)

inline static constexpr unsigned int Class_1_7CDF63EE29789810__WWWRequestWithRetry_d__0_TypeDefinitionIndex = 50094;

class Class_1_7CDF63EE29789810__WWWRequestWithRetry_d__0 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x18
	::System::Action_1<::System::String*>* callback; // 0x20
	::System::String* jsonBody; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* formDict; // 0x30
	::UnityEngine::Networking::UnityWebRequest* _localWWW_5__3; // 0x38
	::System::String* url; // 0x40
	::UnityEngine::WWWForm* _wwwForm_5__4; // 0x48
	::System::Action* timeOutCallback; // 0x50
	::System::Int32 _counter_5__2; // 0x58
	::System::Single timeoutSecond; // 0x5C
	::System::Int32 retryTime; // 0x60
	::System::Boolean _timeout_5__5; // 0x64
	::System::Int32 __1__state; // 0x68

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7CDF63EE29789810__WWWREQUESTWITHRETRY_D__0__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CDF63EE29789810__WWWREQUESTWITHRETRY_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CDF63EE29789810__WWWREQUESTWITHRETRY_D__0_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CDF63EE29789810__WWWREQUESTWITHRETRY_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CDF63EE29789810__WWWREQUESTWITHRETRY_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CDF63EE29789810__WWWREQUESTWITHRETRY_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
