#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_CARDFACTORY_CREATECARDCONFIGS_OFFSET UNITYSDK_OFFSET(0xB5A71D0)
#define RPG_CLIENT_CHENLINGBATTLE_CARDFACTORY_CREATECARDCONFIG_OFFSET UNITYSDK_OFFSET(0xB5A7180)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int CardFactory_TypeDefinitionIndex = 70797;

	class CardFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingBattle::CardConfig* CreateCardConfig(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::ChenLingBattle::CardConfig*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDFACTORY_CREATECARDCONFIG_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* CreateCardConfigs(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDFACTORY_CREATECARDCONFIGS_OFFSET))(a1);
		}
	};
}
