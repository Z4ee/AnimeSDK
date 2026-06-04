#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_090B3B4C25B22640;
namespace RPG::Client { class MonoEffect; }
namespace UnityEngine { class Transform; }

#define CLASS_2_090B3B4C25B22640___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x112A9F80)
#define CLASS_2_090B3B4C25B22640___C__DISPLAYCLASS15_0___DRAWLIGHTNINGRAY_B__0_OFFSET UNITYSDK_OFFSET(0x112A9FD0)

inline static constexpr unsigned int Class_2_090B3B4C25B22640___c__DisplayClass15_0_TypeDefinitionIndex = 72415;

class Class_2_090B3B4C25B22640___c__DisplayClass15_0 : public ::System::Object
{
public:
	::RPG::Client::MonoEffect* effectInstance; // 0x10
	::UnityEngine::Transform* nextFrameTransform; // 0x18
	::Class_2_090B3B4C25B22640* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_090B3B4C25B22640___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Void __DrawLightningRay_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_090B3B4C25B22640___C__DISPLAYCLASS15_0___DRAWLIGHTNINGRAY_B__0_OFFSET))(this);
	}
};
