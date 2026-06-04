#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_1;
namespace RPG::Client { class RelicItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_RELICITEMDATA___C__DISPLAYCLASS87_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC6DD6D0)
#define RPG_CLIENT_RELICITEMDATA___C__DISPLAYCLASS87_0___SORTREFORGESUBAFFIXES_B__0_OFFSET UNITYSDK_OFFSET(0xC6DD770)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicItemData___c__DisplayClass87_0_TypeDefinitionIndex = 62524;

	class RelicItemData___c__DisplayClass87_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::Int32>* indexOf; // 0x10
		::RPG::Client::RelicItemData* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA___C__DISPLAYCLASS87_0__CTOR_OFFSET))(this);
		}

		::System::Int32 __SortReforgeSubAffixes_b__0(::Class_1_D1E0AD3915BCCF29_1* a1, ::Class_1_D1E0AD3915BCCF29_1* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_1*, ::Class_1_D1E0AD3915BCCF29_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICITEMDATA___C__DISPLAYCLASS87_0___SORTREFORGESUBAFFIXES_B__0_OFFSET))(this, a1, a2);
		}
	};
}
