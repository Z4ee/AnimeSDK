#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TarotBookPageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWTAROTBOOKPAGE_METHOD_3_8B56382252B76D47_OFFSET UNITYSDK_OFFSET(0x18E68EE0)
#define RPG_GAMECORE_SHOWTAROTBOOKPAGE_METHOD_3_DD85DD0C99BEA7FE_OFFSET UNITYSDK_OFFSET(0x18E68F60)
#define RPG_GAMECORE_SHOWTAROTBOOKPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E68F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTarotBookPage_TypeDefinitionIndex = 21231;

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

		static ::System::Void Method_3_8B56382252B76D47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTarotBookPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTarotBookPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTAROTBOOKPAGE_METHOD_3_8B56382252B76D47_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD85DD0C99BEA7FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTarotBookPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTarotBookPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTAROTBOOKPAGE_METHOD_3_DD85DD0C99BEA7FE_OFFSET))(a1, a2);
		}
	};
}
