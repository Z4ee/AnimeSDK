#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimAnimatorCullingMode.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION_METHOD_4_1588EA3A11345CFD_OFFSET UNITYSDK_OFFSET(0x1D6D8A80)
#define RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION_METHOD_4_C5BCE97E18F23CCE_OFFSET UNITYSDK_OFFSET(0x1D6D8AC0)
#define RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D8AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAnimatorCullingModeAction_TypeDefinitionIndex = 18707;

	class FiveDimSetAnimatorCullingModeAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimAnimatorCullingMode CullingMode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1588EA3A11345CFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION_METHOD_4_1588EA3A11345CFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C5BCE97E18F23CCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION_METHOD_4_C5BCE97E18F23CCE_OFFSET))(a1, a2);
		}
	};
}
