#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_30.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_91;

#define CLASS_1_E118EE306E6A0AB4_METHOD_1_1B5DC4A248A4FA9D_OFFSET UNITYSDK_OFFSET(0x1ABC53A0)
#define CLASS_1_E118EE306E6A0AB4_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x1ABC8BB0)
#define CLASS_1_E118EE306E6A0AB4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABC8B60)
#define CLASS_1_E118EE306E6A0AB4__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABC8DB0)

inline static constexpr unsigned int Class_1_E118EE306E6A0AB4_TypeDefinitionIndex = 32326;

class Class_1_E118EE306E6A0AB4 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_91*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_91*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E118EE306E6A0AB4_TypeDefinitionIndex)->GetStaticField(0x25C00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E118EE306E6A0AB4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E118EE306E6A0AB4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E118EE306E6A0AB4_METHOD_1_F978A1D172468895_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_91* Method_1_1B5DC4A248A4FA9D(::Enum_3_4608E37A1B3D374A_30 a1)
	{
		return ((::Class_0_16E4307DCC419505_91*(*)(::Enum_3_4608E37A1B3D374A_30))((::PBYTE)hIl2Cpp + CLASS_1_E118EE306E6A0AB4_METHOD_1_1B5DC4A248A4FA9D_OFFSET))(a1);
	}
};
