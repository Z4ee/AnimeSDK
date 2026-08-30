#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByBossLeftHP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_641B5734853F990E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1874A2A0)
#define CLASS_3_641B5734853F990E__CTOR_OFFSET UNITYSDK_OFFSET(0x1874A1C0)

inline static constexpr unsigned int Class_3_641B5734853F990E_TypeDefinitionIndex = 55608;

class Class_3_641B5734853F990E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByBossLeftHP*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBossLeftHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBossLeftHP*))((::PBYTE)hIl2Cpp + CLASS_3_641B5734853F990E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_641B5734853F990E_ONTASKBEGIN_OFFSET))(this);
	}
};
