#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TarotBookPageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWTAROTBOOKPAGE_METHOD_3_CF90E17893922B9F_OFFSET UNITYSDK_OFFSET(0x1D09BE40)
#define RPG_GAMECORE_SHOWTAROTBOOKPAGE_METHOD_3_DD85DD0C99BEA7FE_OFFSET UNITYSDK_OFFSET(0x1D09BE80)
#define RPG_GAMECORE_SHOWTAROTBOOKPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D09BE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTarotBookPage_TypeDefinitionIndex = 22103;

	class ShowTarotBookPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TarotBookPageType PageType; // 0x18
		::System::UInt32 CharacterID; // 0x1C
		::System::Boolean IsCustomization; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTAROTBOOKPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CF90E17893922B9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTarotBookPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTarotBookPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTAROTBOOKPAGE_METHOD_3_CF90E17893922B9F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD85DD0C99BEA7FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTarotBookPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTarotBookPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTAROTBOOKPAGE_METHOD_3_DD85DD0C99BEA7FE_OFFSET))(a1, a2);
		}
	};
}
