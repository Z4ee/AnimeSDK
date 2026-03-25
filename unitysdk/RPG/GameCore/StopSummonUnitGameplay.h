#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STOPSUMMONUNITGAMEPLAY_METHOD_3_328C5361A86B543E_OFFSET UNITYSDK_OFFSET(0x1777E5A0)
#define RPG_GAMECORE_STOPSUMMONUNITGAMEPLAY_METHOD_3_88EBF1531CEED2AF_OFFSET UNITYSDK_OFFSET(0x1777E620)
#define RPG_GAMECORE_STOPSUMMONUNITGAMEPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1777E5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopSummonUnitGameplay_TypeDefinitionIndex = 19462;

	class StopSummonUnitGameplay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ConfigName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSUMMONUNITGAMEPLAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_328C5361A86B543E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopSummonUnitGameplay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopSummonUnitGameplay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSUMMONUNITGAMEPLAY_METHOD_3_328C5361A86B543E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_88EBF1531CEED2AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopSummonUnitGameplay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopSummonUnitGameplay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSUMMONUNITGAMEPLAY_METHOD_3_88EBF1531CEED2AF_OFFSET))(a1, a2);
		}
	};
}
