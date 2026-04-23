#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Button_ButtonClickedEvent; }

#define CLASS_1_222D4959EFC7EBEB_METHOD_1_4E9E6FAA595F365B_OFFSET UNITYSDK_OFFSET(0x925C4F0)
#define CLASS_1_222D4959EFC7EBEB_METHOD_1_815619CEEE2056DC_OFFSET UNITYSDK_OFFSET(0x925C290)
#define CLASS_1_222D4959EFC7EBEB_METHOD_1_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x925C9A0)
#define CLASS_1_222D4959EFC7EBEB_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x925C7B0)
#define CLASS_1_222D4959EFC7EBEB_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x925C630)
#define CLASS_1_222D4959EFC7EBEB_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0x925C940)
#define CLASS_1_222D4959EFC7EBEB__CTOR_OFFSET UNITYSDK_OFFSET(0x925C480)

inline static constexpr unsigned int Class_1_222D4959EFC7EBEB_TypeDefinitionIndex = 62905;

class Class_1_222D4959EFC7EBEB : public ::System::Object
{
public:
	::System::Type* Field_1_4; // 0x10
	::System::Action* Field_1_2; // 0x18
	::UnityEngine::UI::Button_ButtonClickedEvent* Field_1_1; // 0x20
	::System::Type* Field_1_3; // 0x28
	::UnityEngine::UI::Button* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_222D4959EFC7EBEB__CTOR_OFFSET))(this);
	}

	static ::Class_1_222D4959EFC7EBEB* Method_1_815619CEEE2056DC(::UnityEngine::Transform* a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::Class_1_222D4959EFC7EBEB*(*)(::UnityEngine::Transform*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_222D4959EFC7EBEB_METHOD_1_815619CEEE2056DC_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_4E9E6FAA595F365B(::UnityEngine::UI::Button* a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_222D4959EFC7EBEB_METHOD_1_4E9E6FAA595F365B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_222D4959EFC7EBEB_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_222D4959EFC7EBEB_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Boolean UnityEngine_EventSystems_IExecuteEventBlocker_IsEventBlock(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_222D4959EFC7EBEB_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_1_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_222D4959EFC7EBEB_METHOD_1_913947B6596EB50A_OFFSET))(this);
	}
};
