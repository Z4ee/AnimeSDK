#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/UI/Controls/DataBoundControl.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CUSTOMDEBUGREADONLYCONTROL_CANBIND_OFFSET UNITYSDK_OFFSET(0xD076450)
#define SRDEBUGGER_UI_CUSTOMDEBUGREADONLYCONTROL_ONBIND_OFFSET UNITYSDK_OFFSET(0xD076430)
#define SRDEBUGGER_UI_CUSTOMDEBUGREADONLYCONTROL_ONVALUEUPDATED_OFFSET UNITYSDK_OFFSET(0xD076440)
#define SRDEBUGGER_UI_CUSTOMDEBUGREADONLYCONTROL_START_OFFSET UNITYSDK_OFFSET(0xD076420)
#define SRDEBUGGER_UI_CUSTOMDEBUGREADONLYCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD076460)

namespace SRDebugger::UI
{
	inline static constexpr unsigned int CustomDebugReadOnlyControl_TypeDefinitionIndex = 45024;

	class CustomDebugReadOnlyControl : public ::SRDebugger::UI::Controls::DataBoundControl
	{
	public:
		::RPG::Client::LocalizedText* ValueText; // 0x98
		::UnityEngine::UI::Text* Title; // 0xA0
		::UnityEngine::GameObject* ScrollContent; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CUSTOMDEBUGREADONLYCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CUSTOMDEBUGREADONLYCONTROL_START_OFFSET))(this);
		}

		::System::Void OnBind(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CUSTOMDEBUGREADONLYCONTROL_ONBIND_OFFSET))(this, a1, a2);
		}

		::System::Void OnValueUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CUSTOMDEBUGREADONLYCONTROL_ONVALUEUPDATED_OFFSET))(this, a1);
		}

		::System::Boolean CanBind(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CUSTOMDEBUGREADONLYCONTROL_CANBIND_OFFSET))(this, a1, a2);
		}
	};
}
