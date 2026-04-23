#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class SwitchChallengeTurnLimitType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_86E714D53F8D6B2B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11AE4A00)
#define CLASS_2_86E714D53F8D6B2B_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x11AE4CC0)
#define CLASS_2_86E714D53F8D6B2B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11AE4AF0)
#define CLASS_2_86E714D53F8D6B2B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11AE4D50)
#define CLASS_2_86E714D53F8D6B2B_TICK_OFFSET UNITYSDK_OFFSET(0x11AE4DA0)
#define CLASS_2_86E714D53F8D6B2B__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE4830)

inline static constexpr unsigned int Class_2_86E714D53F8D6B2B_TypeDefinitionIndex = 51340;

class Class_2_86E714D53F8D6B2B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SwitchChallengeTurnLimitType* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_6; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x40
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchChallengeTurnLimitType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchChallengeTurnLimitType*))((::PBYTE)hIl2Cpp + CLASS_2_86E714D53F8D6B2B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86E714D53F8D6B2B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86E714D53F8D6B2B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86E714D53F8D6B2B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_86E714D53F8D6B2B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86E714D53F8D6B2B_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
	}
};
