#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class RtSetDynamicValueByProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3A1640DAD6A45634_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB75E170)
#define CLASS_3_3A1640DAD6A45634__CTOR_OFFSET UNITYSDK_OFFSET(0xB75E090)

inline static constexpr unsigned int Class_3_3A1640DAD6A45634_TypeDefinitionIndex = 54130;

class Class_3_3A1640DAD6A45634 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtSetDynamicValueByProperty*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSetDynamicValueByProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSetDynamicValueByProperty*))((::PBYTE)hIl2Cpp + CLASS_3_3A1640DAD6A45634__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A1640DAD6A45634_ONTASKBEGIN_OFFSET))(this);
	}
};
