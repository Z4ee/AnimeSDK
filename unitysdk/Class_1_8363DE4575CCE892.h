#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_8363DE4575CCE892__CTOR_OFFSET UNITYSDK_OFFSET(0x1705CEE0)

inline static constexpr unsigned int Class_1_8363DE4575CCE892_TypeDefinitionIndex = 55706;

class Class_1_8363DE4575CCE892 : public ::System::Object
{
public:
	::System::String* LLOGCJNGEDA; // 0x10
	::System::String* BOJIADNJMJK; // 0x18
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x20
	::System::Boolean IOBJFEJFLJP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8363DE4575CCE892__CTOR_OFFSET))(this);
	}
};
