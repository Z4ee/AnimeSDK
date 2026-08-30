#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"

#define CLASS_2_CCB925FAB706C203_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1C76E0B0)
#define CLASS_2_CCB925FAB706C203_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x1C76E130)
#define CLASS_2_CCB925FAB706C203__CTOR_OFFSET UNITYSDK_OFFSET(0x1C76E0A0)

inline static constexpr unsigned int Class_2_CCB925FAB706C203_TypeDefinitionIndex = 40916;

class Class_2_CCB925FAB706C203 : public ::Class_1_5BE136E515AF9A61
{
public:
	::System::Single HBDJCFFDGDD; // 0x18
	::System::Single PGMIOKKLHIE; // 0x1C

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CCB925FAB706C203__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCB925FAB706C203_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CCB925FAB706C203_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}
};
