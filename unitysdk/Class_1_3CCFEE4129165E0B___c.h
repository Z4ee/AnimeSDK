#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3CCFEE4129165E0B_Struct_2_36FEC202F4CAFB9B.h"
#include "unitysdk/System/Object.h"

class Class_1_5E2D533DC7C7E714;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_3CCFEE4129165E0B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C578080)
#define CLASS_1_3CCFEE4129165E0B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5780C0)
#define CLASS_1_3CCFEE4129165E0B___C__LIFTMANY_B__39_0_OFFSET UNITYSDK_OFFSET(0x1C5780D0)

inline static constexpr unsigned int Class_1_3CCFEE4129165E0B___c_TypeDefinitionIndex = 41794;

class Class_1_3CCFEE4129165E0B___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_5E2D533DC7C7E714*, ::System::Collections::Generic::IEnumerable_1<::Class_1_3CCFEE4129165E0B_Struct_2_36FEC202F4CAFB9B>*>** StaticGet___9__39_0()
	{
		return (::System::Func_2<::Class_1_5E2D533DC7C7E714*, ::System::Collections::Generic::IEnumerable_1<::Class_1_3CCFEE4129165E0B_Struct_2_36FEC202F4CAFB9B>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3CCFEE4129165E0B___c_TypeDefinitionIndex)->GetStaticField(0x18DA0);
	}
	static ::Class_1_3CCFEE4129165E0B___c** StaticGet___9()
	{
		return (::Class_1_3CCFEE4129165E0B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3CCFEE4129165E0B___c_TypeDefinitionIndex)->GetStaticField(0x18DA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3CCFEE4129165E0B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCFEE4129165E0B___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_3CCFEE4129165E0B_Struct_2_36FEC202F4CAFB9B>* _LiftMany_b__39_0(::Class_1_5E2D533DC7C7E714* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_3CCFEE4129165E0B_Struct_2_36FEC202F4CAFB9B>*(*)(::PVOID, ::Class_1_5E2D533DC7C7E714*))((::PBYTE)hIl2Cpp + CLASS_1_3CCFEE4129165E0B___C__LIFTMANY_B__39_0_OFFSET))(this, a1);
	}
};
