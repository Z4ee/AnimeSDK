#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE_METHOD_3_7D5A9D8938B0BA9D_OFFSET UNITYSDK_OFFSET(0x16E8DBE0)
#define RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE_METHOD_3_ED37FBCAE66DFCFB_OFFSET UNITYSDK_OFFSET(0x16E8DC60)
#define RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8DC30)

namespace RPG::Client
{
	inline static constexpr unsigned int ShowMatchThreeV2LevelPreparePage_TypeDefinitionIndex = 9951;

	class ShowMatchThreeV2LevelPreparePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 levelID; // 0x18
		::System::Boolean isShowWinResultPage; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7D5A9D8938B0BA9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ShowMatchThreeV2LevelPreparePage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ShowMatchThreeV2LevelPreparePage*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE_METHOD_3_7D5A9D8938B0BA9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED37FBCAE66DFCFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ShowMatchThreeV2LevelPreparePage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ShowMatchThreeV2LevelPreparePage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE_METHOD_3_ED37FBCAE66DFCFB_OFFSET))(a1, a2);
		}
	};
}
