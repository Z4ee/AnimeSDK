#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByIsInRotation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A9869C3C51614F83_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9622900)
#define CLASS_3_A9869C3C51614F83__CTOR_OFFSET UNITYSDK_OFFSET(0x96228D0)

inline static constexpr unsigned int Class_3_A9869C3C51614F83_TypeDefinitionIndex = 50243;

class Class_3_A9869C3C51614F83 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureByIsInRotation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsInRotation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsInRotation*))((::PBYTE)hIl2Cpp + CLASS_3_A9869C3C51614F83__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9869C3C51614F83_ONTASKBEGIN_OFFSET))(this);
	}
};
