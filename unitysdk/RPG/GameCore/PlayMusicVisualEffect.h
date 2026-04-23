#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MusicVisualizeSourceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYMUSICVISUALEFFECT_METHOD_3_6CA89E29A255CA66_OFFSET UNITYSDK_OFFSET(0x18C0EE60)
#define RPG_GAMECORE_PLAYMUSICVISUALEFFECT_METHOD_3_B9304EAB23A1A936_OFFSET UNITYSDK_OFFSET(0x18C0EFB0)
#define RPG_GAMECORE_PLAYMUSICVISUALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0EF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMusicVisualEffect_TypeDefinitionIndex = 21189;

	class PlayMusicVisualEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MusicVisualizeSourceType SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICVISUALEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6CA89E29A255CA66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMusicVisualEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMusicVisualEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICVISUALEFFECT_METHOD_3_6CA89E29A255CA66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B9304EAB23A1A936(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMusicVisualEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMusicVisualEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICVISUALEFFECT_METHOD_3_B9304EAB23A1A936_OFFSET))(a1, a2);
		}
	};
}
