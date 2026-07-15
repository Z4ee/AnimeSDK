#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_COMPOSITECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1A2AA160)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_COMPOSITECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2A9540)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDisplayWallContext_CompositeComparer_TypeDefinitionIndex = 70891;

	class TrainPartyBuildDisplayWallContext_CompositeComparer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Collections::Generic::IComparer_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*>* _Comparers; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Collections::Generic::IComparer_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Collections::Generic::IComparer_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_COMPOSITECOMPARER__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_COMPOSITECOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
