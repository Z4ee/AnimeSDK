#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FormationMoveToStation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5FF9FEEBE8E0D700_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89B2CC0)
#define CLASS_3_5FF9FEEBE8E0D700__CTOR_OFFSET UNITYSDK_OFFSET(0x89B2C90)

inline static constexpr unsigned int Class_3_5FF9FEEBE8E0D700_TypeDefinitionIndex = 46907;

class Class_3_5FF9FEEBE8E0D700 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::FormationMoveToStation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMoveToStation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMoveToStation*))((::PBYTE)hIl2Cpp + CLASS_3_5FF9FEEBE8E0D700__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FF9FEEBE8E0D700_ONTASKBEGIN_OFFSET))(this);
	}
};
