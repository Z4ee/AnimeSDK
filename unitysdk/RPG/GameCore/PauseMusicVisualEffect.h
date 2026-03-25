#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MusicVisualizeSourceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PAUSEMUSICVISUALEFFECT_METHOD_3_14E44F1002B830BE_OFFSET UNITYSDK_OFFSET(0x1748E9D0)
#define RPG_GAMECORE_PAUSEMUSICVISUALEFFECT_METHOD_3_5455548857FFD59E_OFFSET UNITYSDK_OFFSET(0x1748EB20)
#define RPG_GAMECORE_PAUSEMUSICVISUALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1748EA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseMusicVisualEffect_TypeDefinitionIndex = 20507;

	class PauseMusicVisualEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MusicVisualizeSourceType SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEMUSICVISUALEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_14E44F1002B830BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseMusicVisualEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseMusicVisualEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEMUSICVISUALEFFECT_METHOD_3_14E44F1002B830BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5455548857FFD59E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseMusicVisualEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseMusicVisualEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEMUSICVISUALEFFECT_METHOD_3_5455548857FFD59E_OFFSET))(a1, a2);
		}
	};
}
