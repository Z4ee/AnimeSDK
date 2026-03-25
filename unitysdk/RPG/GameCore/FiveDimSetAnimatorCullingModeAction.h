#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimAnimatorCullingMode.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION_METHOD_3_73283CE255FF5AAC_OFFSET UNITYSDK_OFFSET(0x17208B80)
#define RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION_METHOD_3_E094A7A25050DF63_OFFSET UNITYSDK_OFFSET(0x17208BF0)
#define RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17208BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAnimatorCullingModeAction_TypeDefinitionIndex = 17171;

	class FiveDimSetAnimatorCullingModeAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimAnimatorCullingMode CullingMode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_73283CE255FF5AAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION_METHOD_3_73283CE255FF5AAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E094A7A25050DF63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION_METHOD_3_E094A7A25050DF63_OFFSET))(a1, a2);
		}
	};
}
