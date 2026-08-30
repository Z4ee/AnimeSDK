#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITEXTRACOLORDICE_METHOD_3_A0C11C1732EA7698_OFFSET UNITYSDK_OFFSET(0x1D035C30)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITEXTRACOLORDICE_METHOD_3_AF8F5068FF3E16FD_OFFSET UNITYSDK_OFFSET(0x1D035CD0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITEXTRACOLORDICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D035CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_InitExtraColorDice_TypeDefinitionIndex = 15883;

	class DiceCombatTaskConfig_InitExtraColorDice : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITEXTRACOLORDICE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A0C11C1732EA7698(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITEXTRACOLORDICE_METHOD_3_A0C11C1732EA7698_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AF8F5068FF3E16FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITEXTRACOLORDICE_METHOD_3_AF8F5068FF3E16FD_OFFSET))(a1, a2);
		}
	};
}
