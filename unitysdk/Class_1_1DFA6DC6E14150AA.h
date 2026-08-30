#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1DFA6DC6E14150AA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15E3C500)
#define CLASS_1_1DFA6DC6E14150AA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E3C580)

inline static constexpr unsigned int Class_1_1DFA6DC6E14150AA_TypeDefinitionIndex = 59768;

class Class_1_1DFA6DC6E14150AA : public ::System::Object
{
public:
	::System::String* KELBNBNDKLG; // 0x10
	::System::String* AGONLPCIGHB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DFA6DC6E14150AA__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DFA6DC6E14150AA_TOSTRING_OFFSET))(this);
	}
};
