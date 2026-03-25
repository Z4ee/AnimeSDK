#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETAUTOBLINKMASKRENDERER_METHOD_3_55B194CBAB7386A0_OFFSET UNITYSDK_OFFSET(0x176A7D20)
#define RPG_GAMECORE_SETAUTOBLINKMASKRENDERER_METHOD_3_BA9058F6829AEB42_OFFSET UNITYSDK_OFFSET(0x176A7DA0)
#define RPG_GAMECORE_SETAUTOBLINKMASKRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x176A7D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAutoBlinkMaskRenderer_TypeDefinitionIndex = 20575;

	class SetAutoBlinkMaskRenderer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* MaskPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUTOBLINKMASKRENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_55B194CBAB7386A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAutoBlinkMaskRenderer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAutoBlinkMaskRenderer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUTOBLINKMASKRENDERER_METHOD_3_55B194CBAB7386A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BA9058F6829AEB42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAutoBlinkMaskRenderer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAutoBlinkMaskRenderer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUTOBLINKMASKRENDERER_METHOD_3_BA9058F6829AEB42_OFFSET))(a1, a2);
		}
	};
}
