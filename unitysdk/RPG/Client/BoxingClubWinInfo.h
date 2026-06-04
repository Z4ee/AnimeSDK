#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOXINGCLUBWININFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB446330)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubWinInfo_TypeDefinitionIndex = 58907;

	class BoxingClubWinInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Rewards; // 0x10
		::System::UInt32 OldBestRecord; // 0x18
		::System::UInt32 CurrentRecord; // 0x1C
		::System::Boolean IsRewardTaken; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBWININFO__CTOR_OFFSET))(this);
		}
	};
}
