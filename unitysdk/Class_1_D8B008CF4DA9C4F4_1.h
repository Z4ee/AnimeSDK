#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1059;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_D8B008CF4DA9C4F4_1_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xCF549D0)
#define CLASS_1_D8B008CF4DA9C4F4_1_METHOD_1_935027BF6ABE43B4_OFFSET UNITYSDK_OFFSET(0xCF54A40)
#define CLASS_1_D8B008CF4DA9C4F4_1__CTOR_OFFSET UNITYSDK_OFFSET(0xCF54DD0)

inline static constexpr unsigned int Class_1_D8B008CF4DA9C4F4_1_TypeDefinitionIndex = 73367;

class Class_1_D8B008CF4DA9C4F4_1 : public ::System::Object
{
public:
	::System::Text::RegularExpressions::Regex* CPGELIBOFMK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8B008CF4DA9C4F4_1__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8B008CF4DA9C4F4_1_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_935027BF6ABE43B4(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_1059* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_1059*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_D8B008CF4DA9C4F4_1_METHOD_1_935027BF6ABE43B4_OFFSET))(this, a1, a2, a3, a4);
	}
};
