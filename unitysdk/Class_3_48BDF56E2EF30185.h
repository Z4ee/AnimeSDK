#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PreloadBattleEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_48BDF56E2EF30185_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7790B0)
#define CLASS_3_48BDF56E2EF30185__CTOR_OFFSET UNITYSDK_OFFSET(0x1A779080)

inline static constexpr unsigned int Class_3_48BDF56E2EF30185_TypeDefinitionIndex = 58446;

class Class_3_48BDF56E2EF30185 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PreloadBattleEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PreloadBattleEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PreloadBattleEvent*))((::PBYTE)hIl2Cpp + CLASS_3_48BDF56E2EF30185__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48BDF56E2EF30185_ONTASKBEGIN_OFFSET))(this);
	}
};
