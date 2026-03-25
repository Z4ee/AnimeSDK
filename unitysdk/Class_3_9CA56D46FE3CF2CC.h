#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockAnimatorSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9CA56D46FE3CF2CC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1145DC80)
#define CLASS_3_9CA56D46FE3CF2CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1145DC50)

inline static constexpr unsigned int Class_3_9CA56D46FE3CF2CC_TypeDefinitionIndex = 44133;

class Class_3_9CA56D46FE3CF2CC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockAnimatorSpeed*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockAnimatorSpeed* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockAnimatorSpeed*))((::PBYTE)hIl2Cpp + CLASS_3_9CA56D46FE3CF2CC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CA56D46FE3CF2CC_ONTASKBEGIN_OFFSET))(this);
	}
};
