#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_17;
namespace System { class Action; }

#define CLASS_1_752C6C290217C1A0_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC0D20A0)
#define CLASS_1_752C6C290217C1A0_TICK_OFFSET UNITYSDK_OFFSET(0xC0D2220)
#define CLASS_1_752C6C290217C1A0__CTOR_OFFSET UNITYSDK_OFFSET(0xC0D2090)

inline static constexpr unsigned int Class_1_752C6C290217C1A0_TypeDefinitionIndex = 71238;

class Class_1_752C6C290217C1A0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752C6C290217C1A0__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_17* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_752C6C290217C1A0_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_752C6C290217C1A0_TICK_OFFSET))(this, a1);
	}
};
