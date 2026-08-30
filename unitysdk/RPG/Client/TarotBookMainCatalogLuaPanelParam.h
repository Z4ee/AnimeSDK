#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletLuaPanelParam.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTBOOKMAINCATALOGLUAPANELPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xE16FFA0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookMainCatalogLuaPanelParam_TypeDefinitionIndex = 72388;

	class TarotBookMainCatalogLuaPanelParam : public ::RPG::Client::BookletLuaPanelParam
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* SecondChapterIDs; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* FirstChapterIDs; // 0x38
		::System::UInt32 SpecialChapterID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAINCATALOGLUAPANELPARAM__CTOR_OFFSET))(this);
		}
	};
}
