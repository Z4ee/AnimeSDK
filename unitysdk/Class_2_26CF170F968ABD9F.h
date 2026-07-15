#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class AchievementWaitTime; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_26CF170F968ABD9F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16FB53B0)
#define CLASS_2_26CF170F968ABD9F_METHOD_2_84A9358A026DA23C_OFFSET UNITYSDK_OFFSET(0x16FB5700)
#define CLASS_2_26CF170F968ABD9F_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16FB5430)
#define CLASS_2_26CF170F968ABD9F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16FB59C0)
#define CLASS_2_26CF170F968ABD9F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16FB5480)
#define CLASS_2_26CF170F968ABD9F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16FB5560)
#define CLASS_2_26CF170F968ABD9F_TICK_OFFSET UNITYSDK_OFFSET(0x16FB55E0)
#define CLASS_2_26CF170F968ABD9F__CTOR_OFFSET UNITYSDK_OFFSET(0x16FB53A0)

inline static constexpr unsigned int Class_2_26CF170F968ABD9F_TypeDefinitionIndex = 55278;

class Class_2_26CF170F968ABD9F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AchievementWaitTime* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x2C

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

	::System::Void Method_2_84A9358A026DA23C(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_26CF170F968ABD9F_METHOD_2_84A9358A026DA23C_OFFSET))(this, a1);
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
