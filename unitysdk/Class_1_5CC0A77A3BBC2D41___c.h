#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5CC0A77A3BBC2D41___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D42660)
#define CLASS_1_5CC0A77A3BBC2D41___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D426A0)
#define CLASS_1_5CC0A77A3BBC2D41___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x17D426B0)
#define CLASS_1_5CC0A77A3BBC2D41___C___CCTOR_B__25_1_OFFSET UNITYSDK_OFFSET(0x17D426C0)

inline static constexpr unsigned int Class_1_5CC0A77A3BBC2D41___c_TypeDefinitionIndex = 22918;

class Class_1_5CC0A77A3BBC2D41___c : public ::System::Object
{
public:
	static ::Class_1_5CC0A77A3BBC2D41___c** StaticGet___9()
	{
		return (::Class_1_5CC0A77A3BBC2D41___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CC0A77A3BBC2D41___c_TypeDefinitionIndex)->GetStaticField(0x12800);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__25_0(::Enum_3_4608E37A1B3D374A x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_4608E37A1B3D374A))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41___C___CCTOR_B__25_0_OFFSET))(this, x);
	}

	::Enum_3_4608E37A1B3D374A __cctor_b__25_1(::System::Int32 x)
	{
		return ((::Enum_3_4608E37A1B3D374A(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41___C___CCTOR_B__25_1_OFFSET))(this, x);
	}
};
