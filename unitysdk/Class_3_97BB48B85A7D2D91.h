#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowFightFestMainRaceUpgradeResultDialog; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_97BB48B85A7D2D91_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8AB4870)
#define CLASS_3_97BB48B85A7D2D91__CTOR_OFFSET UNITYSDK_OFFSET(0x8AB4810)

inline static constexpr unsigned int Class_3_97BB48B85A7D2D91_TypeDefinitionIndex = 47335;

class Class_3_97BB48B85A7D2D91 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog*>
{
public:
	::System::String* Field_3_0; // 0x28
	::System::String* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog*))((::PBYTE)hIl2Cpp + CLASS_3_97BB48B85A7D2D91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97BB48B85A7D2D91_ONTASKBEGIN_OFFSET))(this);
	}
};
