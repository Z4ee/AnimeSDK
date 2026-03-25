#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameMasterTalkRandomContext.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateGameMasterTalkInfo; }
namespace RPG::Client { class FateGameMasterTalkInfoItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT_GETRANDOMITEMSONOVERVIEWPAGE_OFFSET UNITYSDK_OFFSET(0x9687500)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT_ISPLAYERINVOLVED_OFFSET UNITYSDK_OFFSET(0x9687210)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterTalkInfoExt_TypeDefinitionIndex = 52022;

	class FateGameMasterTalkInfoExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsPlayerInvolved(::RPG::Client::FateGameMasterTalkInfoItem* masterTalkItem)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateGameMasterTalkInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT_ISPLAYERINVOLVED_OFFSET))(masterTalkItem);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterTalkInfoItem*>* GetRandomItemsOnOverviewPage(::RPG::Client::FateGameMasterTalkInfo* masterTalkInfo, ::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterTalkRandomContext>* contexts)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterTalkInfoItem*>*(*)(::RPG::Client::FateGameMasterTalkInfo*, ::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterTalkRandomContext>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT_GETRANDOMITEMSONOVERVIEWPAGE_OFFSET))(masterTalkInfo, contexts);
		}
	};
}
