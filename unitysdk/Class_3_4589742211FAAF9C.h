#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RoadRashGameAbility_Slam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4589742211FAAF9C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164AB0A0)
#define CLASS_3_4589742211FAAF9C__CTOR_OFFSET UNITYSDK_OFFSET(0x164AB070)

inline static constexpr unsigned int Class_3_4589742211FAAF9C_TypeDefinitionIndex = 58558;

class Class_3_4589742211FAAF9C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::RoadRashGameAbility_Slam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_Slam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_Slam*))((::PBYTE)hIl2Cpp + CLASS_3_4589742211FAAF9C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4589742211FAAF9C_ONTASKBEGIN_OFFSET))(this);
	}
};
