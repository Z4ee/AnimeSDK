#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowBattleQTEUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E7123A3B2D1A850F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9A63E30)
#define CLASS_3_E7123A3B2D1A850F__CTOR_OFFSET UNITYSDK_OFFSET(0x9A63E00)

inline static constexpr unsigned int Class_3_E7123A3B2D1A850F_TypeDefinitionIndex = 54031;

class Class_3_E7123A3B2D1A850F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowBattleQTEUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleQTEUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleQTEUI*))((::PBYTE)hIl2Cpp + CLASS_3_E7123A3B2D1A850F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7123A3B2D1A850F_ONTASKBEGIN_OFFSET))(this);
	}
};
