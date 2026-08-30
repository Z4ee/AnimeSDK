#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_8;
namespace RPG::Client { class RelicItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_RELICITEMDATA___C__DISPLAYCLASS93_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B66A3A0)
#define RPG_CLIENT_RELICITEMDATA___C__DISPLAYCLASS93_0___SORTREFORGESUBAFFIXES_B__0_OFFSET UNITYSDK_OFFSET(0x1B66A440)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicItemData___c__DisplayClass93_0_TypeDefinitionIndex = 66882;

	class RelicItemData___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::RPG::Client::RelicItemData* __4__this; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::Int32>* indexOf; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA___C__DISPLAYCLASS93_0__CTOR_OFFSET))(this);
		}

		::System::Int32 __SortReforgeSubAffixes_b__0(::Class_1_D17272E82AE804C2_8* a1, ::Class_1_D17272E82AE804C2_8* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_D17272E82AE804C2_8*, ::Class_1_D17272E82AE804C2_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA___C__DISPLAYCLASS93_0___SORTREFORGESUBAFFIXES_B__0_OFFSET))(this, a1, a2);
		}
	};
}
