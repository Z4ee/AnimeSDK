#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_8127A0E66BE3BB12__CTOR_OFFSET UNITYSDK_OFFSET(0x18A85CA0)

inline static constexpr unsigned int Class_1_8127A0E66BE3BB12_TypeDefinitionIndex = 48066;

class Class_1_8127A0E66BE3BB12 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
	::System::String* JKMABBEGEAH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8127A0E66BE3BB12__CTOR_OFFSET))(this);
	}
};
