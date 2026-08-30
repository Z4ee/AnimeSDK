#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETAUTOBLINKMASKRENDERER_METHOD_3_5503BD60F43F3A3D_OFFSET UNITYSDK_OFFSET(0x1D4E1980)
#define RPG_GAMECORE_SETAUTOBLINKMASKRENDERER_METHOD_3_BA9058F6829AEB42_OFFSET UNITYSDK_OFFSET(0x1D4E19C0)
#define RPG_GAMECORE_SETAUTOBLINKMASKRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E19B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAutoBlinkMaskRenderer_TypeDefinitionIndex = 22130;

	class SetAutoBlinkMaskRenderer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* MaskPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUTOBLINKMASKRENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5503BD60F43F3A3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAutoBlinkMaskRenderer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAutoBlinkMaskRenderer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUTOBLINKMASKRENDERER_METHOD_3_5503BD60F43F3A3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BA9058F6829AEB42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAutoBlinkMaskRenderer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAutoBlinkMaskRenderer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUTOBLINKMASKRENDERER_METHOD_3_BA9058F6829AEB42_OFFSET))(a1, a2);
		}
	};
}
