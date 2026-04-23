#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FateBattleArcherProgressReachLimit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D0611FFBB848DD36_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1256EDB0)
#define CLASS_3_D0611FFBB848DD36__CTOR_OFFSET UNITYSDK_OFFSET(0x1256ED80)

inline static constexpr unsigned int Class_3_D0611FFBB848DD36_TypeDefinitionIndex = 50760;

class Class_3_D0611FFBB848DD36 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::FateBattleArcherProgressReachLimit*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FateBattleArcherProgressReachLimit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FateBattleArcherProgressReachLimit*))((::PBYTE)hIl2Cpp + CLASS_3_D0611FFBB848DD36__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0611FFBB848DD36_ONTASKBEGIN_OFFSET))(this);
	}
};
