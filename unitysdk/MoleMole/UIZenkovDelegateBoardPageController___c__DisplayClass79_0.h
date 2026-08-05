#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_84A668B8DE4853ED;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS79_0__APPLYCACHEDSEASONORDER_B__0_OFFSET UNITYSDK_OFFSET(0x11E46570)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11E46560)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardPageController___c__DisplayClass79_0_TypeDefinitionIndex = 88484;

	class UIZenkovDelegateBoardPageController___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* orderMap; // 0x10
		::System::Int32 fallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ApplyCachedSeasonOrder_b__0(::Class_1_84A668B8DE4853ED* a, ::Class_1_84A668B8DE4853ED* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_84A668B8DE4853ED*, ::Class_1_84A668B8DE4853ED*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS79_0__APPLYCACHEDSEASONORDER_B__0_OFFSET))(this, a, b);
		}
	};
}
