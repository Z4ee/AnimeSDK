#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger::Services { class IConsoleService; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x19E94790)
#define SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x19E94AC0)
#define SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x19E94810)
#define SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E94B00)
#define SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E94AF0)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int ConsoleTabQuickViewControl_TypeDefinitionIndex = 35367;

	class ConsoleTabQuickViewControl : public ::SRF::SRMonoBehaviourEx
	{
	public:
		static ::System::String** StaticGet_MaxString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ConsoleTabQuickViewControl_TypeDefinitionIndex)->GetStaticField(0x692F0);
		}
		// static const ::System::Int32 Max = 0x3E8; // 0x0
		::System::Int32 _prevErrorCount; // 0x48
		::System::Int32 _prevInfoCount; // 0x4C
		::System::Int32 _prevWarningCount; // 0x50
		::SRDebugger::Services::IConsoleService* ConsoleService; // 0x58
		::UnityEngine::UI::Text* ErrorCountText; // 0x60
		::UnityEngine::UI::Text* InfoCountText; // 0x68
		::UnityEngine::UI::Text* WarningCountText; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_UPDATE_OFFSET))(this);
		}

		static ::System::Boolean HasChanged(::System::Int32 newCount, ::System::Int32& oldCount, ::System::Int32 max)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_HASCHANGED_OFFSET))(newCount, oldCount, max);
		}
	};
}
