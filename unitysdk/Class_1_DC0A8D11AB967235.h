#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/AfterExecOperation.h"
#include "unitysdk/System/Object.h"

class Class_1_E3144EBBA3CB68CA;

#define CLASS_1_DC0A8D11AB967235_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14E96F80)
#define CLASS_1_DC0A8D11AB967235_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0x14E96F00)
#define CLASS_1_DC0A8D11AB967235_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x14E96FE0)
#define CLASS_1_DC0A8D11AB967235_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x14E96EF0)
#define CLASS_1_DC0A8D11AB967235_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14E97030)
#define CLASS_1_DC0A8D11AB967235_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14E96F70)
#define CLASS_1_DC0A8D11AB967235__CTOR_OFFSET UNITYSDK_OFFSET(0x14E97080)

inline static constexpr unsigned int Class_1_DC0A8D11AB967235_TypeDefinitionIndex = 47267;

class Class_1_DC0A8D11AB967235 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC0A8D11AB967235_TypeDefinitionIndex)->GetStaticField(0x14A50);
	}
	::System::Single Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x14
	::System::Boolean Field_1_3; // 0x15
	::System::Boolean Field_1_4; // 0x16
	::System::Single Field_1_5; // 0x18
	::System::Int32 Field_1_6; // 0x1C
	::System::Single Field_1_7; // 0x20
	::System::Int32 Field_1_8; // 0x24
	::System::Int32 Field_1_9; // 0x28
	::System::Single Field_1_10; // 0x2C
	::System::Single Field_1_11; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC0A8D11AB967235__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC0A8D11AB967235_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC0A8D11AB967235_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC0A8D11AB967235_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC0A8D11AB967235_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC0A8D11AB967235_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC0A8D11AB967235_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
