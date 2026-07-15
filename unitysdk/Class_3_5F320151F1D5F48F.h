#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CreateBattleEventQTEUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5F320151F1D5F48F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14B3EFF0)
#define CLASS_3_5F320151F1D5F48F__CTOR_OFFSET UNITYSDK_OFFSET(0x14B3EFC0)

inline static constexpr unsigned int Class_3_5F320151F1D5F48F_TypeDefinitionIndex = 55462;

class Class_3_5F320151F1D5F48F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateBattleEventQTEUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleEventQTEUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleEventQTEUI*))((::PBYTE)hIl2Cpp + CLASS_3_5F320151F1D5F48F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F320151F1D5F48F_ONTASKBEGIN_OFFSET))(this);
	}
};
