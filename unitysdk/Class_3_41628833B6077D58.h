#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetFloorCustomFloat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_41628833B6077D58_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x185F1570)
#define CLASS_3_41628833B6077D58__CTOR_OFFSET UNITYSDK_OFFSET(0x185F1540)

inline static constexpr unsigned int Class_3_41628833B6077D58_TypeDefinitionIndex = 53489;

class Class_3_41628833B6077D58 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetFloorCustomFloat*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFloorCustomFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFloorCustomFloat*))((::PBYTE)hIl2Cpp + CLASS_3_41628833B6077D58__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41628833B6077D58_ONTASKBEGIN_OFFSET))(this);
	}
};
