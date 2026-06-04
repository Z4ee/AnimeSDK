#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"

class Class_1_B8E6D5AD8534D123;

#define CLASS_2_1DE88106B6D17DE5_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x14198840)
#define CLASS_2_1DE88106B6D17DE5__CTOR_OFFSET UNITYSDK_OFFSET(0x14198A90)
#define CLASS_2_1DE88106B6D17DE5___IFIXBASEPROXY_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x14198AA0)

inline static constexpr unsigned int Class_2_1DE88106B6D17DE5_TypeDefinitionIndex = 60948;

class Class_2_1DE88106B6D17DE5 : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DE88106B6D17DE5__CTOR_OFFSET))(this);
	}

	::System::Void UpdateModifier(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_1DE88106B6D17DE5_UPDATEMODIFIER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateModifier(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_1DE88106B6D17DE5___IFIXBASEPROXY_UPDATEMODIFIER_OFFSET))(this, a1);
	}
};
