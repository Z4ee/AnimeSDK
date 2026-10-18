#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_547;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRelayFlameEventListener; }

#define CLASS_2_753B893C49AF40A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB400860)
#define CLASS_2_753B893C49AF40A3_METHOD_2_6BD012F436E1844D_OFFSET UNITYSDK_OFFSET(0xB401260)
#define CLASS_2_753B893C49AF40A3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB400710)
#define CLASS_2_753B893C49AF40A3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB400810)
#define CLASS_2_753B893C49AF40A3_TICK_OFFSET UNITYSDK_OFFSET(0xB401600)
#define CLASS_2_753B893C49AF40A3__CTOR_OFFSET UNITYSDK_OFFSET(0xB400000)

inline static constexpr unsigned int Class_2_753B893C49AF40A3_TypeDefinitionIndex = 53356;

class Class_2_753B893C49AF40A3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* CIBOCBFMHEJ; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
	::Class_3_07C3C4D2990C49EE* FOGNBAADCOB; // 0x28
	::Class_3_07C3C4D2990C49EE* DDOEBMJIBEN; // 0x30
	::Class_3_07C3C4D2990C49EE* MKPIFOMFJGJ; // 0x38
	::Class_3_07C3C4D2990C49EE* CAEONMABCBB; // 0x40
	::RPG::GameCore::TimeRelayFlameEventListener* IGHAHBNLIJA; // 0x48
	::Class_3_07C3C4D2990C49EE* CIFOILLJFNF; // 0x50
	::Class_3_07C3C4D2990C49EE* MAHALGGJLLP; // 0x58
	::Class_3_07C3C4D2990C49EE* JAKNDHHOCJE; // 0x60
	::Class_3_07C3C4D2990C49EE* KOBFEAIJGNB; // 0x68
	::Class_3_07C3C4D2990C49EE* NNPHIIPBDEB; // 0x70
	::Class_3_07C3C4D2990C49EE* CNMJAPLJIBO; // 0x78
	::Class_3_07C3C4D2990C49EE* IKEJBGEFCNM; // 0x80
	::Class_3_07C3C4D2990C49EE* HEPJFMELDPH; // 0x88
	::Class_3_07C3C4D2990C49EE* HPLBDKOOBEG; // 0x90
	::Class_3_07C3C4D2990C49EE* DFCFCKLOAHM; // 0x98
	::Class_3_07C3C4D2990C49EE* PAOJOBEPBIO; // 0xA0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRelayFlameEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRelayFlameEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6BD012F436E1844D(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_METHOD_2_6BD012F436E1844D_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_TICK_OFFSET))(this, a1);
	}
};
