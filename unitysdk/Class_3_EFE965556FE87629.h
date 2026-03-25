#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAdvCharacterResidentEffectVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EFE965556FE87629_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D054F0)
#define CLASS_3_EFE965556FE87629__CTOR_OFFSET UNITYSDK_OFFSET(0x8D054C0)

inline static constexpr unsigned int Class_3_EFE965556FE87629_TypeDefinitionIndex = 43082;

class Class_3_EFE965556FE87629 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAdvCharacterResidentEffectVisible*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible*))((::PBYTE)hIl2Cpp + CLASS_3_EFE965556FE87629__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EFE965556FE87629_ONTASKBEGIN_OFFSET))(this);
	}
};
