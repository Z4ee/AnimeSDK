#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchHandLiftToAnchor; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_199BC4B673BFCF69_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1514A510)
#define CLASS_2_199BC4B673BFCF69_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1514ABD0)
#define CLASS_2_199BC4B673BFCF69_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1514A5D0)
#define CLASS_2_199BC4B673BFCF69_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1514AB80)
#define CLASS_2_199BC4B673BFCF69_TICK_OFFSET UNITYSDK_OFFSET(0x1514A550)
#define CLASS_2_199BC4B673BFCF69__CTOR_OFFSET UNITYSDK_OFFSET(0x1514A500)

inline static constexpr unsigned int Class_2_199BC4B673BFCF69_TypeDefinitionIndex = 50889;

class Class_2_199BC4B673BFCF69 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SwitchHandLiftToAnchor* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandLiftToAnchor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandLiftToAnchor*))((::PBYTE)hIl2Cpp + CLASS_2_199BC4B673BFCF69__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_199BC4B673BFCF69_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_199BC4B673BFCF69_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_199BC4B673BFCF69_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_199BC4B673BFCF69_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_199BC4B673BFCF69_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
