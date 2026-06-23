#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MONOVHSSTOREWIDGET03CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10438BD0)

inline static constexpr unsigned int MonoVHSStoreWidget03Config_TypeDefinitionIndex = 65214;

class MonoVHSStoreWidget03Config : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 ChangeFrame; // 0x18
	::System::String* AnimationName; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVHSSTOREWIDGET03CONFIG__CTOR_OFFSET))(this);
	}
};
