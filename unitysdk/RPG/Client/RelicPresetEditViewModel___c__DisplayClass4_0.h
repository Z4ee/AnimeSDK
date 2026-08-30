#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicPresetEditViewModel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B671210)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL___C__DISPLAYCLASS4_0___SORTINVENTORYRELICITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x1B671530)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetEditViewModel___c__DisplayClass4_0_TypeDefinitionIndex = 66862;

	class RelicPresetEditViewModel___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* subPropertyMatchCount; // 0x10
		::RPG::Client::RelicPresetEditViewModel* __4__this; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* relicTypeMatchScore; // 0x20
		::RPG::Client::RelicItemData* planRelic; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Int32 __SortInventoryRelicItems_b__0(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL___C__DISPLAYCLASS4_0___SORTINVENTORYRELICITEMS_B__0_OFFSET))(this, a1, a2);
		}
	};
}
