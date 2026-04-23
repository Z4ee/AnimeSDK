#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FiveDimRemoveGlobalTimeScale; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A97B4D670BD633AE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9A44090)
#define CLASS_3_A97B4D670BD633AE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A44060)

inline static constexpr unsigned int Class_3_A97B4D670BD633AE_TypeDefinitionIndex = 48749;

class Class_3_A97B4D670BD633AE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::FiveDimRemoveGlobalTimeScale*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScale* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScale*))((::PBYTE)hIl2Cpp + CLASS_3_A97B4D670BD633AE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A97B4D670BD633AE_ONTASKBEGIN_OFFSET))(this);
	}
};
