#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByRaidTargetProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E31088B822FC1053_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x140D2060)
#define CLASS_3_E31088B822FC1053__CTOR_OFFSET UNITYSDK_OFFSET(0x140D1ED0)

inline static constexpr unsigned int Class_3_E31088B822FC1053_TypeDefinitionIndex = 55915;

class Class_3_E31088B822FC1053 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByRaidTargetProgress*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28
	::RPG::GameCore::StringHash Field_3_1; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByRaidTargetProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByRaidTargetProgress*))((::PBYTE)hIl2Cpp + CLASS_3_E31088B822FC1053__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E31088B822FC1053_ONTASKBEGIN_OFFSET))(this);
	}
};
