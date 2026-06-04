#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger::Services { class IProfilerService; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_PROFILERFPSLABEL_REFRESH_OFFSET UNITYSDK_OFFSET(0x1AD0D570)
#define SRDEBUGGER_UI_PROFILERFPSLABEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD0D540)
#define SRDEBUGGER_UI_PROFILERFPSLABEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD0D720)

namespace SRDebugger::UI
{
	inline static constexpr unsigned int ProfilerFPSLabel_TypeDefinitionIndex = 35648;

	class ProfilerFPSLabel : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::System::Single _nextUpdate; // 0x48
		::SRDebugger::Services::IProfilerService* _profilerService; // 0x50
		::System::Single UpdateFrequency; // 0x58
		::UnityEngine::UI::Text* _text; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_PROFILERFPSLABEL__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_PROFILERFPSLABEL_UPDATE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_PROFILERFPSLABEL_REFRESH_OFFSET))(this);
		}
	};
}
