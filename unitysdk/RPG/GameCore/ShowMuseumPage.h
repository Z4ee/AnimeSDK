#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MuseumPageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWMUSEUMPAGE_METHOD_3_9A341CBEC3616DAF_OFFSET UNITYSDK_OFFSET(0x19C802E0)
#define RPG_GAMECORE_SHOWMUSEUMPAGE_METHOD_3_A9CFDEDAE4423320_OFFSET UNITYSDK_OFFSET(0x19C80360)
#define RPG_GAMECORE_SHOWMUSEUMPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C80330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMuseumPage_TypeDefinitionIndex = 19757;

	class ShowMuseumPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MuseumPageType PageType; // 0x18
		::System::Boolean AutoOpenGamePlayUI; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMUSEUMPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9A341CBEC3616DAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMuseumPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMuseumPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMUSEUMPAGE_METHOD_3_9A341CBEC3616DAF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A9CFDEDAE4423320(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMuseumPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMuseumPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMUSEUMPAGE_METHOD_3_A9CFDEDAE4423320_OFFSET))(a1, a2);
		}
	};
}
