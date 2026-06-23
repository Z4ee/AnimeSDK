#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_33B50469231C7D95.h"

class Class_2_34E304ABF8E9FF08_Class_1_AD9FF58C3FE0E0EC;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_34E304ABF8E9FF08_METHOD_2_7443AD94E7275ABA_OFFSET UNITYSDK_OFFSET(0x1352FBE0)
#define CLASS_2_34E304ABF8E9FF08_METHOD_2_A495B86A75B7AD65_OFFSET UNITYSDK_OFFSET(0x1352FA60)
#define CLASS_2_34E304ABF8E9FF08_METHOD_2_AA6AC38756233BD0_1_OFFSET UNITYSDK_OFFSET(0x1352FF30)
#define CLASS_2_34E304ABF8E9FF08_METHOD_2_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x1352FEA0)
#define CLASS_2_34E304ABF8E9FF08_METHOD_2_DF7870AF630B4519_OFFSET UNITYSDK_OFFSET(0x1352F8D0)
#define CLASS_2_34E304ABF8E9FF08__CTOR_OFFSET UNITYSDK_OFFSET(0x1352FDF0)

inline static constexpr unsigned int Class_2_34E304ABF8E9FF08_TypeDefinitionIndex = 70845;

class Class_2_34E304ABF8E9FF08 : public ::Class_1_33B50469231C7D95
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_34E304ABF8E9FF08_Class_1_AD9FF58C3FE0E0EC*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34E304ABF8E9FF08__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_DF7870AF630B4519(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_34E304ABF8E9FF08_METHOD_2_DF7870AF630B4519_OFFSET))(this, a1);
	}

	::System::Void Method_2_A495B86A75B7AD65(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_34E304ABF8E9FF08_METHOD_2_A495B86A75B7AD65_OFFSET))(this, a1);
	}

	::System::Void Method_2_7443AD94E7275ABA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34E304ABF8E9FF08_METHOD_2_7443AD94E7275ABA_OFFSET))(this);
	}

	::System::Void Method_2_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_34E304ABF8E9FF08_METHOD_2_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA6AC38756233BD0_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_34E304ABF8E9FF08_METHOD_2_AA6AC38756233BD0_1_OFFSET))(this, a1);
	}
};
