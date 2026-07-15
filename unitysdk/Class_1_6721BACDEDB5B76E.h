#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_381;
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_6721BACDEDB5B76E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1708AA20)
#define CLASS_1_6721BACDEDB5B76E_METHOD_1_AF9217A0CB788449_OFFSET UNITYSDK_OFFSET(0x1708A4A0)
#define CLASS_1_6721BACDEDB5B76E_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1708A8E0)
#define CLASS_1_6721BACDEDB5B76E_METHOD_1_DD53ACEBA0571D27_OFFSET UNITYSDK_OFFSET(0x1708A9A0)
#define CLASS_1_6721BACDEDB5B76E__CTOR_OFFSET UNITYSDK_OFFSET(0x1708A490)

inline static constexpr unsigned int Class_1_6721BACDEDB5B76E_TypeDefinitionIndex = 58152;

class Class_1_6721BACDEDB5B76E : public ::System::Object
{
public:
	::UnityEngine::Coroutine* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_381* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_381* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_381*))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF9217A0CB788449(::System::Single a1, ::System::Action_1<::Class_0_16E4307DCC419505_381*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::Class_0_16E4307DCC419505_381*>*))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E_METHOD_1_AF9217A0CB788449_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_DD53ACEBA0571D27(::System::Single a1, ::System::Action_1<::Class_0_16E4307DCC419505_381*>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Action_1<::Class_0_16E4307DCC419505_381*>*))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E_METHOD_1_DD53ACEBA0571D27_OFFSET))(this, a1, a2);
	}
};
