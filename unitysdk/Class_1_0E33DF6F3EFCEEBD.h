#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigCounterstroke; }

#define CLASS_1_0E33DF6F3EFCEEBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C7DB0)

inline static constexpr unsigned int Class_1_0E33DF6F3EFCEEBD_TypeDefinitionIndex = 81516;

class Class_1_0E33DF6F3EFCEEBD : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_2; // 0x10
	::MoleMole::Config::ConfigCounterstroke* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Boolean Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E33DF6F3EFCEEBD__CTOR_OFFSET))(this);
	}
};
