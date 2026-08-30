#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerHitTarget; }

#define CLASS_3_006D10E9C5058B1D_METHOD_3_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x16E95210)
#define CLASS_3_006D10E9C5058B1D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E951C0)
#define CLASS_3_006D10E9C5058B1D__CTOR_OFFSET UNITYSDK_OFFSET(0x16E95190)

inline static constexpr unsigned int Class_3_006D10E9C5058B1D_TypeDefinitionIndex = 58937;

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

	::System::Void Method_3_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_006D10E9C5058B1D_METHOD_3_66CC9828DB1F478F_OFFSET))(this);
	}
};
