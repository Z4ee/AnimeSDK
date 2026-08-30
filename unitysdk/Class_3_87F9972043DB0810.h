#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChangeMonsterHeadIcon; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_87F9972043DB0810_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFC34A0)
#define CLASS_3_87F9972043DB0810__CTOR_OFFSET UNITYSDK_OFFSET(0xBFC3470)

inline static constexpr unsigned int Class_3_87F9972043DB0810_TypeDefinitionIndex = 55132;

class Class_3_87F9972043DB0810 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChangeMonsterHeadIcon*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeMonsterHeadIcon* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeMonsterHeadIcon*))((::PBYTE)hIl2Cpp + CLASS_3_87F9972043DB0810__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87F9972043DB0810_ONTASKBEGIN_OFFSET))(this);
	}
};
