#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1DB6C02CA182EEBA;
class Class_2_7AA0468CE6C1F3D7_1;
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }

#define CLASS_1_18F108BF403786B6_CLASS_1_317CDD276CB8C912__CTOR_OFFSET UNITYSDK_OFFSET(0x14590540)

inline static constexpr unsigned int Class_1_18F108BF403786B6_Class_1_317CDD276CB8C912_TypeDefinitionIndex = 53117;

class Class_1_18F108BF403786B6_Class_1_317CDD276CB8C912 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierConfig* Field_1_0; // 0x10
	::Class_2_7AA0468CE6C1F3D7_1* Field_1_1; // 0x18
	::Class_2_1DB6C02CA182EEBA* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18F108BF403786B6_CLASS_1_317CDD276CB8C912__CTOR_OFFSET))(this);
	}
};
