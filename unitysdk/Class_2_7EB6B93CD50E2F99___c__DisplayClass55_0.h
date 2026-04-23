#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DF42E136544C98;
class Class_2_37D655FAABC4D43A;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96F8670)
#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_0___SETUPMODIFIERHINTS_B__0_OFFSET UNITYSDK_OFFSET(0x96F9D90)
#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_0___SETUPMODIFIERHINTS_B__2_OFFSET UNITYSDK_OFFSET(0x96F9ED0)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c__DisplayClass55_0_TypeDefinitionIndex = 65732;

class Class_2_7EB6B93CD50E2F99___c__DisplayClass55_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_52DF42E136544C98*>* displayData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetupModifierHints_b__0(::RPG::GameCore::TurnBasedModifierInstance* modifier)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_0___SETUPMODIFIERHINTS_B__0_OFFSET))(this, modifier);
	}

	::System::Void __SetupModifierHints_b__2(::Class_2_37D655FAABC4D43A* panel, ::System::Int32 i)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_37D655FAABC4D43A*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_0___SETUPMODIFIERHINTS_B__2_OFFSET))(this, panel, i);
	}
};
