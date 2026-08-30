#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OVERRIDEENTITYMODIFIERPHASECAMERA_METHOD_3_74266A52876FB789_OFFSET UNITYSDK_OFFSET(0x1D303680)
#define RPG_GAMECORE_OVERRIDEENTITYMODIFIERPHASECAMERA_METHOD_3_A0B635BB06962EE4_OFFSET UNITYSDK_OFFSET(0x1D303630)
#define RPG_GAMECORE_OVERRIDEENTITYMODIFIERPHASECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D303670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideEntityModifierPhaseCamera_TypeDefinitionIndex = 22506;

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

		static ::System::Void Method_3_A0B635BB06962EE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideEntityModifierPhaseCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideEntityModifierPhaseCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENTITYMODIFIERPHASECAMERA_METHOD_3_A0B635BB06962EE4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_74266A52876FB789(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideEntityModifierPhaseCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideEntityModifierPhaseCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENTITYMODIFIERPHASECAMERA_METHOD_3_74266A52876FB789_OFFSET))(a1, a2);
		}
	};
}
