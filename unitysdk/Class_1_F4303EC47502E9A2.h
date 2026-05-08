#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_99;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F4303EC47502E9A2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A62B230)
#define CLASS_1_F4303EC47502E9A2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A62B340)
#define CLASS_1_F4303EC47502E9A2_METHOD_1_0B9B14028145318F_OFFSET UNITYSDK_OFFSET(0x1A62B330)
#define CLASS_1_F4303EC47502E9A2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A62B430)
#define CLASS_1_F4303EC47502E9A2_METHOD_1_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x1A62B440)
#define CLASS_1_F4303EC47502E9A2_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x1A62B350)
#define CLASS_1_F4303EC47502E9A2_METHOD_1_D68DC7B99E8AF0C1_OFFSET UNITYSDK_OFFSET(0x1A61E250)
#define CLASS_1_F4303EC47502E9A2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A62B320)
#define CLASS_1_F4303EC47502E9A2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62B310)

inline static constexpr unsigned int Class_1_F4303EC47502E9A2_TypeDefinitionIndex = 32964;

class Class_1_F4303EC47502E9A2 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_2()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4303EC47502E9A2_TypeDefinitionIndex)->GetStaticField(0x7FA0);
	}
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_99*>* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_0B9B14028145318F(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_99*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_99*>*))((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2_METHOD_1_0B9B14028145318F_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	static ::Class_1_F4303EC47502E9A2* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_F4303EC47502E9A2*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2_METHOD_1_B64C60973842FE45_OFFSET))();
	}

	::System::Boolean Method_1_D68DC7B99E8AF0C1(::Class_0_16E4307DCC419505_99* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_99*))((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2_METHOD_1_D68DC7B99E8AF0C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_99*>* Method_1_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_99*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2_METHOD_1_969D9516A75501DE_OFFSET))(this);
	}
};
