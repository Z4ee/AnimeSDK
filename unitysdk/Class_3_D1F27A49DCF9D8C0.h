#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HipplenGameSwitchCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D1F27A49DCF9D8C0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16271E40)
#define CLASS_3_D1F27A49DCF9D8C0__CTOR_OFFSET UNITYSDK_OFFSET(0x16271E10)

inline static constexpr unsigned int Class_3_D1F27A49DCF9D8C0_TypeDefinitionIndex = 52556;

class Class_3_D1F27A49DCF9D8C0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HipplenGameSwitchCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenGameSwitchCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenGameSwitchCamera*))((::PBYTE)hIl2Cpp + CLASS_3_D1F27A49DCF9D8C0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D1F27A49DCF9D8C0_ONTASKBEGIN_OFFSET))(this);
	}
};
