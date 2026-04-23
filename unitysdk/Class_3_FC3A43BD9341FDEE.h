#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetModifierOverrideNameForStatus; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_FC3A43BD9341FDEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9788C70)
#define CLASS_3_FC3A43BD9341FDEE__CTOR_OFFSET UNITYSDK_OFFSET(0x9788C40)
#define CLASS_3_FC3A43BD9341FDEE__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x9788E60)
#define CLASS_3_FC3A43BD9341FDEE__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x9788EC0)

inline static constexpr unsigned int Class_3_FC3A43BD9341FDEE_TypeDefinitionIndex = 51199;

class Class_3_FC3A43BD9341FDEE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetModifierOverrideNameForStatus*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetModifierOverrideNameForStatus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetModifierOverrideNameForStatus*))((::PBYTE)hIl2Cpp + CLASS_3_FC3A43BD9341FDEE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC3A43BD9341FDEE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0(::RPG::GameCore::TurnBasedModifierInstance* pTargetModifier)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_FC3A43BD9341FDEE__ONTASKBEGIN_B__1_0_OFFSET))(this, pTargetModifier);
	}

	::System::Boolean _OnTaskBegin_b__1_1(::RPG::GameCore::TurnBasedModifierInstance* pModifier)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_FC3A43BD9341FDEE__ONTASKBEGIN_B__1_1_OFFSET))(this, pModifier);
	}
};
