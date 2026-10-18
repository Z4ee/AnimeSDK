#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DF42E136544C98;
class Class_2_B28AAD03E01DF611;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F28D19080120B73F___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFEC59E0)
#define CLASS_2_F28D19080120B73F___C__DISPLAYCLASS62_0___SETUPMODIFIERHINTS_B__0_OFFSET UNITYSDK_OFFSET(0xFEC7400)
#define CLASS_2_F28D19080120B73F___C__DISPLAYCLASS62_0___SETUPMODIFIERHINTS_B__2_OFFSET UNITYSDK_OFFSET(0xFEC7550)

inline static constexpr unsigned int Class_2_F28D19080120B73F___c__DisplayClass62_0_TypeDefinitionIndex = 71318;

class Class_2_F28D19080120B73F___c__DisplayClass62_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_52DF42E136544C98*>* displayData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetupModifierHints_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F___C__DISPLAYCLASS62_0___SETUPMODIFIERHINTS_B__0_OFFSET))(this, a1);
	}

	::System::Void __SetupModifierHints_b__2(::Class_2_B28AAD03E01DF611* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B28AAD03E01DF611*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F___C__DISPLAYCLASS62_0___SETUPMODIFIERHINTS_B__2_OFFSET))(this, a1, a2);
	}
};
