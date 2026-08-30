#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DisableNextBattleWinVO; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_841153418B03C764_DISPOSE_OFFSET UNITYSDK_OFFSET(0x182144F0)
#define CLASS_3_841153418B03C764_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18214530)
#define CLASS_3_841153418B03C764__CTOR_OFFSET UNITYSDK_OFFSET(0x182144C0)

inline static constexpr unsigned int Class_3_841153418B03C764_TypeDefinitionIndex = 58236;

class Class_3_841153418B03C764 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DisableNextBattleWinVO*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableNextBattleWinVO* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableNextBattleWinVO*))((::PBYTE)hIl2Cpp + CLASS_3_841153418B03C764__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_841153418B03C764_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_841153418B03C764_ONTASKBEGIN_OFFSET))(this);
	}
};
