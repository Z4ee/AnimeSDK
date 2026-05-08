#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2_TableScrollPluginItemFade;
namespace System { class Action; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE494100)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___C__DISPLAYCLASS56_0__PLAYFADEOUTWITHOUTEXPAND_B__0_OFFSET UNITYSDK_OFFSET(0xE494110)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginItemFade___c__DisplayClass56_0_TypeDefinitionIndex = 54137;

class MonoUITableScrollV2_TableScrollPluginItemFade___c__DisplayClass56_0 : public ::System::Object
{
public:
	::MonoUITableScrollV2_TableScrollPluginItemFade* __4__this; // 0x10
	::System::Action* fadeOutAction; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
	}

	::System::Void _PlayFadeOutWithoutExpand_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___C__DISPLAYCLASS56_0__PLAYFADEOUTWITHOUTEXPAND_B__0_OFFSET))(this);
	}
};
