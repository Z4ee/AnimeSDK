#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvSupportedColliderLayer.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE_METHOD_3_3D94D69EC2B566CB_OFFSET UNITYSDK_OFFSET(0x18662390)
#define RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE_METHOD_3_E8A9039E776AE8FA_OFFSET UNITYSDK_OFFSET(0x18662410)
#define RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x186623E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetColliderLayerState_TypeDefinitionIndex = 19496;

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

		static ::System::Void Method_3_3D94D69EC2B566CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetColliderLayerState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetColliderLayerState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE_METHOD_3_3D94D69EC2B566CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E8A9039E776AE8FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetColliderLayerState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetColliderLayerState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE_METHOD_3_E8A9039E776AE8FA_OFFSET))(a1, a2);
		}
	};
}
