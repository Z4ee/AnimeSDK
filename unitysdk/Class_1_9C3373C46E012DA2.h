#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_955;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_9C3373C46E012DA2_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xBE572C0)
#define CLASS_1_9C3373C46E012DA2_METHOD_1_D0557BF4690E5BBA_OFFSET UNITYSDK_OFFSET(0xBE57330)
#define CLASS_1_9C3373C46E012DA2__CTOR_OFFSET UNITYSDK_OFFSET(0xBE57820)

inline static constexpr unsigned int Class_1_9C3373C46E012DA2_TypeDefinitionIndex = 73269;

class Class_1_9C3373C46E012DA2 : public ::System::Object
{
public:
	::System::Text::RegularExpressions::Regex* NEHEODBKPNJ; // 0x10
	::System::Text::RegularExpressions::Regex* BNLBDJNMLLI; // 0x18
	::System::UInt32 KBENJDGFJBA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C3373C46E012DA2__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C3373C46E012DA2_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_D0557BF4690E5BBA(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_955* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_955*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_9C3373C46E012DA2_METHOD_1_D0557BF4690E5BBA_OFFSET))(this, a1, a2, a3, a4);
	}
};
