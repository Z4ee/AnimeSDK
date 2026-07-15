#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_9CAA42EF32347EE5__CTOR_OFFSET UNITYSDK_OFFSET(0x186D12A0)

inline static constexpr unsigned int Class_1_9CAA42EF32347EE5_TypeDefinitionIndex = 52845;

class Class_1_9CAA42EF32347EE5 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CAA42EF32347EE5__CTOR_OFFSET))(this);
	}
};
