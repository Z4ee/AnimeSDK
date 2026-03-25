#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HighlightEntityActionBar; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CC42FBA3ABA838FE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA446980)
#define CLASS_3_CC42FBA3ABA838FE__CTOR_OFFSET UNITYSDK_OFFSET(0xA446950)

inline static constexpr unsigned int Class_3_CC42FBA3ABA838FE_TypeDefinitionIndex = 44093;

class Class_3_CC42FBA3ABA838FE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HighlightEntityActionBar*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HighlightEntityActionBar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HighlightEntityActionBar*))((::PBYTE)hIl2Cpp + CLASS_3_CC42FBA3ABA838FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC42FBA3ABA838FE_ONTASKBEGIN_OFFSET))(this);
	}
};
