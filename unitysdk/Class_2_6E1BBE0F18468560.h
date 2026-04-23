#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFor; }

#define CLASS_2_6E1BBE0F18468560_DISPOSE_OFFSET UNITYSDK_OFFSET(0x937E720)
#define CLASS_2_6E1BBE0F18468560_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x937E790)
#define CLASS_2_6E1BBE0F18468560_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x937E820)
#define CLASS_2_6E1BBE0F18468560_TICK_OFFSET UNITYSDK_OFFSET(0x937E870)
#define CLASS_2_6E1BBE0F18468560__CTOR_OFFSET UNITYSDK_OFFSET(0x937E660)

inline static constexpr unsigned int Class_2_6E1BBE0F18468560_TypeDefinitionIndex = 54298;

class Class_2_6E1BBE0F18468560 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::RPG::GameCore::WaitFor* Field_2_0; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFor*))((::PBYTE)hIl2Cpp + CLASS_2_6E1BBE0F18468560__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E1BBE0F18468560_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E1BBE0F18468560_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E1BBE0F18468560_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6E1BBE0F18468560_TICK_OFFSET))(this, a1);
	}
};
