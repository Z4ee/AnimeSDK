#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_CCE502355C885F78_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B435A0)
#define CLASS_1_CCE502355C885F78_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x12B43600)
#define CLASS_1_CCE502355C885F78_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x12B43510)
#define CLASS_1_CCE502355C885F78_METHOD_1_762D0E1808DE757B_OFFSET UNITYSDK_OFFSET(0x12B434B0)
#define CLASS_1_CCE502355C885F78_METHOD_1_C9DE5F3329B6D353_OFFSET UNITYSDK_OFFSET(0x12B432A0)
#define CLASS_1_CCE502355C885F78__CTOR_OFFSET UNITYSDK_OFFSET(0x12B43170)

inline static constexpr unsigned int Class_1_CCE502355C885F78_TypeDefinitionIndex = 69519;

class Class_1_CCE502355C885F78 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::RPG::Client::ActivityIdleLive::IdleLiveNode* Field_1_2; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9DE5F3329B6D353(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_METHOD_1_C9DE5F3329B6D353_OFFSET))(this, a1);
	}

	::System::Void Method_1_762D0E1808DE757B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_METHOD_1_762D0E1808DE757B_OFFSET))(this);
	}

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
