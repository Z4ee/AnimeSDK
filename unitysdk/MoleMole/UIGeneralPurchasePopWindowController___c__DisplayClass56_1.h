#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;

#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18977590)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_1__DOPURCHASE_B__1_OFFSET UNITYSDK_OFFSET(0x189775A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPurchasePopWindowController___c__DisplayClass56_1_TypeDefinitionIndex = 43128;

	class UIGeneralPurchasePopWindowController___c__DisplayClass56_1 : public ::System::Object
	{
	public:
		::System::Int32 itemIdToFind; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _DoPurchase_b__1(::Class_1_0D6706375CDAAE8C* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_1__DOPURCHASE_B__1_OFFSET))(this, x);
		}
	};
}
