#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveAirline; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9B37D67D973B5B69_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96612C0)
#define CLASS_3_9B37D67D973B5B69__CTOR_OFFSET UNITYSDK_OFFSET(0x9661290)

inline static constexpr unsigned int Class_3_9B37D67D973B5B69_TypeDefinitionIndex = 53853;

class Class_3_9B37D67D973B5B69 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveAirline*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveAirline* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveAirline*))((::PBYTE)hIl2Cpp + CLASS_3_9B37D67D973B5B69__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B37D67D973B5B69_ONTASKBEGIN_OFFSET))(this);
	}
};
