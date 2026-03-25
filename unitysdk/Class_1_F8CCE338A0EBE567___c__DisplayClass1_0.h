#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Button; }

#define CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS1_0__BINDHOLD_B__0_OFFSET UNITYSDK_OFFSET(0x8CC40C0)
#define CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS1_0__BINDHOLD_B__1_OFFSET UNITYSDK_OFFSET(0x8CC4230)
#define CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8CC3A00)

inline static constexpr unsigned int Class_1_F8CCE338A0EBE567___c__DisplayClass1_0_TypeDefinitionIndex = 59853;

class Class_1_F8CCE338A0EBE567___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Action_1<::System::Object*>* onClick; // 0x10
	::System::Action_1<::System::Object*>* downCallback; // 0x18
	::UnityEngine::UI::Button* button; // 0x20
	::System::Action_1<::System::Object*>* holdBegin; // 0x28
	::System::Action_1<::System::Object*>* onHoldRelease; // 0x30
	::System::Object* p; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _BindHold_b__0(::UnityEngine::EventSystems::BaseEventData* e)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS1_0__BINDHOLD_B__0_OFFSET))(this, e);
	}

	::System::Void _BindHold_b__1(::UnityEngine::EventSystems::BaseEventData* e)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS1_0__BINDHOLD_B__1_OFFSET))(this, e);
	}
};
