#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"
#include "unitysdk/System/Nullable_1.h"

namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHAXISLABEL_SETVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E693850)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHAXISLABEL_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1E693BC0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHAXISLABEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E693820)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHAXISLABEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E693C00)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ProfilerGraphAxisLabel_TypeDefinitionIndex = 37344;

	class ProfilerGraphAxisLabel : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::System::Single _prevFrameTime; // 0x48
		::System::Nullable_1<::System::Single> _queuedFrameTime; // 0x4C
		::System::Single _yPosition; // 0x54
		::UnityEngine::UI::Text* Text; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHAXISLABEL__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHAXISLABEL_UPDATE_OFFSET))(this);
		}

		::System::Void SetValue(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHAXISLABEL_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void SetValueInternal(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHAXISLABEL_SETVALUEINTERNAL_OFFSET))(this, a1);
		}
	};
}
