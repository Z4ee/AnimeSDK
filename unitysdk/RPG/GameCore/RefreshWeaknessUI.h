#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REFRESHWEAKNESSUI_METHOD_3_329CFA51C5BE3741_OFFSET UNITYSDK_OFFSET(0x18C95C00)
#define RPG_GAMECORE_REFRESHWEAKNESSUI_METHOD_3_65056DCE3EDCEBA8_OFFSET UNITYSDK_OFFSET(0x18C95C80)
#define RPG_GAMECORE_REFRESHWEAKNESSUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18C95C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshWeaknessUI_TypeDefinitionIndex = 21523;

	class RefreshWeaknessUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHWEAKNESSUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_329CFA51C5BE3741(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshWeaknessUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshWeaknessUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHWEAKNESSUI_METHOD_3_329CFA51C5BE3741_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_65056DCE3EDCEBA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshWeaknessUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshWeaknessUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHWEAKNESSUI_METHOD_3_65056DCE3EDCEBA8_OFFSET))(a1, a2);
		}
	};
}
