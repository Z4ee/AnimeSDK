#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5AB62CC86DC28D71_METHOD_2_64222F31ABB799DC_OFFSET UNITYSDK_OFFSET(0x17D631F0)
#define CLASS_2_5AB62CC86DC28D71_METHOD_2_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x17D63000)
#define CLASS_2_5AB62CC86DC28D71_METHOD_2_762A9412773049BE_1_OFFSET UNITYSDK_OFFSET(0x17D63630)
#define CLASS_2_5AB62CC86DC28D71_METHOD_2_762A9412773049BE_OFFSET UNITYSDK_OFFSET(0x17D63430)
#define CLASS_2_5AB62CC86DC28D71__CTOR_OFFSET UNITYSDK_OFFSET(0x17D62E80)

inline static constexpr unsigned int Class_2_5AB62CC86DC28D71_TypeDefinitionIndex = 73964;

class Class_2_5AB62CC86DC28D71 : public ::Class_1_F65B6F8790DF074B
{
public:
	::System::Collections::Generic::List_1<::Class_1_F65B6F8790DF074B*>* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_5AB62CC86DC28D71__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AB62CC86DC28D71_METHOD_2_7223CD34BEFCBF48_OFFSET))(this);
	}

	::System::Void Method_2_64222F31ABB799DC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5AB62CC86DC28D71_METHOD_2_64222F31ABB799DC_OFFSET))(this, a1);
	}

	::System::Void Method_2_762A9412773049BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AB62CC86DC28D71_METHOD_2_762A9412773049BE_OFFSET))(this);
	}

	::System::Void Method_2_762A9412773049BE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AB62CC86DC28D71_METHOD_2_762A9412773049BE_1_OFFSET))(this);
	}
};
