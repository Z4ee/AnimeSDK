#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_33B50469231C7D95.h"

class Class_2_41CB4186C6EC7B74_Class_1_AD9FF58C3FE0E0EC;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_41CB4186C6EC7B74_METHOD_2_696A0431D8187A24_OFFSET UNITYSDK_OFFSET(0x13E673E0)
#define CLASS_2_41CB4186C6EC7B74_METHOD_2_7443AD94E7275ABA_OFFSET UNITYSDK_OFFSET(0x13E67710)
#define CLASS_2_41CB4186C6EC7B74_METHOD_2_A495B86A75B7AD65_OFFSET UNITYSDK_OFFSET(0x13E67590)
#define CLASS_2_41CB4186C6EC7B74_METHOD_2_AA6AC38756233BD0_1_OFFSET UNITYSDK_OFFSET(0x13E67A60)
#define CLASS_2_41CB4186C6EC7B74_METHOD_2_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x13E679D0)
#define CLASS_2_41CB4186C6EC7B74__CTOR_OFFSET UNITYSDK_OFFSET(0x13E67920)

inline static constexpr unsigned int Class_2_41CB4186C6EC7B74_TypeDefinitionIndex = 68270;

class Class_2_41CB4186C6EC7B74 : public ::Class_1_33B50469231C7D95
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_41CB4186C6EC7B74_Class_1_AD9FF58C3FE0E0EC*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41CB4186C6EC7B74__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_696A0431D8187A24(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_41CB4186C6EC7B74_METHOD_2_696A0431D8187A24_OFFSET))(this, a1);
	}

	::System::Void Method_2_A495B86A75B7AD65(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_41CB4186C6EC7B74_METHOD_2_A495B86A75B7AD65_OFFSET))(this, a1);
	}

	::System::Void Method_2_7443AD94E7275ABA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41CB4186C6EC7B74_METHOD_2_7443AD94E7275ABA_OFFSET))(this);
	}

	::System::Void Method_2_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_41CB4186C6EC7B74_METHOD_2_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA6AC38756233BD0_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_41CB4186C6EC7B74_METHOD_2_AA6AC38756233BD0_1_OFFSET))(this, a1);
	}
};
