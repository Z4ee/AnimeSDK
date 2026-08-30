#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_601E28DDAD29598D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE02D910)
#define CLASS_3_601E28DDAD29598D___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE02D950)
#define CLASS_3_601E28DDAD29598D___C__EVALUATE_B__1_0_OFFSET UNITYSDK_OFFSET(0xE02D960)

inline static constexpr unsigned int Class_3_601E28DDAD29598D___c_TypeDefinitionIndex = 52927;

class Class_3_601E28DDAD29598D___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_601E28DDAD29598D___c_TypeDefinitionIndex)->GetStaticField(0x66F00);
	}
	static ::Class_3_601E28DDAD29598D___c** StaticGet___9()
	{
		return (::Class_3_601E28DDAD29598D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_601E28DDAD29598D___c_TypeDefinitionIndex)->GetStaticField(0x66F08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_601E28DDAD29598D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_601E28DDAD29598D___C__CTOR_OFFSET))(this);
	}

	::System::Single _Evaluate_b__1_0(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_601E28DDAD29598D___C__EVALUATE_B__1_0_OFFSET))(this, a1);
	}
};
