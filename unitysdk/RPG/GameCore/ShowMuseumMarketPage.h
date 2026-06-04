#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWMUSEUMMARKETPAGE_METHOD_3_117411F6DFC9CFDD_OFFSET UNITYSDK_OFFSET(0x19C80110)
#define RPG_GAMECORE_SHOWMUSEUMMARKETPAGE_METHOD_3_9AD77A45D6B6A711_OFFSET UNITYSDK_OFFSET(0x19C80220)
#define RPG_GAMECORE_SHOWMUSEUMMARKETPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C801F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMuseumMarketPage_TypeDefinitionIndex = 19758;

	class ShowMuseumMarketPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMUSEUMMARKETPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_117411F6DFC9CFDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMuseumMarketPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMuseumMarketPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMUSEUMMARKETPAGE_METHOD_3_117411F6DFC9CFDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9AD77A45D6B6A711(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMuseumMarketPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMuseumMarketPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMUSEUMMARKETPAGE_METHOD_3_9AD77A45D6B6A711_OFFSET))(a1, a2);
		}
	};
}
