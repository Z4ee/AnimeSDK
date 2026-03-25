#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviour.h"

namespace SRF::UI { class StyleComponent; }
namespace System { class String; }

#define SRDEBUGGER_UI_OTHER_DEBUGPANELBACKGROUNDBEHAVIOUR_AWAKE_OFFSET UNITYSDK_OFFSET(0x18459D50)
#define SRDEBUGGER_UI_OTHER_DEBUGPANELBACKGROUNDBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0x18459E00)
#define SRDEBUGGER_UI_OTHER_DEBUGPANELBACKGROUNDBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x18459F40)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int DebugPanelBackgroundBehaviour_TypeDefinitionIndex = 29648;

	class DebugPanelBackgroundBehaviour : public ::SRF::SRMonoBehaviour
	{
	public:
		::System::String* _defaultKey; // 0x48
		::System::Boolean _isTransparent; // 0x50
		::SRF::UI::StyleComponent* _styleComponent; // 0x58
		::System::String* TransparentStyleKey; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DEBUGPANELBACKGROUNDBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DEBUGPANELBACKGROUNDBEHAVIOUR_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DEBUGPANELBACKGROUNDBEHAVIOUR_UPDATE_OFFSET))(this);
		}
	};
}
