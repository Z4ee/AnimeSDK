#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetBattleEndReason; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9486489B1FFB10D1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE65DAF0)
#define CLASS_3_9486489B1FFB10D1__CTOR_OFFSET UNITYSDK_OFFSET(0xE65DAC0)

inline static constexpr unsigned int Class_3_9486489B1FFB10D1_TypeDefinitionIndex = 51035;

class Class_3_9486489B1FFB10D1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBattleEndReason*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleEndReason* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleEndReason*))((::PBYTE)hIl2Cpp + CLASS_3_9486489B1FFB10D1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9486489B1FFB10D1_ONTASKBEGIN_OFFSET))(this);
	}
};
