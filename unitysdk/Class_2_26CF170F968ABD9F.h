#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class AchievementWaitTime; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_26CF170F968ABD9F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF3F65E0)
#define CLASS_2_26CF170F968ABD9F_METHOD_2_84A9358A026DA23C_OFFSET UNITYSDK_OFFSET(0xF3F6930)
#define CLASS_2_26CF170F968ABD9F_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xF3F6660)
#define CLASS_2_26CF170F968ABD9F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF3F6BF0)
#define CLASS_2_26CF170F968ABD9F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF3F66B0)
#define CLASS_2_26CF170F968ABD9F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF3F6790)
#define CLASS_2_26CF170F968ABD9F_TICK_OFFSET UNITYSDK_OFFSET(0xF3F6810)
#define CLASS_2_26CF170F968ABD9F__CTOR_OFFSET UNITYSDK_OFFSET(0xF3F65D0)

inline static constexpr unsigned int Class_2_26CF170F968ABD9F_TypeDefinitionIndex = 58002;

class Class_2_26CF170F968ABD9F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AchievementWaitTime* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
	::System::Single LLNIGIGFCEA; // 0x28
	::System::Boolean LCFDCKKNNFO; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AchievementWaitTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AchievementWaitTime*))((::PBYTE)hIl2Cpp + CLASS_2_26CF170F968ABD9F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26CF170F968ABD9F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26CF170F968ABD9F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26CF170F968ABD9F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_26CF170F968ABD9F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_84A9358A026DA23C(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_26CF170F968ABD9F_METHOD_2_84A9358A026DA23C_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26CF170F968ABD9F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26CF170F968ABD9F_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
