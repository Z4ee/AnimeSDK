#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvSupportedColliderLayer.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE_METHOD_3_165A2572D848379B_OFFSET UNITYSDK_OFFSET(0x1BE2C670)
#define RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE_METHOD_3_E8A9039E776AE8FA_OFFSET UNITYSDK_OFFSET(0x1BE2C6B0)
#define RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2C6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetColliderLayerState_TypeDefinitionIndex = 19749;

	class AdvSetColliderLayerState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AdvSupportedColliderLayer Layer; // 0x20
		::System::Boolean Enable; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_165A2572D848379B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetColliderLayerState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetColliderLayerState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE_METHOD_3_165A2572D848379B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E8A9039E776AE8FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetColliderLayerState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetColliderLayerState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE_METHOD_3_E8A9039E776AE8FA_OFFSET))(a1, a2);
		}
	};
}
