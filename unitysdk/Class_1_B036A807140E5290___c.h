#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_B036A807140E5290___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C563BC0)
#define CLASS_1_B036A807140E5290___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C563C00)
#define CLASS_1_B036A807140E5290___C___TRYCREATECHIPSPREDICATETRACKER_B__2_0_OFFSET UNITYSDK_OFFSET(0x1C563C10)

inline static constexpr unsigned int Class_1_B036A807140E5290___c_TypeDefinitionIndex = 41836;

class Class_1_B036A807140E5290___c : public ::System::Object
{
public:
	static ::Class_1_B036A807140E5290___c** StaticGet___9()
	{
		return (::Class_1_B036A807140E5290___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B036A807140E5290___c_TypeDefinitionIndex)->GetStaticField(0x181B0);
	}
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B036A807140E5290___c_TypeDefinitionIndex)->GetStaticField(0x181B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B036A807140E5290___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B036A807140E5290___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __TryCreateChipsPredicateTracker_b__2_0(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B036A807140E5290___C___TRYCREATECHIPSPREDICATETRACKER_B__2_0_OFFSET))(this, a1);
	}
};
