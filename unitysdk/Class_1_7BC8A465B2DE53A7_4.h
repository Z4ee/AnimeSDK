#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_109;
class Class_0_16E4307DCC419505_1525;
class Class_1_6526EDA44F8A6866;

#define CLASS_1_7BC8A465B2DE53A7_4_METHOD_1_C2A2949DC9554D5B_OFFSET UNITYSDK_OFFSET(0xB7A7E00)
#define CLASS_1_7BC8A465B2DE53A7_4__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A7DF0)

inline static constexpr unsigned int Class_1_7BC8A465B2DE53A7_4_TypeDefinitionIndex = 80104;

class Class_1_7BC8A465B2DE53A7_4 : public ::System::Object
{
public:
	::Class_1_6526EDA44F8A6866* OMLAHOMDEID; // 0x10
	::Class_0_16E4307DCC419505_1525* CEFLLELKFOP; // 0x18

	::System::Void _ctor(::Class_1_6526EDA44F8A6866* a1, ::Class_0_16E4307DCC419505_1525* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6526EDA44F8A6866*, ::Class_0_16E4307DCC419505_1525*))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_4__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_109* Method_1_C2A2949DC9554D5B(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_109*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_4_METHOD_1_C2A2949DC9554D5B_OFFSET))(this, a1);
	}
};
