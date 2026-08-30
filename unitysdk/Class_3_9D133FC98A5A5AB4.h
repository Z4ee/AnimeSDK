#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ActiveFarmElement; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9D133FC98A5A5AB4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB49FA50)
#define CLASS_3_9D133FC98A5A5AB4__CTOR_OFFSET UNITYSDK_OFFSET(0xB49FA20)

inline static constexpr unsigned int Class_3_9D133FC98A5A5AB4_TypeDefinitionIndex = 56057;

class Class_3_9D133FC98A5A5AB4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ActiveFarmElement*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveFarmElement* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveFarmElement*))((::PBYTE)hIl2Cpp + CLASS_3_9D133FC98A5A5AB4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D133FC98A5A5AB4_ONTASKBEGIN_OFFSET))(this);
	}
};
