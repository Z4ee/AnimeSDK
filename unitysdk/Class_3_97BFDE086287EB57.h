#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowBattleVersusBarCountDownEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_97BFDE086287EB57_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18958A20)
#define CLASS_3_97BFDE086287EB57_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18958A60)
#define CLASS_3_97BFDE086287EB57__CTOR_OFFSET UNITYSDK_OFFSET(0x189589F0)

inline static constexpr unsigned int Class_3_97BFDE086287EB57_TypeDefinitionIndex = 56634;

class Class_3_97BFDE086287EB57 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowBattleVersusBarCountDownEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect*))((::PBYTE)hIl2Cpp + CLASS_3_97BFDE086287EB57__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97BFDE086287EB57_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97BFDE086287EB57_ONTASKBEGIN_OFFSET))(this);
	}
};
