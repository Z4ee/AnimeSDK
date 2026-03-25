#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GridFightShowBattleEventHint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AE1B77F5D94C7B51_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x110DED20)
#define CLASS_3_AE1B77F5D94C7B51__CTOR_OFFSET UNITYSDK_OFFSET(0x110DECF0)

inline static constexpr unsigned int Class_3_AE1B77F5D94C7B51_TypeDefinitionIndex = 46913;

class Class_3_AE1B77F5D94C7B51 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GridFightShowBattleEventHint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowBattleEventHint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowBattleEventHint*))((::PBYTE)hIl2Cpp + CLASS_3_AE1B77F5D94C7B51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE1B77F5D94C7B51_ONTASKBEGIN_OFFSET))(this);
	}
};
