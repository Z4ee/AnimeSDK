#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetCharacterPartsVisibility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_63705D38C43C1B4E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB784C60)
#define CLASS_3_63705D38C43C1B4E__CTOR_OFFSET UNITYSDK_OFFSET(0xB784C30)

inline static constexpr unsigned int Class_3_63705D38C43C1B4E_TypeDefinitionIndex = 52213;

class Class_3_63705D38C43C1B4E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharacterPartsVisibility*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterPartsVisibility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterPartsVisibility*))((::PBYTE)hIl2Cpp + CLASS_3_63705D38C43C1B4E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_63705D38C43C1B4E_ONTASKBEGIN_OFFSET))(this);
	}
};
