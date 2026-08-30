#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MusicVisualizeSourceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYMUSICVISUALEFFECT_METHOD_3_B9304EAB23A1A936_OFFSET UNITYSDK_OFFSET(0x1D349990)
#define RPG_GAMECORE_PLAYMUSICVISUALEFFECT_METHOD_3_D82B8FE6BE772E60_OFFSET UNITYSDK_OFFSET(0x1D349910)
#define RPG_GAMECORE_PLAYMUSICVISUALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D349960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMusicVisualEffect_TypeDefinitionIndex = 22062;

	class PlayMusicVisualEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MusicVisualizeSourceType SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICVISUALEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D82B8FE6BE772E60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMusicVisualEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMusicVisualEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICVISUALEFFECT_METHOD_3_D82B8FE6BE772E60_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B9304EAB23A1A936(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMusicVisualEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMusicVisualEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICVISUALEFFECT_METHOD_3_B9304EAB23A1A936_OFFSET))(a1, a2);
		}
	};
}
