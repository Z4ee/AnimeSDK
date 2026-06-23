#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_FROMQUESTID_OFFSET UNITYSDK_OFFSET(0x16704FA0)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x16705380)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_ITEMNUM_OFFSET UNITYSDK_OFFSET(0x167054E0)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x16705230)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_REWARDPREVIEW_OFFSET UNITYSDK_OFFSET(0x167050C0)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16705070)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookAwakenItemRewardContext_TypeDefinitionIndex = 70596;

	class UIHandBookAwakenItemRewardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 QuestID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT__CTOR_OFFSET))(this);
		}

		static ::MoleMole::UIHandBookAwakenItemRewardContext* FromQuestID(::System::Int32 questID)
		{
			return ((::MoleMole::UIHandBookAwakenItemRewardContext*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_FROMQUESTID_OFFSET))(questID);
		}

		::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 get_RewardPreview()
		{
			return ((::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_REWARDPREVIEW_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_ItemID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_ITEMID_OFFSET))(this);
		}

		::System::Int32 get_ItemNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_ITEMNUM_OFFSET))(this);
		}
	};
}
