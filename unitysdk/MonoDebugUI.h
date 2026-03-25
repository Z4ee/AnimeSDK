#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define MONODEBUGUI_GET_FPSTEXT_OFFSET UNITYSDK_OFFSET(0x88BC7B0)
#define MONODEBUGUI_START_OFFSET UNITYSDK_OFFSET(0x88BC7C0)
#define MONODEBUGUI_UPDATE_OFFSET UNITYSDK_OFFSET(0x88BC980)
#define MONODEBUGUI__CTOR_OFFSET UNITYSDK_OFFSET(0x88BCBA0)

inline static constexpr unsigned int MonoDebugUI_TypeDefinitionIndex = 38440;

class MonoDebugUI : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::UI::Text* Field_5_0; // 0x18
	::Il2CppArray<::System::String*>* Field_5_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODEBUGUI__CTOR_OFFSET))(this);
	}

	::UnityEngine::UI::Text* get_FpsText()
	{
		return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODEBUGUI_GET_FPSTEXT_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODEBUGUI_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODEBUGUI_UPDATE_OFFSET))(this);
	}
};
