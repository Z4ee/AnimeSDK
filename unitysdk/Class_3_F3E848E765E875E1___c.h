#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_D791531BB4D56065;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F3E848E765E875E1___C_METHOD_1_98910EF8C2F89AAC_OFFSET UNITYSDK_OFFSET(0x1992E070)
#define CLASS_3_F3E848E765E875E1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1992E020)
#define CLASS_3_F3E848E765E875E1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1992E060)

inline static constexpr unsigned int Class_3_F3E848E765E875E1___c_TypeDefinitionIndex = 80652;

class Class_3_F3E848E765E875E1___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_4_D791531BB4D56065*>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::Class_4_D791531BB4D56065*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F3E848E765E875E1___c_TypeDefinitionIndex)->GetStaticField(0x4CD00);
	}
	static ::Class_3_F3E848E765E875E1___c** StaticGet___9()
	{
		return (::Class_3_F3E848E765E875E1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F3E848E765E875E1___c_TypeDefinitionIndex)->GetStaticField(0x4CD08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F3E848E765E875E1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3E848E765E875E1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_98910EF8C2F89AAC(::Class_4_D791531BB4D56065* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D791531BB4D56065*))((::PBYTE)hIl2Cpp + CLASS_3_F3E848E765E875E1___C_METHOD_1_98910EF8C2F89AAC_OFFSET))(this, a1);
	}
};
