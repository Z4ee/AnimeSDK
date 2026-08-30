#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameMasterTalkRandomContext.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateGameMasterTalkInfo; }
namespace RPG::Client { class FateGameMasterTalkInfoItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT_GETRANDOMITEMSONOVERVIEWPAGE_OFFSET UNITYSDK_OFFSET(0xCF475A0)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT_ISPLAYERINVOLVED_OFFSET UNITYSDK_OFFSET(0xCF47260)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterTalkInfoExt_TypeDefinitionIndex = 64167;

	class FateGameMasterTalkInfoExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsPlayerInvolved(::RPG::Client::FateGameMasterTalkInfoItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateGameMasterTalkInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT_ISPLAYERINVOLVED_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterTalkInfoItem*>* GetRandomItemsOnOverviewPage(::RPG::Client::FateGameMasterTalkInfo* a1, ::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterTalkRandomContext>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterTalkInfoItem*>*(*)(::RPG::Client::FateGameMasterTalkInfo*, ::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterTalkRandomContext>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT_GETRANDOMITEMSONOVERVIEWPAGE_OFFSET))(a1, a2);
		}
	};
}
