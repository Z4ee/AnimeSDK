#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_2AA3E2DC12AD9D36_METHOD_1_EB9FCFC2B03632EA_OFFSET UNITYSDK_OFFSET(0x19D3DBB0)

inline static constexpr unsigned int Class_1_2AA3E2DC12AD9D36_TypeDefinitionIndex = 23491;

class Class_1_2AA3E2DC12AD9D36 : public ::System::Object
{
public:
	static ::System::String* Method_1_EB9FCFC2B03632EA(::System::Object* a1)
	{
		return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2AA3E2DC12AD9D36_METHOD_1_EB9FCFC2B03632EA_OFFSET))(a1);
	}
};
