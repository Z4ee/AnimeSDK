#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_CCE502355C885F78_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC4A8B0)
#define CLASS_1_CCE502355C885F78_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xBC4A910)
#define CLASS_1_CCE502355C885F78_METHOD_1_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0xBC4A7F0)
#define CLASS_1_CCE502355C885F78_METHOD_1_BA4B705DA571C85D_OFFSET UNITYSDK_OFFSET(0xBC4A570)
#define CLASS_1_CCE502355C885F78_METHOD_1_F80D9C315EB56AA0_OFFSET UNITYSDK_OFFSET(0xBC4A780)
#define CLASS_1_CCE502355C885F78__CTOR_OFFSET UNITYSDK_OFFSET(0xBC4A430)

inline static constexpr unsigned int Class_1_CCE502355C885F78_TypeDefinitionIndex = 70331;

class Class_1_CCE502355C885F78 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::RPG::Client::ActivityIdleLive::IdleLiveNode* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Int32 Field_1_4; // 0x28

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA4B705DA571C85D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_METHOD_1_BA4B705DA571C85D_OFFSET))(this, a1);
	}

	::System::Void Method_1_F80D9C315EB56AA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_METHOD_1_F80D9C315EB56AA0_OFFSET))(this);
	}

	::System::Void Method_1_2C8484BE9A26CCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_METHOD_1_2C8484BE9A26CCD5_OFFSET))(this);
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
