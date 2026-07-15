#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_837;
class Class_1_AE0CA897D782D638;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_D400F5A6FFC9D694_METHOD_1_1EB69C4359B9295D_OFFSET UNITYSDK_OFFSET(0x1923D300)
#define CLASS_1_D400F5A6FFC9D694_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1923D360)
#define CLASS_1_D400F5A6FFC9D694_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1923D2B0)
#define CLASS_1_D400F5A6FFC9D694_METHOD_1_A7064B88FDB61D47_OFFSET UNITYSDK_OFFSET(0x1923D3A0)
#define CLASS_1_D400F5A6FFC9D694__CTOR_OFFSET UNITYSDK_OFFSET(0x1923D480)

inline static constexpr unsigned int Class_1_D400F5A6FFC9D694_TypeDefinitionIndex = 62657;

class Class_1_D400F5A6FFC9D694 : public ::System::Object
{
public:
	::Class_1_AE0CA897D782D638* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D400F5A6FFC9D694__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D400F5A6FFC9D694_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_1EB69C4359B9295D(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_D400F5A6FFC9D694_METHOD_1_1EB69C4359B9295D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D400F5A6FFC9D694_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_837* Method_1_A7064B88FDB61D47()
	{
		return ((::Class_0_16E4307DCC419505_837*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D400F5A6FFC9D694_METHOD_1_A7064B88FDB61D47_OFFSET))(this);
	}
};
