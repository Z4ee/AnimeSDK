#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_375;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class QteCatchGhostRewindListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_0740205D34A76652_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C91F30)
#define CLASS_2_0740205D34A76652_METHOD_2_5F3AE37087DCC4E1_OFFSET UNITYSDK_OFFSET(0x8C920F0)
#define CLASS_2_0740205D34A76652_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C91C70)
#define CLASS_2_0740205D34A76652_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8C91EE0)
#define CLASS_2_0740205D34A76652_TICK_OFFSET UNITYSDK_OFFSET(0x8C92670)
#define CLASS_2_0740205D34A76652__CTOR_OFFSET UNITYSDK_OFFSET(0x8C919C0)

inline static constexpr unsigned int Class_2_0740205D34A76652_TypeDefinitionIndex = 43060;

class Class_2_0740205D34A76652 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_5; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_6; // 0x28
	::RPG::GameCore::QteCatchGhostRewindListener* Field_2_1; // 0x30
	::Class_3_5775A4FEC79026BC* Field_2_7; // 0x38
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x40
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x48
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x50

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

	::System::Void Method_2_5F3AE37087DCC4E1(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_0740205D34A76652_METHOD_2_5F3AE37087DCC4E1_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0740205D34A76652_TICK_OFFSET))(this, a1);
	}
};
