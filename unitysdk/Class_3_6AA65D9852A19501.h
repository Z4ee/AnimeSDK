#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BattleFullScreenTransfer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6AA65D9852A19501_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117D5BC0)
#define CLASS_3_6AA65D9852A19501__CTOR_OFFSET UNITYSDK_OFFSET(0x117D5B90)

inline static constexpr unsigned int Class_3_6AA65D9852A19501_TypeDefinitionIndex = 53436;

class Class_3_6AA65D9852A19501 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BattleFullScreenTransfer*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleFullScreenTransfer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleFullScreenTransfer*))((::PBYTE)hIl2Cpp + CLASS_3_6AA65D9852A19501__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6AA65D9852A19501_ONTASKBEGIN_OFFSET))(this);
	}
};
