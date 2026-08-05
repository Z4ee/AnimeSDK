#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1ACEC71D301B3F14_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1D9D8DC0)
#define CLASS_1_1ACEC71D301B3F14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D9D8CD0)
#define CLASS_1_1ACEC71D301B3F14__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D8DB0)

inline static constexpr unsigned int Class_1_1ACEC71D301B3F14_TypeDefinitionIndex = 93203;

class Class_1_1ACEC71D301B3F14 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_7; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ACEC71D301B3F14__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ACEC71D301B3F14_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ACEC71D301B3F14_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
