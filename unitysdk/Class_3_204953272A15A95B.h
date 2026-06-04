#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetCharacterShowSummonUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_204953272A15A95B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xABA6070)
#define CLASS_3_204953272A15A95B__CTOR_OFFSET UNITYSDK_OFFSET(0xABA6040)

inline static constexpr unsigned int Class_3_204953272A15A95B_TypeDefinitionIndex = 54684;

class Class_3_204953272A15A95B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharacterShowSummonUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterShowSummonUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterShowSummonUI*))((::PBYTE)hIl2Cpp + CLASS_3_204953272A15A95B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_204953272A15A95B_ONTASKBEGIN_OFFSET))(this);
	}
};
