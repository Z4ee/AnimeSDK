#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9C7A70DFE5B6DD85_EXECUTE_OFFSET UNITYSDK_OFFSET(0x183C8890)
#define CLASS_1_9C7A70DFE5B6DD85__CTOR_OFFSET UNITYSDK_OFFSET(0x183C8920)

inline static constexpr unsigned int Class_1_9C7A70DFE5B6DD85_TypeDefinitionIndex = 67337;

class Class_1_9C7A70DFE5B6DD85 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C7A70DFE5B6DD85__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9C7A70DFE5B6DD85_EXECUTE_OFFSET))(this, a1);
	}
};
