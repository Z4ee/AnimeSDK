#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A48F3719AA1CF200_5;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowTutorialGuide; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_048ECC70281F0E52_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142DCD50)
#define CLASS_2_048ECC70281F0E52_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x142DD470)
#define CLASS_2_048ECC70281F0E52_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x142DD540)
#define CLASS_2_048ECC70281F0E52_METHOD_2_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x142DCDE0)
#define CLASS_2_048ECC70281F0E52_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x142DCD90)
#define CLASS_2_048ECC70281F0E52_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x142DD3C0)
#define CLASS_2_048ECC70281F0E52_TICK_OFFSET UNITYSDK_OFFSET(0x142DD410)
#define CLASS_2_048ECC70281F0E52__CTOR_OFFSET UNITYSDK_OFFSET(0x142DCD40)
#define CLASS_2_048ECC70281F0E52___SHOWTUTORIALGUIDE_B__5_0_OFFSET UNITYSDK_OFFSET(0x142DD590)

inline static constexpr unsigned int Class_2_048ECC70281F0E52_TypeDefinitionIndex = 54843;

class Class_2_048ECC70281F0E52 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x20
	::RPG::Client::LuaUIController* Field_2_2; // 0x28
	::RPG::GameCore::ShowTutorialGuide* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTutorialGuide* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTutorialGuide*))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52_METHOD_2_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_5*))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void __ShowTutorialGuide_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52___SHOWTUTORIALGUIDE_B__5_0_OFFSET))(this);
	}
};
