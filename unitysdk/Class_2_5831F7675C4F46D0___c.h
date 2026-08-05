#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_EEF4E8CAD4E8CF37;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_5831F7675C4F46D0___C_METHOD_1_DD988F7CF3EE9541_OFFSET UNITYSDK_OFFSET(0x12D51480)
#define CLASS_2_5831F7675C4F46D0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D51430)
#define CLASS_2_5831F7675C4F46D0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12D51470)

inline static constexpr unsigned int Class_2_5831F7675C4F46D0___c_TypeDefinitionIndex = 60664;

class Class_2_5831F7675C4F46D0___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_3_EEF4E8CAD4E8CF37*, ::System::Int32>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::Class_3_EEF4E8CAD4E8CF37*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5831F7675C4F46D0___c_TypeDefinitionIndex)->GetStaticField(0x43430);
	}
	static ::Class_2_5831F7675C4F46D0___c** StaticGet___9()
	{
		return (::Class_2_5831F7675C4F46D0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5831F7675C4F46D0___c_TypeDefinitionIndex)->GetStaticField(0x43438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5831F7675C4F46D0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5831F7675C4F46D0___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_DD988F7CF3EE9541(::Class_3_EEF4E8CAD4E8CF37* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_EEF4E8CAD4E8CF37*))((::PBYTE)hIl2Cpp + CLASS_2_5831F7675C4F46D0___C_METHOD_1_DD988F7CF3EE9541_OFFSET))(this, a1);
	}
};
