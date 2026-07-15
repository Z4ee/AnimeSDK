#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BattleChangeAvatar_PreEnterStage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2FB5AA92AE057FDB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1670E320)
#define CLASS_3_2FB5AA92AE057FDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1670E360)
#define CLASS_3_2FB5AA92AE057FDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1670E2F0)

inline static constexpr unsigned int Class_3_2FB5AA92AE057FDB_TypeDefinitionIndex = 52391;

class Class_3_2FB5AA92AE057FDB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BattleChangeAvatar_PreEnterStage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleChangeAvatar_PreEnterStage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleChangeAvatar_PreEnterStage*))((::PBYTE)hIl2Cpp + CLASS_3_2FB5AA92AE057FDB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FB5AA92AE057FDB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FB5AA92AE057FDB_ONTASKBEGIN_OFFSET))(this);
	}
};
