#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Button; }

#define CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS1_0__BINDHOLD_B__0_OFFSET UNITYSDK_OFFSET(0x1633E140)
#define CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS1_0__BINDHOLD_B__1_OFFSET UNITYSDK_OFFSET(0x1633E320)
#define CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1633D9F0)

inline static constexpr unsigned int Class_1_F8CCE338A0EBE567___c__DisplayClass1_0_TypeDefinitionIndex = 72946;

class Class_1_F8CCE338A0EBE567___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Action_1<::System::Object*>* onHoldRelease; // 0x10
	::System::Action_1<::System::Object*>* holdBegin; // 0x18
	::UnityEngine::UI::Button* button; // 0x20
	::System::Action_1<::System::Object*>* onClick; // 0x28
	::System::Object* p; // 0x30
	::System::Action_1<::System::Object*>* downCallback; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _BindHold_b__0(::UnityEngine::EventSystems::BaseEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS1_0__BINDHOLD_B__0_OFFSET))(this, a1);
	}

	::System::Void _BindHold_b__1(::UnityEngine::EventSystems::BaseEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS1_0__BINDHOLD_B__1_OFFSET))(this, a1);
	}
};
