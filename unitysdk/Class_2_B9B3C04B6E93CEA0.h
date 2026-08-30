#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class MonsterBehaviour; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B9B3C04B6E93CEA0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158478E0)
#define CLASS_2_B9B3C04B6E93CEA0_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15847C20)
#define CLASS_2_B9B3C04B6E93CEA0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158479C0)
#define CLASS_2_B9B3C04B6E93CEA0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15847A60)
#define CLASS_2_B9B3C04B6E93CEA0_TICK_OFFSET UNITYSDK_OFFSET(0x15847AE0)
#define CLASS_2_B9B3C04B6E93CEA0__CTOR_OFFSET UNITYSDK_OFFSET(0x15847830)

inline static constexpr unsigned int Class_2_B9B3C04B6E93CEA0_TypeDefinitionIndex = 53304;

class Class_2_B9B3C04B6E93CEA0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* ECMFFNPIHGD; // 0x18
	::RPG::GameCore::MonsterBehaviour* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::System::Int32 ONJKHFHOJKN; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonsterBehaviour* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonsterBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_B9B3C04B6E93CEA0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9B3C04B6E93CEA0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9B3C04B6E93CEA0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9B3C04B6E93CEA0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B9B3C04B6E93CEA0_TICK_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9B3C04B6E93CEA0_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
