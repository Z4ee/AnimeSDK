#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A2B08D4D02E08702___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B31900)
#define CLASS_2_A2B08D4D02E08702___C__DISPLAYCLASS1_0__ENTERIMPL_B__0_OFFSET UNITYSDK_OFFSET(0x18B31C40)

inline static constexpr unsigned int Class_2_A2B08D4D02E08702___c__DisplayClass1_0_TypeDefinitionIndex = 35020;

class Class_2_A2B08D4D02E08702___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceActionBase*>* actionConfigs; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2B08D4D02E08702___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _EnterImpl_b__0(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_A2B08D4D02E08702___C__DISPLAYCLASS1_0__ENTERIMPL_B__0_OFFSET))(this, a1);
	}
};
