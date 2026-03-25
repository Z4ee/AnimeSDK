#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFFILTERHELPER_FILTER_OFFSET UNITYSDK_OFFSET(0xA36E440)
#define RPG_CLIENT_ROGUETOURNBUILDREFFILTERHELPER__ISMATCHANYAVATAR_OFFSET UNITYSDK_OFFSET(0xA36E880)
#define RPG_CLIENT_ROGUETOURNBUILDREFFILTERHELPER__ISMATCHANYFORMULA_OFFSET UNITYSDK_OFFSET(0xA36F100)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefFilterHelper_TypeDefinitionIndex = 55039;

	class RogueTournBuildRefFilterHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournBuildRefDataItem*>* Filter(::System::Collections::Generic::List_1<::RPG::Client::IRogueTournBuildRefDataItem*>* src, ::System::Collections::Generic::List_1<::System::UInt32>* filteredAvatarRealIDs, ::System::Collections::Generic::List_1<::System::UInt32>* filteredFormulaIDs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournBuildRefDataItem*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::IRogueTournBuildRefDataItem*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFFILTERHELPER_FILTER_OFFSET))(src, filteredAvatarRealIDs, filteredFormulaIDs);
		}

		static ::System::Boolean _IsMatchAnyAvatar(::RPG::Client::IRogueTournBuildRefDataItem* data, ::System::Collections::Generic::HashSet_1<::System::UInt32>* filteredAvatarRealIDs)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFFILTERHELPER__ISMATCHANYAVATAR_OFFSET))(data, filteredAvatarRealIDs);
		}

		static ::System::Boolean _IsMatchAnyFormula(::RPG::Client::IRogueTournBuildRefDataItem* data, ::System::Collections::Generic::HashSet_1<::System::UInt32>* filteredFormulas)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFFILTERHELPER__ISMATCHANYFORMULA_OFFSET))(data, filteredFormulas);
		}
	};
}
