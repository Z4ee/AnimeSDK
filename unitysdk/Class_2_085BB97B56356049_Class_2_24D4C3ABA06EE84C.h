#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

namespace MoleMole { class UserLocalDataItem; }
template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xB7986F0)
#define CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C__CTOR_OFFSET UNITYSDK_OFFSET(0xB798770)

inline static constexpr unsigned int Class_2_085BB97B56356049_Class_2_24D4C3ABA06EE84C_TypeDefinitionIndex = 79589;

class Class_2_085BB97B56356049_Class_2_24D4C3ABA06EE84C : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::MoleMole::UserLocalDataItem*>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C_ONCREATEPROPERTY_OFFSET))(this);
	}
};
