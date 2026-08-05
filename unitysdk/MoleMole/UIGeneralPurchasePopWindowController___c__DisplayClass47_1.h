#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralPurchasePopWindowController___c__DisplayClass47_0; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_1__CTOR_OFFSET UNITYSDK_OFFSET(0x199C8730)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_1__ONREWARDONCLICKCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x199C8740)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_1__ONREWARDONCLICKCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x199C88F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPurchasePopWindowController___c__DisplayClass47_1_TypeDefinitionIndex = 43130;

	class UIGeneralPurchasePopWindowController___c__DisplayClass47_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralPurchasePopWindowController___c__DisplayClass47_0* CS___8__locals1; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Single fadeDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnRewardOnClickCallback_b__0(::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_1__ONREWARDONCLICKCALLBACK_B__0_OFFSET))(this, _);
		}

		::System::Void _OnRewardOnClickCallback_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_1__ONREWARDONCLICKCALLBACK_B__1_OFFSET))(this);
		}
	};
}
