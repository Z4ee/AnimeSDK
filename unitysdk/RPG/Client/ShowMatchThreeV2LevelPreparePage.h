#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE_METHOD_3_ED37FBCAE66DFCFB_OFFSET UNITYSDK_OFFSET(0x1D320900)
#define RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE_METHOD_3_F4F121E010CEEA18_OFFSET UNITYSDK_OFFSET(0x1D3208C0)
#define RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3208F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ShowMatchThreeV2LevelPreparePage_TypeDefinitionIndex = 10241;

	class ShowMatchThreeV2LevelPreparePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 levelID; // 0x18
		::System::Boolean isShowWinResultPage; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F4F121E010CEEA18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ShowMatchThreeV2LevelPreparePage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ShowMatchThreeV2LevelPreparePage*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE_METHOD_3_F4F121E010CEEA18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED37FBCAE66DFCFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ShowMatchThreeV2LevelPreparePage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ShowMatchThreeV2LevelPreparePage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE_METHOD_3_ED37FBCAE66DFCFB_OFFSET))(a1, a2);
		}
	};
}
