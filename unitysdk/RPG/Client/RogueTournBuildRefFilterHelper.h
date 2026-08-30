#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFFILTERHELPER_FILTER_OFFSET UNITYSDK_OFFSET(0x1AEF3600)
#define RPG_CLIENT_ROGUETOURNBUILDREFFILTERHELPER__ISMATCHANYAVATAR_OFFSET UNITYSDK_OFFSET(0x1AEF3A40)
#define RPG_CLIENT_ROGUETOURNBUILDREFFILTERHELPER__ISMATCHANYFORMULA_OFFSET UNITYSDK_OFFSET(0x1AEF4570)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefFilterHelper_TypeDefinitionIndex = 67523;

	class RogueTournBuildRefFilterHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournBuildRefDataItem*>* Filter(::System::Collections::Generic::List_1<::RPG::Client::IRogueTournBuildRefDataItem*>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournBuildRefDataItem*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::IRogueTournBuildRefDataItem*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFFILTERHELPER_FILTER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean _IsMatchAnyAvatar(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFFILTERHELPER__ISMATCHANYAVATAR_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsMatchAnyFormula(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFFILTERHELPER__ISMATCHANYFORMULA_OFFSET))(a1, a2);
		}
	};
}
