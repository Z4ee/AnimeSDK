#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_CARDFACTORY_CREATECARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x9F8CA40)
#define RPG_CLIENT_CHENLINGBATTLE_CARDFACTORY_CREATECARDCONFIG_OFFSET UNITYSDK_OFFSET(0x9F8C9F0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int CardFactory_TypeDefinitionIndex = 69985;

	class CardFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingBattle::CardConfig* CreateCardConfig(::System::UInt32 id, ::System::Int32 index)
		{
			return ((::RPG::Client::ChenLingBattle::CardConfig*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDFACTORY_CREATECARDCONFIG_OFFSET))(id, index);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* CreateCardConfigs(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* ids)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDFACTORY_CREATECARDCONFIGS_OFFSET))(ids);
		}
	};
}
