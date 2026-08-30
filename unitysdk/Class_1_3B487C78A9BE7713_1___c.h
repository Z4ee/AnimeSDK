#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_25.h"
#include "unitysdk/System/Object.h"

class Class_1_3B487C78A9BE7713_1;

#define CLASS_1_3B487C78A9BE7713_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC68510)
#define CLASS_1_3B487C78A9BE7713_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC68540)
#define CLASS_1_3B487C78A9BE7713_1___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EC68550)
#define CLASS_1_3B487C78A9BE7713_1___C___CCTOR_B__23_1_OFFSET UNITYSDK_OFFSET(0x1EC685A0)
#define CLASS_1_3B487C78A9BE7713_1___C___CCTOR_B__23_2_OFFSET UNITYSDK_OFFSET(0x1EC685B0)

inline static constexpr unsigned int Class_1_3B487C78A9BE7713_1___c_TypeDefinitionIndex = 32589;

class Class_1_3B487C78A9BE7713_1___c : public ::System::Object
{
public:
	static ::Class_1_3B487C78A9BE7713_1___c** StaticGet___9()
	{
		return (::Class_1_3B487C78A9BE7713_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B487C78A9BE7713_1___c_TypeDefinitionIndex)->GetStaticField(0x3C790);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1___C__CTOR_OFFSET))(this);
	}

	::Class_1_3B487C78A9BE7713_1* __cctor_b__23_0()
	{
		return ((::Class_1_3B487C78A9BE7713_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1___C___CCTOR_B__23_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__23_1(::Enum_3_96F6662CA3713095_25 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_96F6662CA3713095_25))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1___C___CCTOR_B__23_1_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_25 __cctor_b__23_2(::System::Int32 a1)
	{
		return ((::Enum_3_96F6662CA3713095_25(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1___C___CCTOR_B__23_2_OFFSET))(this, a1);
	}
};
