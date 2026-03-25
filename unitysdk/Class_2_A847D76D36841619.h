#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_023C175BBB7E6D29.h"

class Class_1_E38D48D6A33D0614;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A847D76D36841619_METHOD_2_07E0677DC2520E06_OFFSET UNITYSDK_OFFSET(0x165EECA0)
#define CLASS_2_A847D76D36841619_METHOD_2_29D7B27A0AF59547_OFFSET UNITYSDK_OFFSET(0x165EE620)
#define CLASS_2_A847D76D36841619_METHOD_2_DEA6ACF0B96986BD_OFFSET UNITYSDK_OFFSET(0x165EE4C0)
#define CLASS_2_A847D76D36841619_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x165EEE50)
#define CLASS_2_A847D76D36841619_TICK_OFFSET UNITYSDK_OFFSET(0x165EE970)
#define CLASS_2_A847D76D36841619__CTOR_OFFSET UNITYSDK_OFFSET(0x165EE460)
#define CLASS_2_A847D76D36841619___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x165EEEC0)

inline static constexpr unsigned int Class_2_A847D76D36841619_TypeDefinitionIndex = 28999;

class Class_2_A847D76D36841619 : public ::Class_1_023C175BBB7E6D29
{
public:
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::GameCore::CakeRaceActionBase*, ::System::UInt64>*>* Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x30
	::System::UInt64 Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A847D76D36841619__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_DEA6ACF0B96986BD(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_A847D76D36841619_METHOD_2_DEA6ACF0B96986BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_29D7B27A0AF59547(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_A847D76D36841619_METHOD_2_29D7B27A0AF59547_OFFSET))(this, a1);
	}

	::System::Void Tick(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_A847D76D36841619_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_07E0677DC2520E06(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_A847D76D36841619_METHOD_2_07E0677DC2520E06_OFFSET))(this, a1);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_E38D48D6A33D0614* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_A847D76D36841619_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Tick(::Class_1_E38D48D6A33D0614* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_A847D76D36841619___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
