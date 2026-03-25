#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableSelectionProp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8316DD14A7498FE2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEB1EE0)
#define CLASS_3_8316DD14A7498FE2__CTOR_OFFSET UNITYSDK_OFFSET(0xBEB1EB0)

inline static constexpr unsigned int Class_3_8316DD14A7498FE2_TypeDefinitionIndex = 46883;

class Class_3_8316DD14A7498FE2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableSelectionProp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableSelectionProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableSelectionProp*))((::PBYTE)hIl2Cpp + CLASS_3_8316DD14A7498FE2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8316DD14A7498FE2_ONTASKBEGIN_OFFSET))(this);
	}
};
