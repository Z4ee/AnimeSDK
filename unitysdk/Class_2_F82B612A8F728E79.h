#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitStartMarbleGame; }
namespace System { class Object; }

#define CLASS_2_F82B612A8F728E79_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC139020)
#define CLASS_2_F82B612A8F728E79_METHOD_2_90FFE4EA6D9FAB0A_OFFSET UNITYSDK_OFFSET(0xC1392E0)
#define CLASS_2_F82B612A8F728E79_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC138F10)
#define CLASS_2_F82B612A8F728E79_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC138FD0)
#define CLASS_2_F82B612A8F728E79_TICK_OFFSET UNITYSDK_OFFSET(0xC139170)
#define CLASS_2_F82B612A8F728E79__CTOR_OFFSET UNITYSDK_OFFSET(0xC138E80)

inline static constexpr unsigned int Class_2_F82B612A8F728E79_TypeDefinitionIndex = 53750;

class Class_2_F82B612A8F728E79 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitStartMarbleGame* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_07C3C4D2990C49EE* EDBPHODBFCP; // 0x28
	::System::Boolean BHEIANKOOPN; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitStartMarbleGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitStartMarbleGame*))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_90FFE4EA6D9FAB0A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79_METHOD_2_90FFE4EA6D9FAB0A_OFFSET))(this, a1);
	}
};
