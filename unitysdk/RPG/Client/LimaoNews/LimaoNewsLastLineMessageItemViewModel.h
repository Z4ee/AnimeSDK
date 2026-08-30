#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsMessageItemViewModel.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLASTLINEMESSAGEITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD4643D0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsLastLineMessageItemViewModel_TypeDefinitionIndex = 79113;

	class LimaoNewsLastLineMessageItemViewModel : public ::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLASTLINEMESSAGEITEMVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
