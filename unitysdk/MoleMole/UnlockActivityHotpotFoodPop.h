#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UNLOCKACTIVITYHOTPOTFOODPOP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xE48E5D0)
#define MOLEMOLE_UNLOCKACTIVITYHOTPOTFOODPOP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xE48E620)
#define MOLEMOLE_UNLOCKACTIVITYHOTPOTFOODPOP__CTOR_OFFSET UNITYSDK_OFFSET(0xE48E5E0)
#define MOLEMOLE_UNLOCKACTIVITYHOTPOTFOODPOP__ONPROCESS_B__5_0_OFFSET UNITYSDK_OFFSET(0xE48E870)

namespace MoleMole
{
	inline static constexpr unsigned int UnlockActivityHotpotFoodPop_TypeDefinitionIndex = 62822;

	class UnlockActivityHotpotFoodPop : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action* callback; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* FoodList; // 0x30

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* FoodList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKACTIVITYHOTPOTFOODPOP__CTOR_OFFSET))(this, FoodList);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKACTIVITYHOTPOTFOODPOP_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKACTIVITYHOTPOTFOODPOP_ONPROCESS_OFFSET))(this);
		}

		::System::Void _OnProcess_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKACTIVITYHOTPOTFOODPOP__ONPROCESS_B__5_0_OFFSET))(this);
		}
	};
}
