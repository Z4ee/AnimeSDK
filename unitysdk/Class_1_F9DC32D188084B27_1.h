#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LongPressEvent; }
namespace System { class Action; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F9DC32D188084B27_1_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xAC43EC0)
#define CLASS_1_F9DC32D188084B27_1_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0xAC44090)
#define CLASS_1_F9DC32D188084B27_1_METHOD_1_9B66BD54CD5FBAD5_OFFSET UNITYSDK_OFFSET(0xAC43AB0)
#define CLASS_1_F9DC32D188084B27_1_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xAC43E30)
#define CLASS_1_F9DC32D188084B27_1_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0xAC44030)
#define CLASS_1_F9DC32D188084B27_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAC43DC0)

inline static constexpr unsigned int Class_1_F9DC32D188084B27_1_TypeDefinitionIndex = 55704;

class Class_1_F9DC32D188084B27_1 : public ::System::Object
{
public:
	::RPG::Client::LongPressEvent* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Type* Field_1_2; // 0x20
	::System::Type* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9DC32D188084B27_1__CTOR_OFFSET))(this);
	}

	static ::Class_1_F9DC32D188084B27_1* Method_1_9B66BD54CD5FBAD5(::UnityEngine::Transform* a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::Class_1_F9DC32D188084B27_1*(*)(::UnityEngine::Transform*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9DC32D188084B27_1_METHOD_1_9B66BD54CD5FBAD5_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9DC32D188084B27_1_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9DC32D188084B27_1_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean UnityEngine_EventSystems_IExecuteEventBlocker_IsEventBlock(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_F9DC32D188084B27_1_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9DC32D188084B27_1_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}
};
