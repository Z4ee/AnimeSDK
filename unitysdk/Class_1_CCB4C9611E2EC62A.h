#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_880;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CCB4C9611E2EC62A_METHOD_1_9CD92966DD51DEAF_OFFSET UNITYSDK_OFFSET(0x16AD6800)
#define CLASS_1_CCB4C9611E2EC62A__CTOR_OFFSET UNITYSDK_OFFSET(0x16AD6A10)

inline static constexpr unsigned int Class_1_CCB4C9611E2EC62A_TypeDefinitionIndex = 64150;

class Class_1_CCB4C9611E2EC62A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB4C9611E2EC62A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9CD92966DD51DEAF(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_880*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_880*>*))((::PBYTE)hIl2Cpp + CLASS_1_CCB4C9611E2EC62A_METHOD_1_9CD92966DD51DEAF_OFFSET))(this, a1);
	}
};
