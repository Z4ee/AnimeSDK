#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOHOLLOWBOTTOMNOTIFY_TRYSHOWBOTTOMPANEL_OFFSET UNITYSDK_OFFSET(0x116BFC60)
#define MONOHOLLOWBOTTOMNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x116BFD80)

inline static constexpr unsigned int MonoHollowBottomNotify_TypeDefinitionIndex = 45513;

class MonoHollowBottomNotify : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWBOTTOMNOTIFY__CTOR_OFFSET))(this);
	}

	::System::Void TryShowBottomPanel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWBOTTOMNOTIFY_TRYSHOWBOTTOMPANEL_OFFSET))(this);
	}
};
