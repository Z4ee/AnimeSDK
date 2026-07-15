#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNENTRANCESHOWUI_METHOD_3_69C89C12D29C0E41_OFFSET UNITYSDK_OFFSET(0x1BB749C0)
#define RPG_GAMECORE_ROGUETOURNENTRANCESHOWUI_METHOD_3_88B4ADEB2BD3E6C4_OFFSET UNITYSDK_OFFSET(0x1BB74A90)
#define RPG_GAMECORE_ROGUETOURNENTRANCESHOWUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB74A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournEntranceShowUI_TypeDefinitionIndex = 21289;

	class RogueTournEntranceShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNENTRANCESHOWUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_69C89C12D29C0E41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournEntranceShowUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournEntranceShowUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNENTRANCESHOWUI_METHOD_3_69C89C12D29C0E41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_88B4ADEB2BD3E6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournEntranceShowUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournEntranceShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNENTRANCESHOWUI_METHOD_3_88B4ADEB2BD3E6C4_OFFSET))(a1, a2);
		}
	};
}
