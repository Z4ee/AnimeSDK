#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BattleSeekOnBGM; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FD40847A3F5274B7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A7FB80)
#define CLASS_3_FD40847A3F5274B7__CTOR_OFFSET UNITYSDK_OFFSET(0x8A7FB50)

inline static constexpr unsigned int Class_3_FD40847A3F5274B7_TypeDefinitionIndex = 46733;

class Class_3_FD40847A3F5274B7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BattleSeekOnBGM*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleSeekOnBGM* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleSeekOnBGM*))((::PBYTE)hIl2Cpp + CLASS_3_FD40847A3F5274B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD40847A3F5274B7_ONTASKBEGIN_OFFSET))(this);
	}
};
