#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerChangeModel; }
namespace System { class Object; }

#define CLASS_2_60AD1F3B5564EEB8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18EC2DB0)
#define CLASS_2_60AD1F3B5564EEB8_METHOD_2_D8E44F7C510402BB_OFFSET UNITYSDK_OFFSET(0x18EC3150)
#define CLASS_2_60AD1F3B5564EEB8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18EC2F10)
#define CLASS_2_60AD1F3B5564EEB8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18EC2FD0)
#define CLASS_2_60AD1F3B5564EEB8_TICK_OFFSET UNITYSDK_OFFSET(0x18EC30F0)
#define CLASS_2_60AD1F3B5564EEB8__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC2D20)

inline static constexpr unsigned int Class_2_60AD1F3B5564EEB8_TypeDefinitionIndex = 56279;

class Class_2_60AD1F3B5564EEB8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitPlayerChangeModel* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPlayerChangeModel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPlayerChangeModel*))((::PBYTE)hIl2Cpp + CLASS_2_60AD1F3B5564EEB8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60AD1F3B5564EEB8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60AD1F3B5564EEB8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60AD1F3B5564EEB8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_60AD1F3B5564EEB8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_60AD1F3B5564EEB8_METHOD_2_D8E44F7C510402BB_OFFSET))(this, a1);
	}
};
