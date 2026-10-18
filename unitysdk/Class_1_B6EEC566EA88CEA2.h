#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_31F8506BEBF6E1AD;
namespace System { class String; }

#define CLASS_1_B6EEC566EA88CEA2_METHOD_1_521FF42A136F3888_OFFSET UNITYSDK_OFFSET(0x1C49DAC0)
#define CLASS_1_B6EEC566EA88CEA2_METHOD_1_6E37E1EE0610CDB6_OFFSET UNITYSDK_OFFSET(0x1C49DB30)
#define CLASS_1_B6EEC566EA88CEA2_METHOD_1_FBA6583E80237FD7_OFFSET UNITYSDK_OFFSET(0x1C4A1480)

inline static constexpr unsigned int Class_1_B6EEC566EA88CEA2_TypeDefinitionIndex = 41428;

class Class_1_B6EEC566EA88CEA2 : public ::System::Object
{
public:
	// static const ::System::UInt32 NIKDLGAMAAC = 0x3; // 0x0
	// static const ::System::Int32 JKOPJEDPHGL = 0x7FFF; // 0x0

	static ::System::String* Method_1_6E37E1EE0610CDB6(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC566EA88CEA2_METHOD_1_6E37E1EE0610CDB6_OFFSET))(a1);
	}

	static ::System::String* Method_1_521FF42A136F3888(::Class_1_31F8506BEBF6E1AD* a1)
	{
		return ((::System::String*(*)(::Class_1_31F8506BEBF6E1AD*))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC566EA88CEA2_METHOD_1_521FF42A136F3888_OFFSET))(a1);
	}

	static ::System::Void Method_1_FBA6583E80237FD7(::Class_1_31F8506BEBF6E1AD* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_1_31F8506BEBF6E1AD*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC566EA88CEA2_METHOD_1_FBA6583E80237FD7_OFFSET))(a1, a2);
	}
};
