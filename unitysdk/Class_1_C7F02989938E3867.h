#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Button_ButtonClickedEvent; }

#define CLASS_1_C7F02989938E3867_METHOD_1_28C245B5A00FDFF2_OFFSET UNITYSDK_OFFSET(0x19283C70)
#define CLASS_1_C7F02989938E3867_METHOD_1_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x19284130)
#define CLASS_1_C7F02989938E3867_METHOD_1_815619CEEE2056DC_OFFSET UNITYSDK_OFFSET(0x19283A30)
#define CLASS_1_C7F02989938E3867_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x19283F40)
#define CLASS_1_C7F02989938E3867_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x19283DC0)
#define CLASS_1_C7F02989938E3867_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0x192840D0)
#define CLASS_1_C7F02989938E3867__CTOR_OFFSET UNITYSDK_OFFSET(0x19283C10)

inline static constexpr unsigned int Class_1_C7F02989938E3867_TypeDefinitionIndex = 68217;

class Class_1_C7F02989938E3867 : public ::System::Object
{
public:
	::System::Action* MPKAFEJFNKN; // 0x10
	::System::Type* ELMOAJCPPJE; // 0x18
	::System::Type* LHHFPDJMFBO; // 0x20
	::UnityEngine::UI::Button_ButtonClickedEvent* FPBKFKHEFJC; // 0x28
	::UnityEngine::UI::Button* KHDHIHPFLJI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7F02989938E3867__CTOR_OFFSET))(this);
	}

	static ::Class_1_C7F02989938E3867* Method_1_815619CEEE2056DC(::UnityEngine::Transform* a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::Class_1_C7F02989938E3867*(*)(::UnityEngine::Transform*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C7F02989938E3867_METHOD_1_815619CEEE2056DC_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_28C245B5A00FDFF2(::UnityEngine::UI::Button* a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C7F02989938E3867_METHOD_1_28C245B5A00FDFF2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7F02989938E3867_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7F02989938E3867_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Boolean UnityEngine_EventSystems_IExecuteEventBlocker_IsEventBlock(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_C7F02989938E3867_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_1_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7F02989938E3867_METHOD_1_45714050EDEF8291_OFFSET))(this);
	}
};
