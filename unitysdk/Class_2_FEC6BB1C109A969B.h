#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3002EE73D986F5EA.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }

#define CLASS_2_FEC6BB1C109A969B_METHOD_2_35B9A8F7DFD21D31_OFFSET UNITYSDK_OFFSET(0x14A78D80)
#define CLASS_2_FEC6BB1C109A969B__CTOR_OFFSET UNITYSDK_OFFSET(0x14A78D70)

inline static constexpr unsigned int Class_2_FEC6BB1C109A969B_TypeDefinitionIndex = 74221;

class Class_2_FEC6BB1C109A969B : public ::Class_1_3002EE73D986F5EA
{
public:
	::Class_1_0D6706375CDAAE8C* Field_2_1; // 0x18
	::Class_1_0D6706375CDAAE8C* Field_2_0; // 0x20

	::System::Void _ctor(::Class_1_0D6706375CDAAE8C* a1, ::Class_1_0D6706375CDAAE8C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_2_FEC6BB1C109A969B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_35B9A8F7DFD21D31(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_FEC6BB1C109A969B_METHOD_2_35B9A8F7DFD21D31_OFFSET))(this, a1);
	}
};
