#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7DDAFF705B88BB59;
class Class_2_89B128EA44A7FB26;

#define CLASS_1_13A81FA3ECB993A2_METHOD_1_8672E53165F709D4_OFFSET UNITYSDK_OFFSET(0x95508B0)
#define CLASS_1_13A81FA3ECB993A2_METHOD_1_CB8CF89038C44C8A_OFFSET UNITYSDK_OFFSET(0x9550A60)
#define CLASS_1_13A81FA3ECB993A2_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x9550AF0)
#define CLASS_1_13A81FA3ECB993A2__CTOR_OFFSET UNITYSDK_OFFSET(0x95508A0)

inline static constexpr unsigned int Class_1_13A81FA3ECB993A2_TypeDefinitionIndex = 50903;

class Class_1_13A81FA3ECB993A2 : public ::System::Object
{
public:
	::Class_1_7DDAFF705B88BB59* Field_1_1; // 0x10
	::Class_2_89B128EA44A7FB26* Field_1_0; // 0x18

	::System::Void _ctor(::Class_2_89B128EA44A7FB26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_89B128EA44A7FB26*))((::PBYTE)hIl2Cpp + CLASS_1_13A81FA3ECB993A2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_8672E53165F709D4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13A81FA3ECB993A2_METHOD_1_8672E53165F709D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB8CF89038C44C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13A81FA3ECB993A2_METHOD_1_CB8CF89038C44C8A_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13A81FA3ECB993A2_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}
};
