#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION_METHOD_5_6FC228BE0CC82B93_OFFSET UNITYSDK_OFFSET(0x173AD740)
#define RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION_METHOD_5_828AED4183A8B1AA_OFFSET UNITYSDK_OFFSET(0x173AD550)
#define RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x173AD6D0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int TrySkipTutorialAction_TypeDefinitionIndex = 22751;

	class TrySkipTutorialAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_828AED4183A8B1AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::TrySkipTutorialAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::TrySkipTutorialAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION_METHOD_5_828AED4183A8B1AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_6FC228BE0CC82B93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::TrySkipTutorialAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::TrySkipTutorialAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION_METHOD_5_6FC228BE0CC82B93_OFFSET))(a1, a2);
		}
	};
}
