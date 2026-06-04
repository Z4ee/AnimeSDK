#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_331;
class Class_2_22B3B6D2E353EAD3;
class Class_2_B5C26CAF86EF077B;

#define CLASS_1_BAB0470270F5B369_METHOD_1_17F704D3311F84DA_OFFSET UNITYSDK_OFFSET(0xA482710)
#define CLASS_1_BAB0470270F5B369_METHOD_1_DFDC8B0EF9883FD8_OFFSET UNITYSDK_OFFSET(0xA482660)
#define CLASS_1_BAB0470270F5B369_METHOD_1_FE65F1EFD74E3E99_OFFSET UNITYSDK_OFFSET(0xA482790)
#define CLASS_1_BAB0470270F5B369__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4828E0)

inline static constexpr unsigned int Class_1_BAB0470270F5B369_TypeDefinitionIndex = 46387;

class Class_1_BAB0470270F5B369 : public ::System::Object
{
public:
	static ::Class_2_B5C26CAF86EF077B** StaticGet_Field_1_0()
	{
		return (::Class_2_B5C26CAF86EF077B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BAB0470270F5B369_TypeDefinitionIndex)->GetStaticField(0x5B8A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BAB0470270F5B369__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_DFDC8B0EF9883FD8()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_BAB0470270F5B369_METHOD_1_DFDC8B0EF9883FD8_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_331* Method_1_17F704D3311F84DA()
	{
		return ((::Class_0_16E4307DCC419505_331*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BAB0470270F5B369_METHOD_1_17F704D3311F84DA_OFFSET))();
	}

	static ::System::Void Method_1_FE65F1EFD74E3E99(::Class_2_22B3B6D2E353EAD3* a1)
	{
		return ((::System::Void(*)(::Class_2_22B3B6D2E353EAD3*))((::PBYTE)hIl2Cpp + CLASS_1_BAB0470270F5B369_METHOD_1_FE65F1EFD74E3E99_OFFSET))(a1);
	}
};
