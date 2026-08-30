#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_E17105E653363FFF__CTOR_OFFSET UNITYSDK_OFFSET(0x12E85480)

inline static constexpr unsigned int Class_1_E17105E653363FFF_TypeDefinitionIndex = 53882;

class Class_1_E17105E653363FFF : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* FNDHDEOILCK; // 0x10
	::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x18
	::System::Object* MGBHBDKCGJE; // 0x20
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* DCLGGMAEMAO; // 0x28
	::RPG::GameCore::FixVec3 PECPBEOHOJC; // 0x30
	::RPG::GameCore::FixPoint EPFPKBLIIOI; // 0x48
	::System::UInt32 DFEJABODPGM; // 0x50
	::RPG::GameCore::TeamType BEGKIKOGEOD; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E17105E653363FFF__CTOR_OFFSET))(this);
	}
};
