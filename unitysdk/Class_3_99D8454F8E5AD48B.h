#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByBPChange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_99D8454F8E5AD48B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x141A34C0)
#define CLASS_3_99D8454F8E5AD48B__CTOR_OFFSET UNITYSDK_OFFSET(0x141A33E0)

inline static constexpr unsigned int Class_3_99D8454F8E5AD48B_TypeDefinitionIndex = 51751;

class Class_3_99D8454F8E5AD48B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByBPChange*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBPChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBPChange*))((::PBYTE)hIl2Cpp + CLASS_3_99D8454F8E5AD48B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99D8454F8E5AD48B_ONTASKBEGIN_OFFSET))(this);
	}
};
