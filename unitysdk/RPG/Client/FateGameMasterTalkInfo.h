#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameMasterTalkRandomContext.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateGameMasterTalkInfoItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEMASTERTALKINFO_GETRANDOMITEM_OFFSET UNITYSDK_OFFSET(0xA346390)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFO_GET_MAXTALKCOUNTINOVERVIEWPAGE_OFFSET UNITYSDK_OFFSET(0xA346B00)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA33BD20)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA33BAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterTalkInfo_TypeDefinitionIndex = 58970;

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

		::RPG::Client::FateGameMasterTalkInfoItem* GetRandomItem(::RPG::Client::FateGameMasterTalkRandomContext ctx)
		{
			return ((::RPG::Client::FateGameMasterTalkInfoItem*(*)(::PVOID, ::RPG::Client::FateGameMasterTalkRandomContext))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFO_GETRANDOMITEM_OFFSET))(this, ctx);
		}

		static ::System::UInt32 get_MaxTalkCountInOverviewPage()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFO_GET_MAXTALKCOUNTINOVERVIEWPAGE_OFFSET))();
		}
	};
}
