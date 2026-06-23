#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_29AD770B16B2D814;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_8891151F5326768E___C_METHOD_1_4FA263546972185D_OFFSET UNITYSDK_OFFSET(0xD329BD0)
#define CLASS_3_8891151F5326768E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD329B80)
#define CLASS_3_8891151F5326768E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD329BC0)

inline static constexpr unsigned int Class_3_8891151F5326768E___c_TypeDefinitionIndex = 47188;

class Class_3_8891151F5326768E___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_29AD770B16B2D814*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_3_29AD770B16B2D814*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8891151F5326768E___c_TypeDefinitionIndex)->GetStaticField(0x385E0);
	}
	static ::Class_3_8891151F5326768E___c** StaticGet___9()
	{
		return (::Class_3_8891151F5326768E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8891151F5326768E___c_TypeDefinitionIndex)->GetStaticField(0x385E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8891151F5326768E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8891151F5326768E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4FA263546972185D(::Class_3_29AD770B16B2D814* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_29AD770B16B2D814*))((::PBYTE)hIl2Cpp + CLASS_3_8891151F5326768E___C_METHOD_1_4FA263546972185D_OFFSET))(this, a1);
	}
};
