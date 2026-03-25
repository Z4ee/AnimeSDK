#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CreateBattleTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E41CF9E964F7A1DE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7D68B0)
#define CLASS_3_E41CF9E964F7A1DE__CTOR_OFFSET UNITYSDK_OFFSET(0xD7D6880)

inline static constexpr unsigned int Class_3_E41CF9E964F7A1DE_TypeDefinitionIndex = 46820;

class Class_3_E41CF9E964F7A1DE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateBattleTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleTarget*))((::PBYTE)hIl2Cpp + CLASS_3_E41CF9E964F7A1DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41CF9E964F7A1DE_ONTASKBEGIN_OFFSET))(this);
	}
};
