#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetCharacterMaterialEffectEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0C0E35C66EFAA632_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14277FD0)
#define CLASS_3_0C0E35C66EFAA632__CTOR_OFFSET UNITYSDK_OFFSET(0x14277FA0)

inline static constexpr unsigned int Class_3_0C0E35C66EFAA632_TypeDefinitionIndex = 49743;

class Class_3_0C0E35C66EFAA632 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharacterMaterialEffectEnable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterMaterialEffectEnable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterMaterialEffectEnable*))((::PBYTE)hIl2Cpp + CLASS_3_0C0E35C66EFAA632__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C0E35C66EFAA632_ONTASKBEGIN_OFFSET))(this);
	}
};
