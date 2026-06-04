#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_E17105E653363FFF__CTOR_OFFSET UNITYSDK_OFFSET(0x112BD0C0)

inline static constexpr unsigned int Class_1_E17105E653363FFF_TypeDefinitionIndex = 50116;

class Class_1_E17105E653363FFF : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_1_1; // 0x18
	::RPG::GameCore::TaskContext* Field_1_2; // 0x20
	::System::Object* Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x30
	::RPG::GameCore::TeamType Field_1_5; // 0x34
	::RPG::GameCore::FixVec3 Field_1_6; // 0x38
	::RPG::GameCore::FixPoint Field_1_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E17105E653363FFF__CTOR_OFFSET))(this);
	}
};
