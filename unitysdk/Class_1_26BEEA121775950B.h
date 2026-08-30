#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D27BF54F25500E5F;

#define CLASS_1_26BEEA121775950B_CLEAR_OFFSET UNITYSDK_OFFSET(0xDAC6270)
#define CLASS_1_26BEEA121775950B__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC62E0)

inline static constexpr unsigned int Class_1_26BEEA121775950B_TypeDefinitionIndex = 57075;

class Class_1_26BEEA121775950B : public ::System::Object
{
public:
	::Class_1_D27BF54F25500E5F* MGGPIHGIGPB; // 0x10
	::System::Int32 DCGDPBFBCEL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26BEEA121775950B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26BEEA121775950B_CLEAR_OFFSET))(this);
	}
};
