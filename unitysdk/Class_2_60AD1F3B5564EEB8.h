#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerChangeModel; }
namespace System { class Object; }

#define CLASS_2_60AD1F3B5564EEB8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB339020)
#define CLASS_2_60AD1F3B5564EEB8_METHOD_2_D8E44F7C510402BB_OFFSET UNITYSDK_OFFSET(0xB3393C0)
#define CLASS_2_60AD1F3B5564EEB8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB339180)
#define CLASS_2_60AD1F3B5564EEB8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB339240)
#define CLASS_2_60AD1F3B5564EEB8_TICK_OFFSET UNITYSDK_OFFSET(0xB339360)
#define CLASS_2_60AD1F3B5564EEB8__CTOR_OFFSET UNITYSDK_OFFSET(0xB338F90)

inline static constexpr unsigned int Class_2_60AD1F3B5564EEB8_TypeDefinitionIndex = 58913;

class Class_2_60AD1F3B5564EEB8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_07C3C4D2990C49EE* GEKHMGEPKPD; // 0x20
	::RPG::GameCore::WaitPlayerChangeModel* OFKGLJOAMLD; // 0x28

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
