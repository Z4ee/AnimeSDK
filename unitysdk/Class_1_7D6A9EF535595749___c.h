#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

class Class_1_7D6A9EF535595749;

#define CLASS_1_7D6A9EF535595749___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E957AA0)
#define CLASS_1_7D6A9EF535595749___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E957AE0)
#define CLASS_1_7D6A9EF535595749___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E957AF0)
#define CLASS_1_7D6A9EF535595749___C___CCTOR_B__23_1_OFFSET UNITYSDK_OFFSET(0x1E957B50)
#define CLASS_1_7D6A9EF535595749___C___CCTOR_B__23_2_OFFSET UNITYSDK_OFFSET(0x1E957B60)

inline static constexpr unsigned int Class_1_7D6A9EF535595749___c_TypeDefinitionIndex = 25997;

class Class_1_7D6A9EF535595749___c : public ::System::Object
{
public:
	static ::Class_1_7D6A9EF535595749___c** StaticGet___9()
	{
		return (::Class_1_7D6A9EF535595749___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D6A9EF535595749___c_TypeDefinitionIndex)->GetStaticField(0x3B380);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749___C__CTOR_OFFSET))(this);
	}

	::Class_1_7D6A9EF535595749* __cctor_b__23_0()
	{
		return ((::Class_1_7D6A9EF535595749*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749___C___CCTOR_B__23_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__23_1(::Enum_3_DFCB42601400F441 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749___C___CCTOR_B__23_1_OFFSET))(this, a1);
	}

	::Enum_3_DFCB42601400F441 __cctor_b__23_2(::System::Int32 a1)
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749___C___CCTOR_B__23_2_OFFSET))(this, a1);
	}
};
