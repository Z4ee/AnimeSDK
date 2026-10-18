#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMOVERRIDESIMPLEGAMELEVELTIPACTION_METHOD_4_3AA8C20C14DAD130_OFFSET UNITYSDK_OFFSET(0x1D6CF860)
#define RPG_GAMECORE_FIVEDIMOVERRIDESIMPLEGAMELEVELTIPACTION_METHOD_4_6F280A7CF5D767D9_OFFSET UNITYSDK_OFFSET(0x1D6CF8A0)
#define RPG_GAMECORE_FIVEDIMOVERRIDESIMPLEGAMELEVELTIPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CF890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimOverrideSimpleGameLevelTipAction_TypeDefinitionIndex = 18658;

	class FiveDimOverrideSimpleGameLevelTipAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsOverride; // 0x10
		::RPG::Client::TextID OverrideTextMapID; // 0x18
		::RPG::Client::TextID OverrideDescTextMapID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMOVERRIDESIMPLEGAMELEVELTIPACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3AA8C20C14DAD130(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMOVERRIDESIMPLEGAMELEVELTIPACTION_METHOD_4_3AA8C20C14DAD130_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F280A7CF5D767D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMOVERRIDESIMPLEGAMELEVELTIPACTION_METHOD_4_6F280A7CF5D767D9_OFFSET))(a1, a2);
		}
	};
}
