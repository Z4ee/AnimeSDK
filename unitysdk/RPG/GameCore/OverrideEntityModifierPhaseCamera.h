#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OVERRIDEENTITYMODIFIERPHASECAMERA_METHOD_3_0505474B812367DA_OFFSET UNITYSDK_OFFSET(0x18BCBC30)
#define RPG_GAMECORE_OVERRIDEENTITYMODIFIERPHASECAMERA_METHOD_3_A28636602C5A9B6D_OFFSET UNITYSDK_OFFSET(0x18BCBBB0)
#define RPG_GAMECORE_OVERRIDEENTITYMODIFIERPHASECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCBC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideEntityModifierPhaseCamera_TypeDefinitionIndex = 21666;

	class OverrideEntityModifierPhaseCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PerformSequence; // 0x20
		::System::Boolean Override; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENTITYMODIFIERPHASECAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A28636602C5A9B6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideEntityModifierPhaseCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideEntityModifierPhaseCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENTITYMODIFIERPHASECAMERA_METHOD_3_A28636602C5A9B6D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0505474B812367DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideEntityModifierPhaseCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideEntityModifierPhaseCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENTITYMODIFIERPHASECAMERA_METHOD_3_0505474B812367DA_OFFSET))(a1, a2);
		}
	};
}
