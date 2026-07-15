#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_C9031CC092CDCC40___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D0D160)
#define CLASS_2_C9031CC092CDCC40___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16D0D1A0)
#define CLASS_2_C9031CC092CDCC40___C__SETVISIBILITY_B__31_0_OFFSET UNITYSDK_OFFSET(0x16D0D1B0)

inline static constexpr unsigned int Class_2_C9031CC092CDCC40___c_TypeDefinitionIndex = 68498;

class Class_2_C9031CC092CDCC40___c : public ::System::Object
{
public:
	static ::Class_2_C9031CC092CDCC40___c** StaticGet___9()
	{
		return (::Class_2_C9031CC092CDCC40___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9031CC092CDCC40___c_TypeDefinitionIndex)->GetStaticField(0x6B560);
	}
	static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__31_0()
	{
		return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9031CC092CDCC40___c_TypeDefinitionIndex)->GetStaticField(0x6B568);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C9031CC092CDCC40___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9031CC092CDCC40___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _SetVisibility_b__31_0(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C9031CC092CDCC40___C__SETVISIBILITY_B__31_0_OFFSET))(this, a1);
	}
};
