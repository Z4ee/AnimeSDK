#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PreloadBattleEventByID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_59C00246BE253595_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117E2000)
#define CLASS_3_59C00246BE253595__CTOR_OFFSET UNITYSDK_OFFSET(0x117E1FD0)

inline static constexpr unsigned int Class_3_59C00246BE253595_TypeDefinitionIndex = 53765;

class Class_3_59C00246BE253595 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PreloadBattleEventByID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PreloadBattleEventByID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PreloadBattleEventByID*))((::PBYTE)hIl2Cpp + CLASS_3_59C00246BE253595__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59C00246BE253595_ONTASKBEGIN_OFFSET))(this);
	}
};
