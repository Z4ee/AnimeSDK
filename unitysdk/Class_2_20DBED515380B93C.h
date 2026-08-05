#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_197.h"
#include "unitysdk/Struct_2_53EC6FFE9325B737_18.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_20DBED515380B93C_METHOD_2_2815E0F5A4B96169_OFFSET UNITYSDK_OFFSET(0x153163D0)
#define CLASS_2_20DBED515380B93C_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x15316530)
#define CLASS_2_20DBED515380B93C_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x15316520)
#define CLASS_2_20DBED515380B93C__CTOR_OFFSET UNITYSDK_OFFSET(0x153162A0)

inline static constexpr unsigned int Class_2_20DBED515380B93C_TypeDefinitionIndex = 11495;

class Class_2_20DBED515380B93C : public ::Class_1_5DA2E7556103D5A3_197
{
public:
	::System::Single Field_2_1; // 0x50
	::System::Single Field_2_2; // 0x54
	::System::Single Field_2_7; // 0x58
	::System::Single Field_2_3; // 0x5C
	::System::Single Field_2_0; // 0x60

	::System::Void _ctor(::Struct_2_53EC6FFE9325B737_18 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_53EC6FFE9325B737_18, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_20DBED515380B93C__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_2815E0F5A4B96169(::System::String* a1, ::System::Single& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_20DBED515380B93C_METHOD_2_2815E0F5A4B96169_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20DBED515380B93C_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20DBED515380B93C_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}
};
