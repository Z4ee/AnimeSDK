#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_E17105E653363FFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1175BAF0)

inline static constexpr unsigned int Class_1_E17105E653363FFF_TypeDefinitionIndex = 49449;

class Class_1_E17105E653363FFF : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_1_5; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18
	::RPG::GameCore::TaskContext* Field_1_6; // 0x20
	::System::Object* Field_1_7; // 0x28
	::RPG::GameCore::FixVec3 Field_1_3; // 0x30
	::System::UInt32 Field_1_2; // 0x48
	::RPG::GameCore::TeamType Field_1_1; // 0x4C
	::RPG::GameCore::FixPoint Field_1_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E17105E653363FFF__CTOR_OFFSET))(this);
	}
};
