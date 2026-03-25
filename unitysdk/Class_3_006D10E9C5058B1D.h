#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerHitTarget; }

#define CLASS_3_006D10E9C5058B1D_METHOD_3_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x89E0280)
#define CLASS_3_006D10E9C5058B1D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89E0230)
#define CLASS_3_006D10E9C5058B1D__CTOR_OFFSET UNITYSDK_OFFSET(0x89E0200)

inline static constexpr unsigned int Class_3_006D10E9C5058B1D_TypeDefinitionIndex = 47466;

class Class_3_006D10E9C5058B1D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerHitTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerHitTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerHitTarget*))((::PBYTE)hIl2Cpp + CLASS_3_006D10E9C5058B1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_006D10E9C5058B1D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_006D10E9C5058B1D_METHOD_3_D9EF75A2D048B8A1_OFFSET))(this);
	}
};
