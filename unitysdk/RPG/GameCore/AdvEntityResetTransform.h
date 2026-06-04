#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYRESETTRANSFORM_METHOD_3_76976F8DC428D25C_OFFSET UNITYSDK_OFFSET(0x19423590)
#define RPG_GAMECORE_ADVENTITYRESETTRANSFORM_METHOD_3_D207189FDB92A915_OFFSET UNITYSDK_OFFSET(0x19423510)
#define RPG_GAMECORE_ADVENTITYRESETTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x19423560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityResetTransform_TypeDefinitionIndex = 19407;

	class AdvEntityResetTransform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ResetPosition; // 0x20
		::System::Boolean ResetRotation; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYRESETTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D207189FDB92A915(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityResetTransform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityResetTransform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYRESETTRANSFORM_METHOD_3_D207189FDB92A915_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76976F8DC428D25C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityResetTransform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityResetTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYRESETTRANSFORM_METHOD_3_76976F8DC428D25C_OFFSET))(a1, a2);
		}
	};
}
