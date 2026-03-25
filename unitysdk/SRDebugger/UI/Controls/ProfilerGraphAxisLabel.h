#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"
#include "unitysdk/System/Nullable_1.h"

namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHAXISLABEL_SETVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x18453200)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHAXISLABEL_SETVALUE_OFFSET UNITYSDK_OFFSET(0x18453540)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHAXISLABEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x184531D0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHAXISLABEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18453580)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ProfilerGraphAxisLabel_TypeDefinitionIndex = 29683;

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

		::System::Void SetValue(::System::Single frameTime, ::System::Single yPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHAXISLABEL_SETVALUE_OFFSET))(this, frameTime, yPosition);
		}

		::System::Void SetValueInternal(::System::Single frameTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHAXISLABEL_SETVALUEINTERNAL_OFFSET))(this, frameTime);
		}
	};
}
