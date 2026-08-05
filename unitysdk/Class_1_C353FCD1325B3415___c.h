#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ReplayChangeEvent;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_C353FCD1325B3415___C_METHOD_1_7B862101E50E306F_OFFSET UNITYSDK_OFFSET(0x1D9237B0)
#define CLASS_1_C353FCD1325B3415___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D923760)
#define CLASS_1_C353FCD1325B3415___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9237A0)

inline static constexpr unsigned int Class_1_C353FCD1325B3415___c_TypeDefinitionIndex = 35227;

class Class_1_C353FCD1325B3415___c : public ::System::Object
{
public:
	static ::Class_1_C353FCD1325B3415___c** StaticGet___9()
	{
		return (::Class_1_C353FCD1325B3415___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C353FCD1325B3415___c_TypeDefinitionIndex)->GetStaticField(0x29430);
	}
	static ::System::Func_2<::ReplayChangeEvent*, ::System::Single>** StaticGet___9__24_0()
	{
		return (::System::Func_2<::ReplayChangeEvent*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C353FCD1325B3415___c_TypeDefinitionIndex)->GetStaticField(0x29438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415___C__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_7B862101E50E306F(::ReplayChangeEvent* a1)
	{
		return ((::System::Single(*)(::PVOID, ::ReplayChangeEvent*))((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415___C_METHOD_1_7B862101E50E306F_OFFSET))(this, a1);
	}
};
