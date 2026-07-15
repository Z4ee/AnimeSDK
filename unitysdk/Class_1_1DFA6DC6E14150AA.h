#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1DFA6DC6E14150AA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14FF1140)
#define CLASS_1_1DFA6DC6E14150AA__CTOR_OFFSET UNITYSDK_OFFSET(0x14FF11C0)

inline static constexpr unsigned int Class_1_1DFA6DC6E14150AA_TypeDefinitionIndex = 56980;

class Class_1_1DFA6DC6E14150AA : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DFA6DC6E14150AA__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DFA6DC6E14150AA_TOSTRING_OFFSET))(this);
	}
};
