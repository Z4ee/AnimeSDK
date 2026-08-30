#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class InitBattleItemProgressInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D6C66F91FAB1BC26_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17072EC0)
#define CLASS_3_D6C66F91FAB1BC26__CTOR_OFFSET UNITYSDK_OFFSET(0x17072E90)

inline static constexpr unsigned int Class_3_D6C66F91FAB1BC26_TypeDefinitionIndex = 48063;

class Class_3_D6C66F91FAB1BC26 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InitBattleItemProgressInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitBattleItemProgressInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitBattleItemProgressInfo*))((::PBYTE)hIl2Cpp + CLASS_3_D6C66F91FAB1BC26__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6C66F91FAB1BC26_ONTASKBEGIN_OFFSET))(this);
	}
};
