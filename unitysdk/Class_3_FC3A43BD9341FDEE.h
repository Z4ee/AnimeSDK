#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetModifierOverrideNameForStatus; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_FC3A43BD9341FDEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AE5190)
#define CLASS_3_FC3A43BD9341FDEE__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE5160)
#define CLASS_3_FC3A43BD9341FDEE__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x17AE53F0)
#define CLASS_3_FC3A43BD9341FDEE__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x17AE5450)

inline static constexpr unsigned int Class_3_FC3A43BD9341FDEE_TypeDefinitionIndex = 53023;

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

	::System::Void _OnTaskBegin_b__1_0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_FC3A43BD9341FDEE__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
	}

	::System::Boolean _OnTaskBegin_b__1_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_FC3A43BD9341FDEE__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
	}
};
