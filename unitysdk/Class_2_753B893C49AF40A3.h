#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRelayFlameEventListener; }

#define CLASS_2_753B893C49AF40A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5C2970)
#define CLASS_2_753B893C49AF40A3_METHOD_2_6BD012F436E1844D_OFFSET UNITYSDK_OFFSET(0xB5C3370)
#define CLASS_2_753B893C49AF40A3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5C2820)
#define CLASS_2_753B893C49AF40A3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5C2920)
#define CLASS_2_753B893C49AF40A3_TICK_OFFSET UNITYSDK_OFFSET(0xB5C3700)
#define CLASS_2_753B893C49AF40A3__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C20E0)

inline static constexpr unsigned int Class_2_753B893C49AF40A3_TypeDefinitionIndex = 53613;

class Class_2_753B893C49AF40A3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* CAEONMABCBB; // 0x18
	::Class_3_07C3C4D2990C49EE* IKEJBGEFCNM; // 0x20
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
	::Class_3_07C3C4D2990C49EE* DDOEBMJIBEN; // 0x30
	::Class_3_07C3C4D2990C49EE* CIBOCBFMHEJ; // 0x38
	::Class_3_07C3C4D2990C49EE* HPLBDKOOBEG; // 0x40
	::Class_3_07C3C4D2990C49EE* NNPHIIPBDEB; // 0x48
	::Class_3_07C3C4D2990C49EE* FOGNBAADCOB; // 0x50
	::Class_3_07C3C4D2990C49EE* CIFOILLJFNF; // 0x58
	::Class_3_07C3C4D2990C49EE* PAOJOBEPBIO; // 0x60
	::Class_3_07C3C4D2990C49EE* DFCFCKLOAHM; // 0x68
	::Class_3_07C3C4D2990C49EE* CNMJAPLJIBO; // 0x70
	::Class_3_07C3C4D2990C49EE* HEPJFMELDPH; // 0x78
	::Class_3_07C3C4D2990C49EE* MKPIFOMFJGJ; // 0x80
	::Class_3_07C3C4D2990C49EE* KOBFEAIJGNB; // 0x88
	::Class_3_07C3C4D2990C49EE* JAKNDHHOCJE; // 0x90
	::Class_3_07C3C4D2990C49EE* MAHALGGJLLP; // 0x98
	::RPG::GameCore::TimeRelayFlameEventListener* IGHAHBNLIJA; // 0xA0

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

	::System::Void Method_2_6BD012F436E1844D(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_METHOD_2_6BD012F436E1844D_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_TICK_OFFSET))(this, a1);
	}
};
