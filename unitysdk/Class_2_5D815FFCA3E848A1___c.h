#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_5D815FFCA3E848A1___C_METHOD_1_B2C3C6DB5457B4DB_OFFSET UNITYSDK_OFFSET(0x13E287C0)
#define CLASS_2_5D815FFCA3E848A1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E28770)
#define CLASS_2_5D815FFCA3E848A1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E287B0)

inline static constexpr unsigned int Class_2_5D815FFCA3E848A1___c_TypeDefinitionIndex = 44532;

class Class_2_5D815FFCA3E848A1___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_0D6706375CDAAE8C*, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_1_0D6706375CDAAE8C*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5D815FFCA3E848A1___c_TypeDefinitionIndex)->GetStaticField(0x4C940);
	}
	static ::Class_2_5D815FFCA3E848A1___c** StaticGet___9()
	{
		return (::Class_2_5D815FFCA3E848A1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5D815FFCA3E848A1___c_TypeDefinitionIndex)->GetStaticField(0x4C948);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5D815FFCA3E848A1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D815FFCA3E848A1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B2C3C6DB5457B4DB(::Class_1_0D6706375CDAAE8C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_2_5D815FFCA3E848A1___C_METHOD_1_B2C3C6DB5457B4DB_OFFSET))(this, a1);
	}
};
