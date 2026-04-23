#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OverrideAdventureCharacterTiltConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_00024C4E67953652_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7BCD70)
#define CLASS_3_00024C4E67953652__CTOR_OFFSET UNITYSDK_OFFSET(0xA7BCD40)

inline static constexpr unsigned int Class_3_00024C4E67953652_TypeDefinitionIndex = 48919;

class Class_3_00024C4E67953652 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OverrideAdventureCharacterTiltConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideAdventureCharacterTiltConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideAdventureCharacterTiltConfig*))((::PBYTE)hIl2Cpp + CLASS_3_00024C4E67953652__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00024C4E67953652_ONTASKBEGIN_OFFSET))(this);
	}
};
