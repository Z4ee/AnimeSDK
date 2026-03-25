#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1DB6C02CA182EEBA;
class Class_2_7AA0468CE6C1F3D7;
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }

#define CLASS_1_709C4C5FB0270D6D_CLASS_1_317CDD276CB8C912__CTOR_OFFSET UNITYSDK_OFFSET(0x10602D60)

inline static constexpr unsigned int Class_1_709C4C5FB0270D6D_Class_1_317CDD276CB8C912_TypeDefinitionIndex = 45762;

class Class_1_709C4C5FB0270D6D_Class_1_317CDD276CB8C912 : public ::System::Object
{
public:
	::Class_2_7AA0468CE6C1F3D7* Field_1_3; // 0x10
	::Class_2_1DB6C02CA182EEBA* Field_1_2; // 0x18
	::System::String* Field_1_0; // 0x20
	::RPG::GameCore::TurnBasedModifierConfig* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_709C4C5FB0270D6D_CLASS_1_317CDD276CB8C912__CTOR_OFFSET))(this);
	}
};
