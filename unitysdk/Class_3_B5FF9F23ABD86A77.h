#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FateBattleShowRiderUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B5FF9F23ABD86A77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16363C00)
#define CLASS_3_B5FF9F23ABD86A77__CTOR_OFFSET UNITYSDK_OFFSET(0x16363BD0)

inline static constexpr unsigned int Class_3_B5FF9F23ABD86A77_TypeDefinitionIndex = 55238;

class Class_3_B5FF9F23ABD86A77 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::FateBattleShowRiderUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FateBattleShowRiderUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FateBattleShowRiderUI*))((::PBYTE)hIl2Cpp + CLASS_3_B5FF9F23ABD86A77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B5FF9F23ABD86A77_ONTASKBEGIN_OFFSET))(this);
	}
};
