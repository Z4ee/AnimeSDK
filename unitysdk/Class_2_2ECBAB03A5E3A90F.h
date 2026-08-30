#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_023C175BBB7E6D29.h"

class Class_1_E38D48D6A33D0614;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2ECBAB03A5E3A90F_METHOD_2_13135F1111DFADD3_OFFSET UNITYSDK_OFFSET(0x1C2937B0)
#define CLASS_2_2ECBAB03A5E3A90F_METHOD_2_DEA6ACF0B96986BD_OFFSET UNITYSDK_OFFSET(0x1C293660)
#define CLASS_2_2ECBAB03A5E3A90F_METHOD_2_E30C1CC3BF2357EB_OFFSET UNITYSDK_OFFSET(0x1C293F30)
#define CLASS_2_2ECBAB03A5E3A90F_TICK_OFFSET UNITYSDK_OFFSET(0x1C293C30)
#define CLASS_2_2ECBAB03A5E3A90F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C293600)

inline static constexpr unsigned int Class_2_2ECBAB03A5E3A90F_TypeDefinitionIndex = 36659;

class Class_2_2ECBAB03A5E3A90F : public ::Class_1_023C175BBB7E6D29
{
public:
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::GameCore::CakeRaceActionBase*, ::System::UInt64>*>* MEBHIJOEDHP; // 0x28
	::System::Int32 PPENONBJDFO; // 0x30
	::System::UInt64 ACEPCNAKOEH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECBAB03A5E3A90F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_DEA6ACF0B96986BD(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_2ECBAB03A5E3A90F_METHOD_2_DEA6ACF0B96986BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_13135F1111DFADD3(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_2ECBAB03A5E3A90F_METHOD_2_13135F1111DFADD3_OFFSET))(this, a1);
	}

	::System::Void Tick(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_2ECBAB03A5E3A90F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E30C1CC3BF2357EB(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_2ECBAB03A5E3A90F_METHOD_2_E30C1CC3BF2357EB_OFFSET))(this, a1);
	}
};
