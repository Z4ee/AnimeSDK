#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
#include "unitysdk/System/Object.h"

class Class_1_1B6145248FA53FF9;
namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }

#define CLASS_1_1B6145248FA53FF9___C__DISPLAYCLASS28_0__COUNTOFFEREDTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xB8EC810)
#define CLASS_1_1B6145248FA53FF9___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB8EB530)

inline static constexpr unsigned int Class_1_1B6145248FA53FF9___c__DisplayClass28_0_TypeDefinitionIndex = 74863;

class Class_1_1B6145248FA53FF9___c__DisplayClass28_0 : public ::System::Object
{
public:
	::Class_1_1B6145248FA53FF9* __4__this; // 0x10
	::RPG::Client::Pet::BlindBox::BlindBoxPetType type; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _CountOfferedType_b__0(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9___C__DISPLAYCLASS28_0__COUNTOFFEREDTYPE_B__0_OFFSET))(this, a1);
	}
};
