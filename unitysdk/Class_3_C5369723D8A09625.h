#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BattleChangeAvatar_EnterStage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C5369723D8A09625_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BD07C0)
#define CLASS_3_C5369723D8A09625_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BD0800)
#define CLASS_3_C5369723D8A09625__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD0790)

inline static constexpr unsigned int Class_3_C5369723D8A09625_TypeDefinitionIndex = 52389;

class Class_3_C5369723D8A09625 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BattleChangeAvatar_EnterStage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleChangeAvatar_EnterStage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleChangeAvatar_EnterStage*))((::PBYTE)hIl2Cpp + CLASS_3_C5369723D8A09625__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5369723D8A09625_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5369723D8A09625_ONTASKBEGIN_OFFSET))(this);
	}
};
