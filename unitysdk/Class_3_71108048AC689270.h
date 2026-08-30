#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PreloadBattlePerform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_71108048AC689270_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134BA5C0)
#define CLASS_3_71108048AC689270__CTOR_OFFSET UNITYSDK_OFFSET(0x134BA590)

inline static constexpr unsigned int Class_3_71108048AC689270_TypeDefinitionIndex = 58447;

class Class_3_71108048AC689270 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PreloadBattlePerform*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PreloadBattlePerform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PreloadBattlePerform*))((::PBYTE)hIl2Cpp + CLASS_3_71108048AC689270__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71108048AC689270_ONTASKBEGIN_OFFSET))(this);
	}
};
