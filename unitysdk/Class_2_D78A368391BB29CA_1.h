#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define CLASS_2_D78A368391BB29CA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12BF27E0)

inline static constexpr unsigned int Class_2_D78A368391BB29CA_1_TypeDefinitionIndex = 53669;

class Class_2_D78A368391BB29CA_1 : public ::System::EventArgs
{
public:
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D78A368391BB29CA_1__CTOR_OFFSET))(this);
	}
};
