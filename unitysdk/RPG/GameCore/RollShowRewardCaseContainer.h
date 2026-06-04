#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"
#include "unitysdk/RPG/GameCore/RollShopGroupType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_METHOD_3_52FB1D9A7A652577_OFFSET UNITYSDK_OFFSET(0x19BD4E60)
#define RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_METHOD_3_F0D40FCA4FC60460_OFFSET UNITYSDK_OFFSET(0x19BD4EA0)
#define RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD4E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollShowRewardCaseContainer_TypeDefinitionIndex = 16677;

	class RollShowRewardCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::RPG::GameCore::RollShopGroupType Case; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_52FB1D9A7A652577(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RollShowRewardCaseContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RollShowRewardCaseContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_METHOD_3_52FB1D9A7A652577_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F0D40FCA4FC60460(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RollShowRewardCaseContainer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RollShowRewardCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_METHOD_3_F0D40FCA4FC60460_OFFSET))(a1, a2);
		}
	};
}
