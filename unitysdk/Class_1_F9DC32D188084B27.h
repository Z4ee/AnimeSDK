#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LongPressEvent; }
namespace System { class Action; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F9DC32D188084B27_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x9A43AE0)
#define CLASS_1_F9DC32D188084B27_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x9A43CB0)
#define CLASS_1_F9DC32D188084B27_METHOD_1_9B66BD54CD5FBAD5_OFFSET UNITYSDK_OFFSET(0x9A436D0)
#define CLASS_1_F9DC32D188084B27_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9A43A50)
#define CLASS_1_F9DC32D188084B27_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0x9A43C50)
#define CLASS_1_F9DC32D188084B27__CTOR_OFFSET UNITYSDK_OFFSET(0x9A439E0)

inline static constexpr unsigned int Class_1_F9DC32D188084B27_TypeDefinitionIndex = 62906;

class Class_1_F9DC32D188084B27 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::RPG::Client::LongPressEvent* Field_1_0; // 0x18
	::System::Type* Field_1_2; // 0x20
	::System::Type* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9DC32D188084B27__CTOR_OFFSET))(this);
	}

	static ::Class_1_F9DC32D188084B27* Method_1_9B66BD54CD5FBAD5(::UnityEngine::Transform* a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::Class_1_F9DC32D188084B27*(*)(::UnityEngine::Transform*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9DC32D188084B27_METHOD_1_9B66BD54CD5FBAD5_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9DC32D188084B27_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9DC32D188084B27_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean UnityEngine_EventSystems_IExecuteEventBlocker_IsEventBlock(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_F9DC32D188084B27_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9DC32D188084B27_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}
};
