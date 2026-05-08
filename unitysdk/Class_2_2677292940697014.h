#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3002EE73D986F5EA.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_14671E1C01F5FAC8;
namespace System { class Action; }

#define CLASS_2_2677292940697014_METHOD_2_ED209D98E5C6FFB2_OFFSET UNITYSDK_OFFSET(0x18ADCCB0)
#define CLASS_2_2677292940697014__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADCCA0)

inline static constexpr unsigned int Class_2_2677292940697014_TypeDefinitionIndex = 49674;

class Class_2_2677292940697014 : public ::Class_1_3002EE73D986F5EA
{
public:
	::Class_1_14671E1C01F5FAC8* Field_2_2; // 0x18
	::Class_1_0D6706375CDAAE8C* Field_2_1; // 0x20
	::Class_1_0D6706375CDAAE8C* Field_2_0; // 0x28

	::System::Void _ctor(::Class_1_0D6706375CDAAE8C* a1, ::Class_1_0D6706375CDAAE8C* a2, ::Class_1_14671E1C01F5FAC8* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::Class_1_0D6706375CDAAE8C*, ::Class_1_14671E1C01F5FAC8*))((::PBYTE)hIl2Cpp + CLASS_2_2677292940697014__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_ED209D98E5C6FFB2(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_2677292940697014_METHOD_2_ED209D98E5C6FFB2_OFFSET))(this, a1);
	}
};
