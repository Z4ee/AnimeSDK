#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4D9ED8D13EB84624_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CFD02E0)
#define CLASS_1_4D9ED8D13EB84624_1_METHOD_1_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x1CFD02F0)
#define CLASS_1_4D9ED8D13EB84624_1_METHOD_1_724FF6FA3EC5B898_OFFSET UNITYSDK_OFFSET(0x1CFD0330)
#define CLASS_1_4D9ED8D13EB84624_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD03C0)

inline static constexpr unsigned int Class_1_4D9ED8D13EB84624_1_TypeDefinitionIndex = 10622;

class Class_1_4D9ED8D13EB84624_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D9ED8D13EB84624_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D9ED8D13EB84624_1_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_228E3444D290BEE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D9ED8D13EB84624_1_METHOD_1_228E3444D290BEE7_OFFSET))(this);
	}

	::System::Object* Method_1_724FF6FA3EC5B898()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D9ED8D13EB84624_1_METHOD_1_724FF6FA3EC5B898_OFFSET))(this);
	}
};
