#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_725B255633042B08;

#define CLASS_1_725B255633042B08___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1930F830)
#define CLASS_1_725B255633042B08___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1930F860)
#define CLASS_1_725B255633042B08___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1930F870)

inline static constexpr unsigned int Class_1_725B255633042B08___c_TypeDefinitionIndex = 31723;

class Class_1_725B255633042B08___c : public ::System::Object
{
public:
	static ::Class_1_725B255633042B08___c** StaticGet___9()
	{
		return (::Class_1_725B255633042B08___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_725B255633042B08___c_TypeDefinitionIndex)->GetStaticField(0x60170);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_725B255633042B08___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_725B255633042B08___C__CTOR_OFFSET))(this);
	}

	::Class_1_725B255633042B08* __cctor_b__73_0()
	{
		return ((::Class_1_725B255633042B08*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_725B255633042B08___C___CCTOR_B__73_0_OFFSET))(this);
	}
};
