#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class QteCatchGhostRewindListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_0740205D34A76652_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AEC5D0)
#define CLASS_2_0740205D34A76652_METHOD_2_6BD012F436E1844D_OFFSET UNITYSDK_OFFSET(0x15AECA30)
#define CLASS_2_0740205D34A76652_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AEC270)
#define CLASS_2_0740205D34A76652_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AEC580)
#define CLASS_2_0740205D34A76652_TICK_OFFSET UNITYSDK_OFFSET(0x15AED020)
#define CLASS_2_0740205D34A76652__CTOR_OFFSET UNITYSDK_OFFSET(0x15AEBFC0)

inline static constexpr unsigned int Class_2_0740205D34A76652_TypeDefinitionIndex = 53448;

class Class_2_0740205D34A76652 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* BJHAAFHJOKH; // 0x18
	::Class_3_07C3C4D2990C49EE* MALOFCFGGEF; // 0x20
	::Class_3_07C3C4D2990C49EE* DMKOLLPGHCF; // 0x28
	::Class_3_07C3C4D2990C49EE* KKBPDJDFOEC; // 0x30
	::Class_3_07C3C4D2990C49EE* APCGOOFNNEO; // 0x38
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x40
	::Class_3_07C3C4D2990C49EE* HDPCLBHCDIF; // 0x48
	::RPG::GameCore::QteCatchGhostRewindListener* IGHAHBNLIJA; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::QteCatchGhostRewindListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::QteCatchGhostRewindListener*))((::PBYTE)hIl2Cpp + CLASS_2_0740205D34A76652__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0740205D34A76652_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0740205D34A76652_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0740205D34A76652_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6BD012F436E1844D(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_0740205D34A76652_METHOD_2_6BD012F436E1844D_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0740205D34A76652_TICK_OFFSET))(this, a1);
	}
};
