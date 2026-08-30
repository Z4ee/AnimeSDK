#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REFRESHWEAKNESSUI_METHOD_3_171CC3E09D3D400B_OFFSET UNITYSDK_OFFSET(0x1D390A50)
#define RPG_GAMECORE_REFRESHWEAKNESSUI_METHOD_3_65056DCE3EDCEBA8_OFFSET UNITYSDK_OFFSET(0x1D390A90)
#define RPG_GAMECORE_REFRESHWEAKNESSUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D390A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshWeaknessUI_TypeDefinitionIndex = 22382;

	class RefreshWeaknessUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHWEAKNESSUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_171CC3E09D3D400B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshWeaknessUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshWeaknessUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHWEAKNESSUI_METHOD_3_171CC3E09D3D400B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_65056DCE3EDCEBA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshWeaknessUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshWeaknessUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHWEAKNESSUI_METHOD_3_65056DCE3EDCEBA8_OFFSET))(a1, a2);
		}
	};
}
