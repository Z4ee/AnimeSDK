#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MusicVisualizeSourceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PAUSEMUSICVISUALEFFECT_METHOD_3_4EC5421605E31908_OFFSET UNITYSDK_OFFSET(0x1BB12B60)
#define RPG_GAMECORE_PAUSEMUSICVISUALEFFECT_METHOD_3_5455548857FFD59E_OFFSET UNITYSDK_OFFSET(0x1BB12BE0)
#define RPG_GAMECORE_PAUSEMUSICVISUALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB12BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseMusicVisualEffect_TypeDefinitionIndex = 21501;

	class PauseMusicVisualEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MusicVisualizeSourceType SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEMUSICVISUALEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4EC5421605E31908(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseMusicVisualEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseMusicVisualEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEMUSICVISUALEFFECT_METHOD_3_4EC5421605E31908_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5455548857FFD59E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseMusicVisualEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseMusicVisualEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEMUSICVISUALEFFECT_METHOD_3_5455548857FFD59E_OFFSET))(a1, a2);
		}
	};
}
