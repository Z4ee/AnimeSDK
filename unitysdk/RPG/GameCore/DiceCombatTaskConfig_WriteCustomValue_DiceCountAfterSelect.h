#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/DiceCountAfterSelectInputType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_DICECOUNTAFTERSELECT_METHOD_3_5C376F6B3FAA3170_OFFSET UNITYSDK_OFFSET(0x1DB08470)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_DICECOUNTAFTERSELECT_METHOD_3_CD178A3C084A8EA6_OFFSET UNITYSDK_OFFSET(0x1DB08410)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_DICECOUNTAFTERSELECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB08460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect_TypeDefinitionIndex = 15904;

	class DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget WriteTarget; // 0x10
		::RPG::GameCore::DiceCombatTarget ReadTarget; // 0x14
		::System::String* Name; // 0x18
		::RPG::GameCore::DiceCountAfterSelectInputType Input; // 0x20
		::RPG::GameCore::DiceCombatDiceSelectorConfig* Selector; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_DICECOUNTAFTERSELECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD178A3C084A8EA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_DICECOUNTAFTERSELECT_METHOD_3_CD178A3C084A8EA6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5C376F6B3FAA3170(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_DICECOUNTAFTERSELECT_METHOD_3_5C376F6B3FAA3170_OFFSET))(a1, a2);
		}
	};
}
