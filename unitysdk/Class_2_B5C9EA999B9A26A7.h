#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

class Class_0_16E4307DCC419505_28;
namespace System { class String; }

#define CLASS_2_B5C9EA999B9A26A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1E188D50)

inline static constexpr unsigned int Class_2_B5C9EA999B9A26A7_TypeDefinitionIndex = 18709;

class Class_2_B5C9EA999B9A26A7 : public ::System::Exception
{
public:
	::System::String* Field_2_0; // 0x88
	::System::String* Field_2_1; // 0x90

	::System::Void _ctor(::Class_0_16E4307DCC419505_28* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_28*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B5C9EA999B9A26A7__CTOR_OFFSET))(this, a1, a2);
	}
};
