#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_343;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_677F670C9D764C90___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x129C89B0)
#define CLASS_3_677F670C9D764C90___C__DISPLAYCLASS1_0__EVALUATE_B__0_OFFSET UNITYSDK_OFFSET(0x129C8AE0)

inline static constexpr unsigned int Class_3_677F670C9D764C90___c__DisplayClass1_0_TypeDefinitionIndex = 49582;

class Class_3_677F670C9D764C90___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* results; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_677F670C9D764C90___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _Evaluate_b__0(::Class_0_16E4307DCC419505_343* instance)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_343*))((::PBYTE)hIl2Cpp + CLASS_3_677F670C9D764C90___C__DISPLAYCLASS1_0__EVALUATE_B__0_OFFSET))(this, instance);
	}
};
