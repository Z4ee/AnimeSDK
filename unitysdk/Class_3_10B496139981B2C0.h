#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DeployPuzzleFadeout; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_10B496139981B2C0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA1B46E0)
#define CLASS_3_10B496139981B2C0__CTOR_OFFSET UNITYSDK_OFFSET(0xA1B46B0)

inline static constexpr unsigned int Class_3_10B496139981B2C0_TypeDefinitionIndex = 46843;

class Class_3_10B496139981B2C0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DeployPuzzleFadeout*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployPuzzleFadeout* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployPuzzleFadeout*))((::PBYTE)hIl2Cpp + CLASS_3_10B496139981B2C0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_10B496139981B2C0_ONTASKBEGIN_OFFSET))(this);
	}
};
