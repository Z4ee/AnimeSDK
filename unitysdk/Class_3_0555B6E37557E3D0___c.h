#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_8D3F358F74B0D2BB;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_0555B6E37557E3D0___C_METHOD_1_239DFC7CC74128E3_OFFSET UNITYSDK_OFFSET(0x1BC2B8C0)
#define CLASS_3_0555B6E37557E3D0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC2B870)
#define CLASS_3_0555B6E37557E3D0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC2B8B0)

inline static constexpr unsigned int Class_3_0555B6E37557E3D0___c_TypeDefinitionIndex = 54597;

class Class_3_0555B6E37557E3D0___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_8D3F358F74B0D2BB*>** StaticGet___9__18_0()
	{
		return (::System::Action_1<::Class_3_8D3F358F74B0D2BB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0555B6E37557E3D0___c_TypeDefinitionIndex)->GetStaticField(0x43760);
	}
	static ::Class_3_0555B6E37557E3D0___c** StaticGet___9()
	{
		return (::Class_3_0555B6E37557E3D0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0555B6E37557E3D0___c_TypeDefinitionIndex)->GetStaticField(0x43768);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0555B6E37557E3D0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0555B6E37557E3D0___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_239DFC7CC74128E3(::Class_3_8D3F358F74B0D2BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8D3F358F74B0D2BB*))((::PBYTE)hIl2Cpp + CLASS_3_0555B6E37557E3D0___C_METHOD_1_239DFC7CC74128E3_OFFSET))(this, a1);
	}
};
