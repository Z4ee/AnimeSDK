#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

namespace MoleMole { class UserLocalDataItem; }
template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17E7CDE0)
#define CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7CE60)

inline static constexpr unsigned int Class_2_085BB97B56356049_Class_2_24D4C3ABA06EE84C_TypeDefinitionIndex = 90018;

class Class_2_085BB97B56356049_Class_2_24D4C3ABA06EE84C : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::MoleMole::UserLocalDataItem*>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C_ONCREATEPROPERTY_OFFSET))(this);
	}
};
