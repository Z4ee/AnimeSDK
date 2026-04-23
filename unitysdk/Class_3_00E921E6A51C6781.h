#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueShopEnterBattle; }

#define CLASS_3_00E921E6A51C6781_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10031050)
#define CLASS_3_00E921E6A51C6781__CTOR_OFFSET UNITYSDK_OFFSET(0x10031020)

inline static constexpr unsigned int Class_3_00E921E6A51C6781_TypeDefinitionIndex = 54212;

class Class_3_00E921E6A51C6781 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerRogueShopEnterBattle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerRogueShopEnterBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerRogueShopEnterBattle*))((::PBYTE)hIl2Cpp + CLASS_3_00E921E6A51C6781__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00E921E6A51C6781_ONTASKBEGIN_OFFSET))(this);
	}
};
