#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropInitDayOfWeekAction; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D723818E1C317338_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A2CE20)
#define CLASS_3_D723818E1C317338__CTOR_OFFSET UNITYSDK_OFFSET(0x15A2CDF0)

inline static constexpr unsigned int Class_3_D723818E1C317338_TypeDefinitionIndex = 53432;

class Class_3_D723818E1C317338 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropInitDayOfWeekAction*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropInitDayOfWeekAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitDayOfWeekAction*))((::PBYTE)hIl2Cpp + CLASS_3_D723818E1C317338__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D723818E1C317338_ONTASKBEGIN_OFFSET))(this);
	}
};
