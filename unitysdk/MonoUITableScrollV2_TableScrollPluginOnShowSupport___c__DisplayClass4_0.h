#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2_ConfigItemAnim;
class MonoUITableScrollV2_TableScrollPluginOnShowSupport;

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINONSHOWSUPPORT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10F1BC50)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINONSHOWSUPPORT___C__DISPLAYCLASS4_0__PLAYONSHOWANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x10F1BC60)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINONSHOWSUPPORT___C__DISPLAYCLASS4_0__PLAYONSHOWANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x10F1BD80)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginOnShowSupport___c__DisplayClass4_0_TypeDefinitionIndex = 75027;

class MonoUITableScrollV2_TableScrollPluginOnShowSupport___c__DisplayClass4_0 : public ::System::Object
{
public:
	::MonoUITableScrollV2_TableScrollPluginOnShowSupport* __4__this; // 0x10
	::MonoUITableScrollV2_ConfigItemAnim* onShowAnim; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINONSHOWSUPPORT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _PlayOnShowAnimation_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINONSHOWSUPPORT___C__DISPLAYCLASS4_0__PLAYONSHOWANIMATION_B__0_OFFSET))(this);
	}

	::System::Void _PlayOnShowAnimation_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINONSHOWSUPPORT___C__DISPLAYCLASS4_0__PLAYONSHOWANIMATION_B__1_OFFSET))(this);
	}
};
