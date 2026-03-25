#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_OTHER_VERSIONTEXTBEHAVIOUR_START_OFFSET UNITYSDK_OFFSET(0x1845C9A0)
#define SRDEBUGGER_UI_OTHER_VERSIONTEXTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1845CA10)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int VersionTextBehaviour_TypeDefinitionIndex = 29665;

	class VersionTextBehaviour : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::System::String* Format; // 0x48
		::UnityEngine::UI::Text* Text; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_VERSIONTEXTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_VERSIONTEXTBEHAVIOUR_START_OFFSET))(this);
		}
	};
}
