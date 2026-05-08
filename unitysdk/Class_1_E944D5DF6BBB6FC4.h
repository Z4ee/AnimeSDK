#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigCounterstroke; }

#define CLASS_1_E944D5DF6BBB6FC4__CTOR_OFFSET UNITYSDK_OFFSET(0x17C11FF0)

inline static constexpr unsigned int Class_1_E944D5DF6BBB6FC4_TypeDefinitionIndex = 74011;

class Class_1_E944D5DF6BBB6FC4 : public ::System::Object
{
public:
	::MoleMole::Config::ConfigCounterstroke* Field_1_7; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18
	::System::Single Field_1_1; // 0x20
	::System::Boolean Field_1_4; // 0x24
	::System::Boolean Field_1_6; // 0x25
	::System::Boolean Field_1_3; // 0x26
	::System::Boolean Field_1_5; // 0x27
	::System::Single Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E944D5DF6BBB6FC4__CTOR_OFFSET))(this);
	}
};
