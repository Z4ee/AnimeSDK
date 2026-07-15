#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_323;
class Class_0_16E4307DCC419505_324;
class Class_1_7B4E9156998275BE;
namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_105C32866538BE74_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D0DF340)
#define CLASS_1_105C32866538BE74_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D0DF270)
#define CLASS_1_105C32866538BE74__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DEA50)

inline static constexpr unsigned int Class_1_105C32866538BE74_TypeDefinitionIndex = 41481;

class Class_1_105C32866538BE74 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_323* Field_1_0; // 0x10
	::Class_1_7B4E9156998275BE* Field_1_1; // 0x18
	::System::Type* Field_1_2; // 0x20
	::Class_0_16E4307DCC419505_324* Field_1_3; // 0x28
	::System::Guid Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_105C32866538BE74__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_105C32866538BE74_TOSTRING_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_105C32866538BE74_DISPOSE_OFFSET))(this);
	}
};
