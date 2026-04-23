#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETIRONTOMBINFINITYHPUI_METHOD_3_1C09C519A1986B3C_OFFSET UNITYSDK_OFFSET(0x18E35760)
#define RPG_GAMECORE_SETIRONTOMBINFINITYHPUI_METHOD_3_920BFCE4D43AD2AD_OFFSET UNITYSDK_OFFSET(0x18E357E0)
#define RPG_GAMECORE_SETIRONTOMBINFINITYHPUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18E357B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetIronTombInfinityHPUI_TypeDefinitionIndex = 22634;

	class SetIronTombInfinityHPUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShowInfinityHP; // 0x18
		::System::Boolean PlayInfinityHPFadeIn; // 0x19
		::System::Boolean IsShowPluralityHP; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIRONTOMBINFINITYHPUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1C09C519A1986B3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetIronTombInfinityHPUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetIronTombInfinityHPUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIRONTOMBINFINITYHPUI_METHOD_3_1C09C519A1986B3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_920BFCE4D43AD2AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetIronTombInfinityHPUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetIronTombInfinityHPUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIRONTOMBINFINITYHPUI_METHOD_3_920BFCE4D43AD2AD_OFFSET))(a1, a2);
		}
	};
}
