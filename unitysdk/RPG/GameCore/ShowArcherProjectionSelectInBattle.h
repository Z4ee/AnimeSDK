#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateHouguType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWARCHERPROJECTIONSELECTINBATTLE_METHOD_3_A245E9EC227491E2_OFFSET UNITYSDK_OFFSET(0x1E0A21D0)
#define RPG_GAMECORE_SHOWARCHERPROJECTIONSELECTINBATTLE_METHOD_3_F22454B377229371_OFFSET UNITYSDK_OFFSET(0x1E0A2210)
#define RPG_GAMECORE_SHOWARCHERPROJECTIONSELECTINBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A2200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowArcherProjectionSelectInBattle_TypeDefinitionIndex = 23025;

	class ShowArcherProjectionSelectInBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FateHouguType HouguType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWARCHERPROJECTIONSELECTINBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A245E9EC227491E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowArcherProjectionSelectInBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowArcherProjectionSelectInBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWARCHERPROJECTIONSELECTINBATTLE_METHOD_3_A245E9EC227491E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F22454B377229371(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowArcherProjectionSelectInBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowArcherProjectionSelectInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWARCHERPROJECTIONSELECTINBATTLE_METHOD_3_F22454B377229371_OFFSET))(a1, a2);
		}
	};
}
