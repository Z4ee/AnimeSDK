#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OptionTalkInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATOPTIONTALKINFO_METHOD_3_9E18120ABF9510E2_OFFSET UNITYSDK_OFFSET(0x171616D0)
#define RPG_GAMECORE_DICECOMBATOPTIONTALKINFO_METHOD_3_D29161959348A1DC_OFFSET UNITYSDK_OFFSET(0x17161630)
#define RPG_GAMECORE_DICECOMBATOPTIONTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17161690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatOptionTalkInfo_TypeDefinitionIndex = 19174;

	class DiceCombatOptionTalkInfo : public ::RPG::GameCore::OptionTalkInfo
	{
	public:
		::System::Boolean IsShowHardLevel; // 0x70
		::System::UInt32 StageID; // 0x74
		::System::Boolean IsForceShow; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATOPTIONTALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D29161959348A1DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatOptionTalkInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatOptionTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATOPTIONTALKINFO_METHOD_3_D29161959348A1DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E18120ABF9510E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatOptionTalkInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATOPTIONTALKINFO_METHOD_3_9E18120ABF9510E2_OFFSET))(a1, a2);
		}
	};
}
