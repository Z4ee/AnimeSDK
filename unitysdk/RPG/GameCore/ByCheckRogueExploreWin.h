#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_METHOD_4_1A712FF116335065_OFFSET UNITYSDK_OFFSET(0x18724BE0)
#define RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_METHOD_4_71C4263E1613F38F_OFFSET UNITYSDK_OFFSET(0x18724CB0)
#define RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN__CTOR_OFFSET UNITYSDK_OFFSET(0x18724C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckRogueExploreWin_TypeDefinitionIndex = 20538;

	class ByCheckRogueExploreWin : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1A712FF116335065(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckRogueExploreWin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckRogueExploreWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_METHOD_4_1A712FF116335065_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_71C4263E1613F38F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckRogueExploreWin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckRogueExploreWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_METHOD_4_71C4263E1613F38F_OFFSET))(a1, a2);
		}
	};
}
