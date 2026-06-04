#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8A37F0A1B3D53FED;

#define CLASS_1_8A37F0A1B3D53FED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A181000)
#define CLASS_1_8A37F0A1B3D53FED___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A181040)
#define CLASS_1_8A37F0A1B3D53FED___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1A181050)

inline static constexpr unsigned int Class_1_8A37F0A1B3D53FED___c_TypeDefinitionIndex = 30000;

class Class_1_8A37F0A1B3D53FED___c : public ::System::Object
{
public:
	static ::Class_1_8A37F0A1B3D53FED___c** StaticGet___9()
	{
		return (::Class_1_8A37F0A1B3D53FED___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A37F0A1B3D53FED___c_TypeDefinitionIndex)->GetStaticField(0x2D930);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A37F0A1B3D53FED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A37F0A1B3D53FED___C__CTOR_OFFSET))(this);
	}

	::Class_1_8A37F0A1B3D53FED* __cctor_b__48_0()
	{
		return ((::Class_1_8A37F0A1B3D53FED*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A37F0A1B3D53FED___C___CCTOR_B__48_0_OFFSET))(this);
	}
};
