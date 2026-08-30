#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtBattleSetCameraFocusTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C89854AF54E84B79_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19AE8DA0)
#define CLASS_3_C89854AF54E84B79__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE8D70)

inline static constexpr unsigned int Class_3_C89854AF54E84B79_TypeDefinitionIndex = 54369;

class Class_3_C89854AF54E84B79 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtBattleSetCameraFocusTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBattleSetCameraFocusTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBattleSetCameraFocusTarget*))((::PBYTE)hIl2Cpp + CLASS_3_C89854AF54E84B79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C89854AF54E84B79_ONTASKBEGIN_OFFSET))(this);
	}
};
