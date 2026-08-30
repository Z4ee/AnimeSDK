#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_27;
namespace System { class Action; }

#define CLASS_1_E2C161E4111291E5_EXECUTE_OFFSET UNITYSDK_OFFSET(0x158A0770)
#define CLASS_1_E2C161E4111291E5_TICK_OFFSET UNITYSDK_OFFSET(0x158A0900)
#define CLASS_1_E2C161E4111291E5__CTOR_OFFSET UNITYSDK_OFFSET(0x158A0760)

inline static constexpr unsigned int Class_1_E2C161E4111291E5_TypeDefinitionIndex = 77186;

class Class_1_E2C161E4111291E5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C161E4111291E5__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E2C161E4111291E5_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E2C161E4111291E5_TICK_OFFSET))(this, a1);
	}
};
