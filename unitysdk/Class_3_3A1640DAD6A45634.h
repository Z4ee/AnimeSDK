#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class RtSetDynamicValueByProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3A1640DAD6A45634_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x98AD310)
#define CLASS_3_3A1640DAD6A45634__CTOR_OFFSET UNITYSDK_OFFSET(0x98AD230)

inline static constexpr unsigned int Class_3_3A1640DAD6A45634_TypeDefinitionIndex = 49697;

class Class_3_3A1640DAD6A45634 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtSetDynamicValueByProperty*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSetDynamicValueByProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSetDynamicValueByProperty*))((::PBYTE)hIl2Cpp + CLASS_3_3A1640DAD6A45634__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A1640DAD6A45634_ONTASKBEGIN_OFFSET))(this);
	}
};
