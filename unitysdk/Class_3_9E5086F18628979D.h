#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureSetAttackTargetMonsterDie; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9E5086F18628979D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143136F0)
#define CLASS_3_9E5086F18628979D__CTOR_OFFSET UNITYSDK_OFFSET(0x143136C0)

inline static constexpr unsigned int Class_3_9E5086F18628979D_TypeDefinitionIndex = 49128;

class Class_3_9E5086F18628979D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureSetAttackTargetMonsterDie*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureSetAttackTargetMonsterDie* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureSetAttackTargetMonsterDie*))((::PBYTE)hIl2Cpp + CLASS_3_9E5086F18628979D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E5086F18628979D_ONTASKBEGIN_OFFSET))(this);
	}
};
