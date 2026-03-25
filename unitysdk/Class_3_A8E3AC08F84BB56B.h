#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HipplenMiniGameCreateCharacters; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A8E3AC08F84BB56B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AF7870)
#define CLASS_3_A8E3AC08F84BB56B__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF7840)

inline static constexpr unsigned int Class_3_A8E3AC08F84BB56B_TypeDefinitionIndex = 42303;

class Class_3_A8E3AC08F84BB56B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HipplenMiniGameCreateCharacters*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenMiniGameCreateCharacters* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenMiniGameCreateCharacters*))((::PBYTE)hIl2Cpp + CLASS_3_A8E3AC08F84BB56B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8E3AC08F84BB56B_ONTASKBEGIN_OFFSET))(this);
	}
};
