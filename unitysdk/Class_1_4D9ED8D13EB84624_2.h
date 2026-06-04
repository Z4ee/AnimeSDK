#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4D9ED8D13EB84624_2_CLEAR_OFFSET UNITYSDK_OFFSET(0x18F8A380)
#define CLASS_1_4D9ED8D13EB84624_2_METHOD_1_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x18F8A390)
#define CLASS_1_4D9ED8D13EB84624_2_METHOD_1_724FF6FA3EC5B898_OFFSET UNITYSDK_OFFSET(0x18F8A3D0)
#define CLASS_1_4D9ED8D13EB84624_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18F8A460)

inline static constexpr unsigned int Class_1_4D9ED8D13EB84624_2_TypeDefinitionIndex = 10265;

class Class_1_4D9ED8D13EB84624_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D9ED8D13EB84624_2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D9ED8D13EB84624_2_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_228E3444D290BEE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D9ED8D13EB84624_2_METHOD_1_228E3444D290BEE7_OFFSET))(this);
	}

	::System::Object* Method_1_724FF6FA3EC5B898()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D9ED8D13EB84624_2_METHOD_1_724FF6FA3EC5B898_OFFSET))(this);
	}
};
