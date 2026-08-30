#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class RtSetDynamicValueByDamageDataProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5794F2C7391773D9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F95E90)
#define CLASS_3_5794F2C7391773D9__CTOR_OFFSET UNITYSDK_OFFSET(0x17F95DB0)

inline static constexpr unsigned int Class_3_5794F2C7391773D9_TypeDefinitionIndex = 54079;

class Class_3_5794F2C7391773D9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtSetDynamicValueByDamageDataProperty*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSetDynamicValueByDamageDataProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSetDynamicValueByDamageDataProperty*))((::PBYTE)hIl2Cpp + CLASS_3_5794F2C7391773D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5794F2C7391773D9_ONTASKBEGIN_OFFSET))(this);
	}
};
