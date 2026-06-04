#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B580814017FF0844;

#define CLASS_1_B580814017FF0844___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A581E60)
#define CLASS_1_B580814017FF0844___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A581EA0)
#define CLASS_1_B580814017FF0844___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1A581EB0)

inline static constexpr unsigned int Class_1_B580814017FF0844___c_TypeDefinitionIndex = 23940;

class Class_1_B580814017FF0844___c : public ::System::Object
{
public:
	static ::Class_1_B580814017FF0844___c** StaticGet___9()
	{
		return (::Class_1_B580814017FF0844___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B580814017FF0844___c_TypeDefinitionIndex)->GetStaticField(0x15B80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B580814017FF0844___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B580814017FF0844___C__CTOR_OFFSET))(this);
	}

	::Class_1_B580814017FF0844* __cctor_b__43_0()
	{
		return ((::Class_1_B580814017FF0844*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B580814017FF0844___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
