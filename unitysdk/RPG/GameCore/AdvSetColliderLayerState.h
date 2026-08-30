#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvSupportedColliderLayer.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE_METHOD_3_1B911C777E38CE92_OFFSET UNITYSDK_OFFSET(0x1CBA0370)
#define RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE_METHOD_3_407073F459770643_OFFSET UNITYSDK_OFFSET(0x1CBA03B0)
#define RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA03A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetColliderLayerState_TypeDefinitionIndex = 20295;

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

		static ::System::Void Method_3_1B911C777E38CE92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetColliderLayerState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetColliderLayerState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE_METHOD_3_1B911C777E38CE92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_407073F459770643(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetColliderLayerState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetColliderLayerState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCOLLIDERLAYERSTATE_METHOD_3_407073F459770643_OFFSET))(a1, a2);
		}
	};
}
