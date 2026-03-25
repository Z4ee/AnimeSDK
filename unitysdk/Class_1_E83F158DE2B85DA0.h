#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F2F768DC85F0AF5;
class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;

#define CLASS_1_E83F158DE2B85DA0_EXECUTE_OFFSET UNITYSDK_OFFSET(0x166D5D30)
#define CLASS_1_E83F158DE2B85DA0_METHOD_1_9BEEECCBEBA8490F_OFFSET UNITYSDK_OFFSET(0x166D62E0)
#define CLASS_1_E83F158DE2B85DA0__CTOR_OFFSET UNITYSDK_OFFSET(0x166D5D20)

inline static constexpr unsigned int Class_1_E83F158DE2B85DA0_TypeDefinitionIndex = 29100;

class Class_1_E83F158DE2B85DA0 : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_E83F158DE2B85DA0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E83F158DE2B85DA0_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_9BEEECCBEBA8490F(::Class_2_3ABA989E5AECB261* a1, ::Class_1_7F2F768DC85F0AF5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_1_7F2F768DC85F0AF5*))((::PBYTE)hIl2Cpp + CLASS_1_E83F158DE2B85DA0_METHOD_1_9BEEECCBEBA8490F_OFFSET))(this, a1, a2);
	}
};
