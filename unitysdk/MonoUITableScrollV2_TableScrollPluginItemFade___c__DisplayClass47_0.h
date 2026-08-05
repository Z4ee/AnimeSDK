#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2_TableScrollPluginItemFade;
namespace System { class Action; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1166F730)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___C__DISPLAYCLASS47_0__PLAYFADEOUTANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x1166F740)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginItemFade___c__DisplayClass47_0_TypeDefinitionIndex = 74984;

class MonoUITableScrollV2_TableScrollPluginItemFade___c__DisplayClass47_0 : public ::System::Object
{
public:
	::System::Action* fadeOutAction; // 0x10
	::MonoUITableScrollV2_TableScrollPluginItemFade* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
	}

	::System::Void _PlayFadeOutAnimation_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___C__DISPLAYCLASS47_0__PLAYFADEOUTANIMATION_B__0_OFFSET))(this);
	}
};
