#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_F44524D91BEABB41__CTOR_OFFSET UNITYSDK_OFFSET(0x142FA430)

inline static constexpr unsigned int Class_1_F44524D91BEABB41_TypeDefinitionIndex = 52669;

class Class_1_F44524D91BEABB41 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44524D91BEABB41__CTOR_OFFSET))(this);
	}
};
