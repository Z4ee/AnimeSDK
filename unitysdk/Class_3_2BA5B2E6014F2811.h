#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetBattleConditionProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2BA5B2E6014F2811_METHOD_3_9FF2A3B8B6BE1199_OFFSET UNITYSDK_OFFSET(0xBD95F20)
#define CLASS_3_2BA5B2E6014F2811_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD95D70)
#define CLASS_3_2BA5B2E6014F2811__CTOR_OFFSET UNITYSDK_OFFSET(0xBD95D40)

inline static constexpr unsigned int Class_3_2BA5B2E6014F2811_TypeDefinitionIndex = 58665;

class Class_3_2BA5B2E6014F2811 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBattleConditionProgress*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleConditionProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleConditionProgress*))((::PBYTE)hIl2Cpp + CLASS_3_2BA5B2E6014F2811__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BA5B2E6014F2811_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_9FF2A3B8B6BE1199(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_2BA5B2E6014F2811_METHOD_3_9FF2A3B8B6BE1199_OFFSET))(this, a1, a2);
	}
};
