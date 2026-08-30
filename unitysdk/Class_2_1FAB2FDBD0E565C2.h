#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::Client { class QteCatchGhostRewindInstance; }
namespace RPG::GameCore { class QteCatchGhostRewind; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1FAB2FDBD0E565C2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7CCC90)
#define CLASS_2_1FAB2FDBD0E565C2_METHOD_2_120D7C5085CC5C86_OFFSET UNITYSDK_OFFSET(0xB7CD210)
#define CLASS_2_1FAB2FDBD0E565C2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7CCDA0)
#define CLASS_2_1FAB2FDBD0E565C2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7CD3B0)
#define CLASS_2_1FAB2FDBD0E565C2_TICK_OFFSET UNITYSDK_OFFSET(0xB7CD400)
#define CLASS_2_1FAB2FDBD0E565C2__CTOR_OFFSET UNITYSDK_OFFSET(0xB7CCC20)

inline static constexpr unsigned int Class_2_1FAB2FDBD0E565C2_TypeDefinitionIndex = 53447;

class Class_2_1FAB2FDBD0E565C2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::QteCatchGhostRewind* OFKGLJOAMLD; // 0x18
	::RPG::Client::QteCatchGhostRewindInstance* FLMODBLFAGD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::QteCatchGhostRewind* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::QteCatchGhostRewind*))((::PBYTE)hIl2Cpp + CLASS_2_1FAB2FDBD0E565C2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FAB2FDBD0E565C2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FAB2FDBD0E565C2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_120D7C5085CC5C86(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_1FAB2FDBD0E565C2_METHOD_2_120D7C5085CC5C86_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FAB2FDBD0E565C2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1FAB2FDBD0E565C2_TICK_OFFSET))(this, a1);
	}
};
