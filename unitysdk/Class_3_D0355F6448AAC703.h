#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StartBattleLevelGraphOperation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D0355F6448AAC703_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x950A880)
#define CLASS_3_D0355F6448AAC703__CTOR_OFFSET UNITYSDK_OFFSET(0x950A850)

inline static constexpr unsigned int Class_3_D0355F6448AAC703_TypeDefinitionIndex = 54134;

class Class_3_D0355F6448AAC703 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartBattleLevelGraphOperation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartBattleLevelGraphOperation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartBattleLevelGraphOperation*))((::PBYTE)hIl2Cpp + CLASS_3_D0355F6448AAC703__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0355F6448AAC703_ONTASKBEGIN_OFFSET))(this);
	}
};
