#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client::Prop { class FastDeliverPuzzleBoard; }
namespace RPG::GameCore { class PropFastDeliverPuzzleListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2C340B7D0D120245_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA807A0)
#define CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0xCA80B20)
#define CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_2_OFFSET UNITYSDK_OFFSET(0xCA80C00)
#define CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_3_OFFSET UNITYSDK_OFFSET(0xCA80CE0)
#define CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xCA80A40)
#define CLASS_2_2C340B7D0D120245_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCA7FFC0)
#define CLASS_2_2C340B7D0D120245_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCA80440)
#define CLASS_2_2C340B7D0D120245_TICK_OFFSET UNITYSDK_OFFSET(0xCA80DC0)
#define CLASS_2_2C340B7D0D120245__CTOR_OFFSET UNITYSDK_OFFSET(0xCA7FDF0)

inline static constexpr unsigned int Class_2_2C340B7D0D120245_TypeDefinitionIndex = 58473;

class Class_2_2C340B7D0D120245 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* HDEJLOJHPKI; // 0x18
	::RPG::GameCore::PropFastDeliverPuzzleListener* OFKGLJOAMLD; // 0x20
	::Class_3_07C3C4D2990C49EE* IFJOGBLAMMP; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::Class_3_07C3C4D2990C49EE* CMJBFFCEDLP; // 0x38
	::RPG::Client::Prop::FastDeliverPuzzleBoard* MIPPNCGOJNM; // 0x40
	::Class_3_07C3C4D2990C49EE* GJCBMPAKDDM; // 0x48
	::System::Boolean EJCOEELJCND; // 0x50
	::System::Boolean CKLAIGGKPGP; // 0x51
	::System::Boolean PLIPGMBIFOG; // 0x52
	::System::Boolean CJLAFBMOPEJ; // 0x53

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropFastDeliverPuzzleListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropFastDeliverPuzzleListener*))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_2_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_3_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_TICK_OFFSET))(this, a1);
	}
};
