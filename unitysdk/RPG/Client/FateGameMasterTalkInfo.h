#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameMasterTalkRandomContext.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateGameMasterTalkInfoItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEMASTERTALKINFO_GETRANDOMITEM_OFFSET UNITYSDK_OFFSET(0xB996C80)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFO_GET_MAXTALKCOUNTINOVERVIEWPAGE_OFFSET UNITYSDK_OFFSET(0xB9974D0)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB98D220)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB98D0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterTalkInfo_TypeDefinitionIndex = 59900;

	class FateGameMasterTalkInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterTalkInfoItem*>* _AllTalkItems; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFO_INIT_OFFSET))(this);
		}

		::RPG::Client::FateGameMasterTalkInfoItem* GetRandomItem(::RPG::Client::FateGameMasterTalkRandomContext a1)
		{
			return ((::RPG::Client::FateGameMasterTalkInfoItem*(*)(::PVOID, ::RPG::Client::FateGameMasterTalkRandomContext))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFO_GETRANDOMITEM_OFFSET))(this, a1);
		}

		static ::System::UInt32 get_MaxTalkCountInOverviewPage()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFO_GET_MAXTALKCOUNTINOVERVIEWPAGE_OFFSET))();
		}
	};
}
