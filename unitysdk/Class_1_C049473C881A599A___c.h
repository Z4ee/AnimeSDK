#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C049473C881A599A;

#define CLASS_1_C049473C881A599A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9536E0)
#define CLASS_1_C049473C881A599A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E953720)
#define CLASS_1_C049473C881A599A___C___CCTOR_B__72_0_OFFSET UNITYSDK_OFFSET(0x1E953730)

inline static constexpr unsigned int Class_1_C049473C881A599A___c_TypeDefinitionIndex = 34412;

class Class_1_C049473C881A599A___c : public ::System::Object
{
public:
	static ::Class_1_C049473C881A599A___c** StaticGet___9()
	{
		return (::Class_1_C049473C881A599A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C049473C881A599A___c_TypeDefinitionIndex)->GetStaticField(0x387D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C049473C881A599A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C049473C881A599A___C__CTOR_OFFSET))(this);
	}

	::Class_1_C049473C881A599A* __cctor_b__72_0()
	{
		return ((::Class_1_C049473C881A599A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C049473C881A599A___C___CCTOR_B__72_0_OFFSET))(this);
	}
};
