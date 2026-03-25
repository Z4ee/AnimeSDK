#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SyncBattleEventPropertyValues; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7958CB30D363A901_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x115E9810)
#define CLASS_3_7958CB30D363A901__CTOR_OFFSET UNITYSDK_OFFSET(0x115E97E0)

inline static constexpr unsigned int Class_3_7958CB30D363A901_TypeDefinitionIndex = 47438;

class Class_3_7958CB30D363A901 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SyncBattleEventPropertyValues*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SyncBattleEventPropertyValues* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SyncBattleEventPropertyValues*))((::PBYTE)hIl2Cpp + CLASS_3_7958CB30D363A901__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7958CB30D363A901_ONTASKBEGIN_OFFSET))(this);
	}
};
