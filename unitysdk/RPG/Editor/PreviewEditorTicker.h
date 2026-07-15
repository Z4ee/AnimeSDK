#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define RPG_EDITOR_PREVIEWEDITORTICKER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x106BFBA0)
#define RPG_EDITOR_PREVIEWEDITORTICKER_UPDATE_OFFSET UNITYSDK_OFFSET(0x106BFB40)
#define RPG_EDITOR_PREVIEWEDITORTICKER__CTOR_OFFSET UNITYSDK_OFFSET(0x106BFC00)

namespace RPG::Editor
{
	inline static constexpr unsigned int PreviewEditorTicker_TypeDefinitionIndex = 49663;

	class PreviewEditorTicker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* OnUpdate; // 0x18
		::System::Action* OnLateUpdate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_PREVIEWEDITORTICKER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_PREVIEWEDITORTICKER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_PREVIEWEDITORTICKER_LATEUPDATE_OFFSET))(this);
		}
	};
}
