#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffectListOnCharacter; }

#define CLASS_3_6ABC49A1D5E036CD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AC0210)
#define CLASS_3_6ABC49A1D5E036CD__CTOR_OFFSET UNITYSDK_OFFSET(0x10AC01E0)

inline static constexpr unsigned int Class_3_6ABC49A1D5E036CD_TypeDefinitionIndex = 47459;

class Class_3_6ABC49A1D5E036CD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerEffectListOnCharacter*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEffectListOnCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEffectListOnCharacter*))((::PBYTE)hIl2Cpp + CLASS_3_6ABC49A1D5E036CD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6ABC49A1D5E036CD_ONTASKBEGIN_OFFSET))(this);
	}
};
