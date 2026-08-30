#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LongPressEvent; }
namespace System { class Action; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8AF826CB06167A13_1_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x17945510)
#define CLASS_1_8AF826CB06167A13_1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17945740)
#define CLASS_1_8AF826CB06167A13_1_METHOD_1_9F77F779C8303F0C_OFFSET UNITYSDK_OFFSET(0x179450E0)
#define CLASS_1_8AF826CB06167A13_1_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17945480)
#define CLASS_1_8AF826CB06167A13_1_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0x179456E0)
#define CLASS_1_8AF826CB06167A13_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17945420)

inline static constexpr unsigned int Class_1_8AF826CB06167A13_1_TypeDefinitionIndex = 68219;

class Class_1_8AF826CB06167A13_1 : public ::System::Object
{
public:
	::System::Type* LJJMMELAPOL; // 0x10
	::System::Type* LDBMGPMFMOL; // 0x18
	::RPG::Client::LongPressEvent* KANADECCJMH; // 0x20
	::System::Action* MPKAFEJFNKN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AF826CB06167A13_1__CTOR_OFFSET))(this);
	}

	static ::Class_1_8AF826CB06167A13_1* Method_1_9F77F779C8303F0C(::UnityEngine::Transform* a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::Class_1_8AF826CB06167A13_1*(*)(::UnityEngine::Transform*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8AF826CB06167A13_1_METHOD_1_9F77F779C8303F0C_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AF826CB06167A13_1_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AF826CB06167A13_1_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean UnityEngine_EventSystems_IExecuteEventBlocker_IsEventBlock(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_8AF826CB06167A13_1_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AF826CB06167A13_1_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
