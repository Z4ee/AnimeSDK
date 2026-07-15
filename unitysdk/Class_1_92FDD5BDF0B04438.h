#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LongPressEvent; }
namespace System { class Action; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define CLASS_1_92FDD5BDF0B04438_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x15F8A070)
#define CLASS_1_92FDD5BDF0B04438_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15F8A2A0)
#define CLASS_1_92FDD5BDF0B04438_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15F89FE0)
#define CLASS_1_92FDD5BDF0B04438_METHOD_1_D1CFFF69455612A4_OFFSET UNITYSDK_OFFSET(0x15F89C50)
#define CLASS_1_92FDD5BDF0B04438_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0x15F8A240)
#define CLASS_1_92FDD5BDF0B04438__CTOR_OFFSET UNITYSDK_OFFSET(0x15F89F80)

inline static constexpr unsigned int Class_1_92FDD5BDF0B04438_TypeDefinitionIndex = 65212;

class Class_1_92FDD5BDF0B04438 : public ::System::Object
{
public:
	::System::Type* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::RPG::Client::LongPressEvent* Field_1_2; // 0x20
	::System::Type* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92FDD5BDF0B04438__CTOR_OFFSET))(this);
	}

	static ::Class_1_92FDD5BDF0B04438* Method_1_D1CFFF69455612A4(::UnityEngine::Transform* a1, ::System::Action* a2)
	{
		return ((::Class_1_92FDD5BDF0B04438*(*)(::UnityEngine::Transform*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_92FDD5BDF0B04438_METHOD_1_D1CFFF69455612A4_OFFSET))(a1, a2);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92FDD5BDF0B04438_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92FDD5BDF0B04438_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean UnityEngine_EventSystems_IExecuteEventBlocker_IsEventBlock(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_92FDD5BDF0B04438_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92FDD5BDF0B04438_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
