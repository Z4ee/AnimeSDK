#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_C4824D3A7BD4F6AD_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x154EA770)
#define CLASS_2_C4824D3A7BD4F6AD__CTOR_OFFSET UNITYSDK_OFFSET(0x154EA760)

inline static constexpr unsigned int Class_2_C4824D3A7BD4F6AD_TypeDefinitionIndex = 56062;

class Class_2_C4824D3A7BD4F6AD : public ::System::Attribute
{
public:
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C4824D3A7BD4F6AD__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4824D3A7BD4F6AD_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
