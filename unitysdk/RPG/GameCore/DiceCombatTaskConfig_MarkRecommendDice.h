#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE_METHOD_3_6126108F28A381DF_OFFSET UNITYSDK_OFFSET(0x1DB05FC0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE_METHOD_3_FD7C2F4D18F7659D_OFFSET UNITYSDK_OFFSET(0x1DB06020)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB06010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_MarkRecommendDice_TypeDefinitionIndex = 15981;

	class DiceCombatTaskConfig_MarkRecommendDice : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig* Selector; // 0x10
		::System::String* IconPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6126108F28A381DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE_METHOD_3_6126108F28A381DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD7C2F4D18F7659D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE_METHOD_3_FD7C2F4D18F7659D_OFFSET))(a1, a2);
		}
	};
}
