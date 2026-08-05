#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_34A82ADD3D230E95;

#define CLASS_1_C0935E45D11504F7_METHOD_1_45C76F52F6473DEF_OFFSET UNITYSDK_OFFSET(0x10F65460)
#define CLASS_1_C0935E45D11504F7_METHOD_1_826C748D57143BE6_OFFSET UNITYSDK_OFFSET(0x10F65550)
#define CLASS_1_C0935E45D11504F7__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F65510)
#define CLASS_1_C0935E45D11504F7__CTOR_OFFSET UNITYSDK_OFFSET(0x10F65500)

inline static constexpr unsigned int Class_1_C0935E45D11504F7_TypeDefinitionIndex = 57022;

class Class_1_C0935E45D11504F7 : public ::System::Object
{
public:
	static ::Class_1_C0935E45D11504F7** StaticGet_Field_1_0()
	{
		return (::Class_1_C0935E45D11504F7**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0935E45D11504F7_TypeDefinitionIndex)->GetStaticField(0x315D0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0935E45D11504F7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0935E45D11504F7__CCTOR_OFFSET))();
	}

	::Class_1_34A82ADD3D230E95* Method_1_45C76F52F6473DEF(::System::Int32 a1)
	{
		return ((::Class_1_34A82ADD3D230E95*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C0935E45D11504F7_METHOD_1_45C76F52F6473DEF_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_826C748D57143BE6(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C0935E45D11504F7_METHOD_1_826C748D57143BE6_OFFSET))(a1);
	}
};
