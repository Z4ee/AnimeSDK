#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerConfirmDialog; }

#define CLASS_2_0D49EE29FAFA9CEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD9E47A0)
#define CLASS_2_0D49EE29FAFA9CEE_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0xD9E4C80)
#define CLASS_2_0D49EE29FAFA9CEE_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xD9E4BA0)
#define CLASS_2_0D49EE29FAFA9CEE_METHOD_2_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0xD9E4B40)
#define CLASS_2_0D49EE29FAFA9CEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD9E4830)
#define CLASS_2_0D49EE29FAFA9CEE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD9E4A90)
#define CLASS_2_0D49EE29FAFA9CEE_TICK_OFFSET UNITYSDK_OFFSET(0xD9E4AE0)
#define CLASS_2_0D49EE29FAFA9CEE__CTOR_OFFSET UNITYSDK_OFFSET(0xD9E46B0)

inline static constexpr unsigned int Class_2_0D49EE29FAFA9CEE_TypeDefinitionIndex = 49273;

class Class_2_0D49EE29FAFA9CEE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x28
	::RPG::GameCore::TriggerConfirmDialog* Field_2_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerConfirmDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerConfirmDialog*))((::PBYTE)hIl2Cpp + CLASS_2_0D49EE29FAFA9CEE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D49EE29FAFA9CEE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D49EE29FAFA9CEE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D49EE29FAFA9CEE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0D49EE29FAFA9CEE_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E47F09A457E7E05(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0D49EE29FAFA9CEE_METHOD_2_2E47F09A457E7E05_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D49EE29FAFA9CEE_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D49EE29FAFA9CEE_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}
};
