#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FD31E4216DD30F97;

#define CLASS_2_4CD221E5A917D3C2_CLASS_1_B300BDBB8C5E6B03_COMPARE_OFFSET UNITYSDK_OFFSET(0x14418F40)
#define CLASS_2_4CD221E5A917D3C2_CLASS_1_B300BDBB8C5E6B03__CCTOR_OFFSET UNITYSDK_OFFSET(0x14419030)
#define CLASS_2_4CD221E5A917D3C2_CLASS_1_B300BDBB8C5E6B03__CTOR_OFFSET UNITYSDK_OFFSET(0x14419020)

inline static constexpr unsigned int Class_2_4CD221E5A917D3C2_Class_1_B300BDBB8C5E6B03_TypeDefinitionIndex = 73531;

class Class_2_4CD221E5A917D3C2_Class_1_B300BDBB8C5E6B03 : public ::System::Object
{
public:
	static ::Class_2_4CD221E5A917D3C2_Class_1_B300BDBB8C5E6B03** StaticGet_Field_1_0()
	{
		return (::Class_2_4CD221E5A917D3C2_Class_1_B300BDBB8C5E6B03**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4CD221E5A917D3C2_Class_1_B300BDBB8C5E6B03_TypeDefinitionIndex)->GetStaticField(0x2D530);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2_CLASS_1_B300BDBB8C5E6B03__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2_CLASS_1_B300BDBB8C5E6B03__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::Class_1_FD31E4216DD30F97* a1, ::Class_1_FD31E4216DD30F97* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FD31E4216DD30F97*, ::Class_1_FD31E4216DD30F97*))((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2_CLASS_1_B300BDBB8C5E6B03_COMPARE_OFFSET))(this, a1, a2);
	}
};
