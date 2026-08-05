#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8289F2785D9AA990.h"

namespace System { class Action; }

#define CLASS_2_EE4AD6D436A033D5_METHOD_2_C620AA60B6092255_OFFSET UNITYSDK_OFFSET(0x1B9C0780)
#define CLASS_2_EE4AD6D436A033D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C0770)

inline static constexpr unsigned int Class_2_EE4AD6D436A033D5_TypeDefinitionIndex = 48597;

class Class_2_EE4AD6D436A033D5 : public ::Class_1_8289F2785D9AA990
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE4AD6D436A033D5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C620AA60B6092255(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_EE4AD6D436A033D5_METHOD_2_C620AA60B6092255_OFFSET))(this, a1, a2);
	}
};
