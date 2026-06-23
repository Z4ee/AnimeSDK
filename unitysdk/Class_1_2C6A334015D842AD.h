#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_28.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_129;

#define CLASS_1_2C6A334015D842AD_METHOD_1_1B5DC4A248A4FA9D_OFFSET UNITYSDK_OFFSET(0x1CF73720)
#define CLASS_1_2C6A334015D842AD_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x1CF73510)
#define CLASS_1_2C6A334015D842AD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF734C0)
#define CLASS_1_2C6A334015D842AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF73710)

inline static constexpr unsigned int Class_1_2C6A334015D842AD_TypeDefinitionIndex = 33917;

class Class_1_2C6A334015D842AD : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_129*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_129*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C6A334015D842AD_TypeDefinitionIndex)->GetStaticField(0x27600);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C6A334015D842AD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6A334015D842AD__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_129* Method_1_1B5DC4A248A4FA9D(::Enum_3_4608E37A1B3D374A_28 a1)
	{
		return ((::Class_0_16E4307DCC419505_129*(*)(::Enum_3_4608E37A1B3D374A_28))((::PBYTE)hIl2Cpp + CLASS_1_2C6A334015D842AD_METHOD_1_1B5DC4A248A4FA9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C6A334015D842AD_METHOD_1_F978A1D172468895_OFFSET))();
	}
};
