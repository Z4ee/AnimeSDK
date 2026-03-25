#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_715;
class Class_1_459992294D008A3E;
namespace System { class String; }

#define CLASS_1_027882ED3C098B1B_METHOD_1_142F79A732E803A2_OFFSET UNITYSDK_OFFSET(0x10AA8E00)
#define CLASS_1_027882ED3C098B1B__CTOR_OFFSET UNITYSDK_OFFSET(0x10AA9E30)

inline static constexpr unsigned int Class_1_027882ED3C098B1B_TypeDefinitionIndex = 60181;

class Class_1_027882ED3C098B1B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_027882ED3C098B1B__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_142F79A732E803A2(::Class_1_459992294D008A3E* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_715* a3)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_459992294D008A3E*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_715*))((::PBYTE)hIl2Cpp + CLASS_1_027882ED3C098B1B_METHOD_1_142F79A732E803A2_OFFSET))(this, a1, a2, a3);
	}
};
