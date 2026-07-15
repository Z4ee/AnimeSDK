#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MuseumPageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWMUSEUMPAGE_METHOD_3_A9CFDEDAE4423320_OFFSET UNITYSDK_OFFSET(0x1BE444F0)
#define RPG_GAMECORE_SHOWMUSEUMPAGE_METHOD_3_C8CC7FC604BF3B09_OFFSET UNITYSDK_OFFSET(0x1BE444B0)
#define RPG_GAMECORE_SHOWMUSEUMPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE444E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMuseumPage_TypeDefinitionIndex = 20117;

	class ShowMuseumPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MuseumPageType PageType; // 0x18
		::System::Boolean AutoOpenGamePlayUI; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMUSEUMPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C8CC7FC604BF3B09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMuseumPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMuseumPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMUSEUMPAGE_METHOD_3_C8CC7FC604BF3B09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A9CFDEDAE4423320(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMuseumPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMuseumPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMUSEUMPAGE_METHOD_3_A9CFDEDAE4423320_OFFSET))(a1, a2);
		}
	};
}
