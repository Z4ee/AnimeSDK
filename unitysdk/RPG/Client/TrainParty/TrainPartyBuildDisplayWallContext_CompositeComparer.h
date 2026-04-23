#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_COMPOSITECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xB33CB70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_COMPOSITECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xB33BF90)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDisplayWallContext_CompositeComparer_TypeDefinitionIndex = 68558;

	class TrainPartyBuildDisplayWallContext_CompositeComparer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Collections::Generic::IComparer_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*>* _Comparers; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Collections::Generic::IComparer_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*>* comparers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Collections::Generic::IComparer_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_COMPOSITECOMPARER__CTOR_OFFSET))(this, comparers);
		}

		::System::Int32 Compare(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemA, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_COMPOSITECOMPARER_COMPARE_OFFSET))(this, itemA, itemB);
		}
	};
}
