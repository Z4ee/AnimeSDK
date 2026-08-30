#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SLOTCOMPARERSELECTOR_GETCOMPARER_OFFSET UNITYSDK_OFFSET(0xE24D2F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SLOTCOMPARERSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE24D560)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDisplayWallContext_SlotComparerSelector_TypeDefinitionIndex = 74192;

	class TrainPartyBuildDisplayWallContext_SlotComparerSelector : public ::System::Object
	{
	public:
		::System::Collections::Generic::IComparer_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* _DefaultComparer; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Func_2<::System::Int32, ::System::Boolean>*, ::System::Collections::Generic::IComparer_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*>* _ComparerMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SLOTCOMPARERSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IComparer_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* GetComparer(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::IComparer_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SLOTCOMPARERSELECTOR_GETCOMPARER_OFFSET))(this, a1);
		}
	};
}
