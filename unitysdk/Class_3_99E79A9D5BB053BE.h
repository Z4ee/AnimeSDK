#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByGridFightCustomProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_99E79A9D5BB053BE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9623C40)
#define CLASS_3_99E79A9D5BB053BE__CTOR_OFFSET UNITYSDK_OFFSET(0x9623B60)

inline static constexpr unsigned int Class_3_99E79A9D5BB053BE_TypeDefinitionIndex = 51111;

class Class_3_99E79A9D5BB053BE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByGridFightCustomProperty*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByGridFightCustomProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByGridFightCustomProperty*))((::PBYTE)hIl2Cpp + CLASS_3_99E79A9D5BB053BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E79A9D5BB053BE_ONTASKBEGIN_OFFSET))(this);
	}
};
