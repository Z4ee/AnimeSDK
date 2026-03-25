#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveEffectOnCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3398DD74D7FEC31F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x113FDA90)
#define CLASS_3_3398DD74D7FEC31F__CTOR_OFFSET UNITYSDK_OFFSET(0x113FDA60)

inline static constexpr unsigned int Class_3_3398DD74D7FEC31F_TypeDefinitionIndex = 47123;

class Class_3_3398DD74D7FEC31F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveEffectOnCharacter*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveEffectOnCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveEffectOnCharacter*))((::PBYTE)hIl2Cpp + CLASS_3_3398DD74D7FEC31F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3398DD74D7FEC31F_ONTASKBEGIN_OFFSET))(this);
	}
};
