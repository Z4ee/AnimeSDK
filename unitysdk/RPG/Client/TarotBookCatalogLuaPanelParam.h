#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletLuaPanelParam.h"

#define RPG_CLIENT_TAROTBOOKCATALOGLUAPANELPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xE1AD6A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookCatalogLuaPanelParam_TypeDefinitionIndex = 72463;

	class TarotBookCatalogLuaPanelParam : public ::RPG::Client::BookletLuaPanelParam
	{
	public:
		::System::Int32 EndIndex; // 0x30
		::System::Int32 BeginIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCATALOGLUAPANELPARAM__CTOR_OFFSET))(this);
		}
	};
}
