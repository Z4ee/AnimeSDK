#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class Text; }

#define MONOUIFONTDIRTY_AWAKE_OFFSET UNITYSDK_OFFSET(0x11BFBB20)
#define MONOUIFONTDIRTY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11BFBCB0)
#define MONOUIFONTDIRTY__CTOR_OFFSET UNITYSDK_OFFSET(0x11BFBE40)

inline static constexpr unsigned int MonoUIFontDirty_TypeDefinitionIndex = 45902;

class MonoUIFontDirty : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::UI::Text* text; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIFONTDIRTY__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIFONTDIRTY_AWAKE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIFONTDIRTY_ONDESTROY_OFFSET))(this);
	}
};
