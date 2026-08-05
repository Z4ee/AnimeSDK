#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UNLOCKACTIVITYHOTPOTFOODPOP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x11C2C520)
#define MOLEMOLE_UNLOCKACTIVITYHOTPOTFOODPOP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x11C2C570)
#define MOLEMOLE_UNLOCKACTIVITYHOTPOTFOODPOP__CTOR_OFFSET UNITYSDK_OFFSET(0x11C2C530)
#define MOLEMOLE_UNLOCKACTIVITYHOTPOTFOODPOP__ONPROCESS_B__5_0_OFFSET UNITYSDK_OFFSET(0x11C2C7F0)

namespace MoleMole
{
	inline static constexpr unsigned int UnlockActivityHotpotFoodPop_TypeDefinitionIndex = 59371;

	class UnlockActivityHotpotFoodPop : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* FoodList; // 0x28
		::System::Action* callback; // 0x30

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
