#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_32F22BA3DADD2A84.h"
#include "unitysdk/Enum_3_3A280D225275881D.h"
#include "unitysdk/Enum_3_F4E08D0E9B554572.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_F69D29AB796376C2;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVEPROPSWINDOWCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1864D690)
#define MOLEMOLE_UIACTIVEPROPSWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1864D610)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsWindowContext_TypeDefinitionIndex = 83674;

	class UIActivePropsWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_2<::System::Int32, ::System::ValueTuple_2<::System::Boolean, ::System::String*>>* CheckCustomSelectStr; // 0x28
		::System::Func_2<::System::Int32, ::System::Boolean>* buddyLockCheckFunc; // 0x30
		::System::Collections::Generic::HashSet_1<::System::Int32>* blacklist; // 0x38
		::System::String* buddyLockTipTextMapId; // 0x40
		::System::String* TitleText; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* InsertBuddys; // 0x50
		::System::Collections::Generic::HashSet_1<::System::Int32>* whitelist; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* hideBuddy; // 0x60
		::Il2CppArray<::Enum_3_3A280D225275881D>* highPrioritySortTypes; // 0x68
		::Il2CppArray<::System::Int32>* multiBuddySelects; // 0x70
		::Class_2_F69D29AB796376C2* QuestCfg; // 0x78
		::Il2CppArray<::Enum_3_3A280D225275881D>* sortTypes; // 0x80
		::System::Collections::Generic::List_1<::System::Int32>* topBuddyIDs; // 0x88
		::System::Int32 OpenSelectBuddyID; // 0x90
		::Enum_3_32F22BA3DADD2A84 ShowBuddyMode; // 0x94
		::System::Boolean IsPreview; // 0x98
		::System::Boolean selectIsEmpty; // 0x99
		::System::Boolean IsGachaOptionalSelect; // 0x9A
		::Enum_3_F4E08D0E9B554572 SelectType; // 0x9C
		::System::Int32 GachaOptionalSelectItemID; // 0xA0
		::System::Int32 GachaID; // 0xA4

		::System::Void _ctor(::System::Int32 buddySelectCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSWINDOWCONTEXT__CTOR_OFFSET))(this, buddySelectCount);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSWINDOWCONTEXT__CTOR_1_OFFSET))(this);
		}
	};
}
