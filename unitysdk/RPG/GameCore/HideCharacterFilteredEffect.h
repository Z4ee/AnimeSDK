#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FilterEffectType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT_METHOD_3_1E1F00CD27FEEA93_OFFSET UNITYSDK_OFFSET(0x1D3DEB80)
#define RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT_METHOD_3_622B2879EA125C02_OFFSET UNITYSDK_OFFSET(0x1D3DEB30)
#define RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3DEB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideCharacterFilteredEffect_TypeDefinitionIndex = 22864;

	class HideCharacterFilteredEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::FilterEffectType FilterType; // 0x20
		::System::Boolean AliveOnly; // 0x24
		::System::Boolean IsHide; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_622B2879EA125C02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideCharacterFilteredEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideCharacterFilteredEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT_METHOD_3_622B2879EA125C02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1E1F00CD27FEEA93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideCharacterFilteredEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideCharacterFilteredEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT_METHOD_3_1E1F00CD27FEEA93_OFFSET))(a1, a2);
		}
	};
}
