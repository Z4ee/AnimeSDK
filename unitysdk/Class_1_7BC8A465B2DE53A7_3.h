#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_107;
class Class_0_16E4307DCC419505_1524;
class Class_1_6526EDA44F8A6866;

#define CLASS_1_7BC8A465B2DE53A7_3_METHOD_1_B6E35259FE057D80_OFFSET UNITYSDK_OFFSET(0xB419980)
#define CLASS_1_7BC8A465B2DE53A7_3__CTOR_OFFSET UNITYSDK_OFFSET(0xB419970)

inline static constexpr unsigned int Class_1_7BC8A465B2DE53A7_3_TypeDefinitionIndex = 80098;

class Class_1_7BC8A465B2DE53A7_3 : public ::System::Object
{
public:
	::Class_1_6526EDA44F8A6866* OMLAHOMDEID; // 0x10
	::Class_0_16E4307DCC419505_1524* CEFLLELKFOP; // 0x18

	::System::Void _ctor(::Class_1_6526EDA44F8A6866* a1, ::Class_0_16E4307DCC419505_1524* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6526EDA44F8A6866*, ::Class_0_16E4307DCC419505_1524*))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_3__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_107* Method_1_B6E35259FE057D80(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_107*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_3_METHOD_1_B6E35259FE057D80_OFFSET))(this, a1);
	}
};
