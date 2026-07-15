#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BattleChangeAvatar_LeaveStage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_939BC5AFE9AEF2EB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B182D0)
#define CLASS_3_939BC5AFE9AEF2EB__CTOR_OFFSET UNITYSDK_OFFSET(0x15B182A0)

inline static constexpr unsigned int Class_3_939BC5AFE9AEF2EB_TypeDefinitionIndex = 52390;

class Class_3_939BC5AFE9AEF2EB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BattleChangeAvatar_LeaveStage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleChangeAvatar_LeaveStage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleChangeAvatar_LeaveStage*))((::PBYTE)hIl2Cpp + CLASS_3_939BC5AFE9AEF2EB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_939BC5AFE9AEF2EB_ONTASKBEGIN_OFFSET))(this);
	}
};
