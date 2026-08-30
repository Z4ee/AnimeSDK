#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_931;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CCB4C9611E2EC62A_METHOD_1_9CD92966DD51DEAF_OFFSET UNITYSDK_OFFSET(0xE8B2060)
#define CLASS_1_CCB4C9611E2EC62A__CTOR_OFFSET UNITYSDK_OFFSET(0xE8B2270)

inline static constexpr unsigned int Class_1_CCB4C9611E2EC62A_TypeDefinitionIndex = 67145;

class Class_1_CCB4C9611E2EC62A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB4C9611E2EC62A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9CD92966DD51DEAF(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_931*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_931*>*))((::PBYTE)hIl2Cpp + CLASS_1_CCB4C9611E2EC62A_METHOD_1_9CD92966DD51DEAF_OFFSET))(this, a1);
	}
};
