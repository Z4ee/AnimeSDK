#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowCardItemCollectPageController_TabType.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_503;

#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A396C0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS39_0__GETRESEARCHPROGRESSCONFIGLIST_B__0_OFFSET UNITYSDK_OFFSET(0x15A396D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemCollectPageController___c__DisplayClass39_0_TypeDefinitionIndex = 62944;

	class UIHollowCardItemCollectPageController___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowCardItemCollectPageController_TabType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetResearchProgressConfigList_b__0(::Class_2_208CC9941471731A_503* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_503*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS39_0__GETRESEARCHPROGRESSCONFIGLIST_B__0_OFFSET))(this, x);
		}
	};
}
