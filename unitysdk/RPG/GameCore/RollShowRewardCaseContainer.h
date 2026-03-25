#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"
#include "unitysdk/RPG/GameCore/RollShopGroupType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_METHOD_3_7F20F978AB2D3761_OFFSET UNITYSDK_OFFSET(0x17674090)
#define RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_METHOD_3_9B81F73072994B2A_OFFSET UNITYSDK_OFFSET(0x176740D0)
#define RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x176740C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollShowRewardCaseContainer_TypeDefinitionIndex = 16116;

	class RollShowRewardCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::RPG::GameCore::RollShopGroupType Case; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7F20F978AB2D3761(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RollShowRewardCaseContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RollShowRewardCaseContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_METHOD_3_7F20F978AB2D3761_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9B81F73072994B2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RollShowRewardCaseContainer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RollShowRewardCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_METHOD_3_9B81F73072994B2A_OFFSET))(a1, a2);
		}
	};
}
