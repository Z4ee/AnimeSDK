#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x186AE820)

namespace MoleMole
{
	inline static constexpr unsigned int UIFilterBagWidgetController_Context_TypeDefinitionIndex = 42842;

	class UIFilterBagWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* RecommendEquipIds; // 0x28
		::Il2CppArray<::System::Int32>* DepotBagTypes; // 0x30
		::System::Int32 TargetAvatarId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
