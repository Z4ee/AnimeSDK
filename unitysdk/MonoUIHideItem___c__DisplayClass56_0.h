#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUIHideItem;
namespace System { class Action; }

#define MONOUIHIDEITEM___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1166F6E0)
#define MONOUIHIDEITEM___C__DISPLAYCLASS56_0___PLAYANIMATIONWITHDELAYCONFIRM_B__0_OFFSET UNITYSDK_OFFSET(0x1166F6F0)

inline static constexpr unsigned int MonoUIHideItem___c__DisplayClass56_0_TypeDefinitionIndex = 83752;

class MonoUIHideItem___c__DisplayClass56_0 : public ::System::Object
{
public:
	::System::Action* onFinish; // 0x10
	::MonoUIHideItem* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
	}

	::System::Void __PlayAnimationWithDelayConfirm_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM___C__DISPLAYCLASS56_0___PLAYANIMATIONWITHDELAYCONFIRM_B__0_OFFSET))(this);
	}
};
