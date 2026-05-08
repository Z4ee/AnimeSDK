#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GROUPPREDICATE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x7A7850)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int GroupPredicate_TypeDefinitionIndex = 65000;

	struct alignas(4) GroupPredicate
	{
		::System::Boolean EnableAngleConstraint; // 0x10
		::UnityEngine::Vector2 AngleConstraint; // 0x14
		::System::Boolean EnableDistanceConstraint; // 0x1C
		::UnityEngine::Vector2 DistanceConstraint; // 0x20

		::System::Boolean IsMatch(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GROUPPREDICATE_ISMATCH_OFFSET))(this, controller);
		}
	};
}
