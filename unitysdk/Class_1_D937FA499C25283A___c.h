#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D937FA499C25283A;

#define CLASS_1_D937FA499C25283A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26FE30)
#define CLASS_1_D937FA499C25283A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E26FE60)
#define CLASS_1_D937FA499C25283A___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1E26FE70)

inline static constexpr unsigned int Class_1_D937FA499C25283A___c_TypeDefinitionIndex = 31513;

class Class_1_D937FA499C25283A___c : public ::System::Object
{
public:
	static ::Class_1_D937FA499C25283A___c** StaticGet___9()
	{
		return (::Class_1_D937FA499C25283A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D937FA499C25283A___c_TypeDefinitionIndex)->GetStaticField(0x48C00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D937FA499C25283A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D937FA499C25283A___C__CTOR_OFFSET))(this);
	}

	::Class_1_D937FA499C25283A* __cctor_b__37_0()
	{
		return ((::Class_1_D937FA499C25283A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D937FA499C25283A___C___CCTOR_B__37_0_OFFSET))(this);
	}
};
