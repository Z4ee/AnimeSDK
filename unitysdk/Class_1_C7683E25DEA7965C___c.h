#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_13.h"
#include "unitysdk/System/Object.h"

class Class_1_C7683E25DEA7965C;

#define CLASS_1_C7683E25DEA7965C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC38880)
#define CLASS_1_C7683E25DEA7965C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC388B0)
#define CLASS_1_C7683E25DEA7965C___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DC388C0)
#define CLASS_1_C7683E25DEA7965C___C___CCTOR_B__28_1_OFFSET UNITYSDK_OFFSET(0x1DC38910)
#define CLASS_1_C7683E25DEA7965C___C___CCTOR_B__28_2_OFFSET UNITYSDK_OFFSET(0x1DC38920)

inline static constexpr unsigned int Class_1_C7683E25DEA7965C___c_TypeDefinitionIndex = 29852;

class Class_1_C7683E25DEA7965C___c : public ::System::Object
{
public:
	static ::Class_1_C7683E25DEA7965C___c** StaticGet___9()
	{
		return (::Class_1_C7683E25DEA7965C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C7683E25DEA7965C___c_TypeDefinitionIndex)->GetStaticField(0x47CA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C___C__CTOR_OFFSET))(this);
	}

	::Class_1_C7683E25DEA7965C* __cctor_b__28_0()
	{
		return ((::Class_1_C7683E25DEA7965C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C___C___CCTOR_B__28_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__28_1(::Enum_3_71AA90D596A09AC8_13 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_13))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C___C___CCTOR_B__28_1_OFFSET))(this, a1);
	}

	::Enum_3_71AA90D596A09AC8_13 __cctor_b__28_2(::System::Int32 a1)
	{
		return ((::Enum_3_71AA90D596A09AC8_13(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C___C___CCTOR_B__28_2_OFFSET))(this, a1);
	}
};
