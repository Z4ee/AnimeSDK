#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAdvEffectForceField; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F2791F9A09F58BAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C9FD40)
#define CLASS_3_F2791F9A09F58BAA__CTOR_OFFSET UNITYSDK_OFFSET(0x8C9FD10)

inline static constexpr unsigned int Class_3_F2791F9A09F58BAA_TypeDefinitionIndex = 44311;

class Class_3_F2791F9A09F58BAA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAdvEffectForceField*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAdvEffectForceField* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAdvEffectForceField*))((::PBYTE)hIl2Cpp + CLASS_3_F2791F9A09F58BAA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2791F9A09F58BAA_ONTASKBEGIN_OFFSET))(this);
	}
};
