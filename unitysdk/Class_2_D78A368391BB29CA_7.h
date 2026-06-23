#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define CLASS_2_D78A368391BB29CA_7__CTOR_OFFSET UNITYSDK_OFFSET(0x16B0E320)

inline static constexpr unsigned int Class_2_D78A368391BB29CA_7_TypeDefinitionIndex = 84420;

class Class_2_D78A368391BB29CA_7 : public ::System::EventArgs
{
public:
	::System::Int32 Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D78A368391BB29CA_7__CTOR_OFFSET))(this);
	}
};
