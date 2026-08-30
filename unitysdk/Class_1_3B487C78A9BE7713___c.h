#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"

class Class_1_3B487C78A9BE7713;

#define CLASS_1_3B487C78A9BE7713___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE0B400)
#define CLASS_1_3B487C78A9BE7713___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE0B430)
#define CLASS_1_3B487C78A9BE7713___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE0B440)
#define CLASS_1_3B487C78A9BE7713___C___CCTOR_B__23_1_OFFSET UNITYSDK_OFFSET(0x1DE0B490)
#define CLASS_1_3B487C78A9BE7713___C___CCTOR_B__23_2_OFFSET UNITYSDK_OFFSET(0x1DE0B4A0)

inline static constexpr unsigned int Class_1_3B487C78A9BE7713___c_TypeDefinitionIndex = 30715;

class Class_1_3B487C78A9BE7713___c : public ::System::Object
{
public:
	static ::Class_1_3B487C78A9BE7713___c** StaticGet___9()
	{
		return (::Class_1_3B487C78A9BE7713___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B487C78A9BE7713___c_TypeDefinitionIndex)->GetStaticField(0x26C00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713___C__CTOR_OFFSET))(this);
	}

	::Class_1_3B487C78A9BE7713* __cctor_b__23_0()
	{
		return ((::Class_1_3B487C78A9BE7713*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713___C___CCTOR_B__23_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__23_1(::Enum_3_01618AD0437C8486_2 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713___C___CCTOR_B__23_1_OFFSET))(this, a1);
	}

	::Enum_3_01618AD0437C8486_2 __cctor_b__23_2(::System::Int32 a1)
	{
		return ((::Enum_3_01618AD0437C8486_2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713___C___CCTOR_B__23_2_OFFSET))(this, a1);
	}
};
