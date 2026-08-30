#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A48F3719AA1CF200_4;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowTutorialGuide; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_048ECC70281F0E52_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1852A920)
#define CLASS_2_048ECC70281F0E52_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1852B040)
#define CLASS_2_048ECC70281F0E52_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x1852B190)
#define CLASS_2_048ECC70281F0E52_METHOD_2_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x1852A9B0)
#define CLASS_2_048ECC70281F0E52_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1852A960)
#define CLASS_2_048ECC70281F0E52_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1852AF90)
#define CLASS_2_048ECC70281F0E52_TICK_OFFSET UNITYSDK_OFFSET(0x1852AFE0)
#define CLASS_2_048ECC70281F0E52__CTOR_OFFSET UNITYSDK_OFFSET(0x1852A910)
#define CLASS_2_048ECC70281F0E52___SHOWTUTORIALGUIDE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1852B1E0)

inline static constexpr unsigned int Class_2_048ECC70281F0E52_TypeDefinitionIndex = 58849;

class Class_2_048ECC70281F0E52 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowTutorialGuide* OFKGLJOAMLD; // 0x18
	::Class_1_5F51D4049EA87B7B* JLMAKNFAEBH; // 0x20
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30

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

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void __ShowTutorialGuide_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52___SHOWTUTORIALGUIDE_B__5_0_OFFSET))(this);
	}
};
