#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2F8FC043285F98CD_3.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_86E412E21556B4B3_1___C_METHOD_1_3DFFEA8885EDBFF0_OFFSET UNITYSDK_OFFSET(0x1660CDB0)
#define CLASS_2_86E412E21556B4B3_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1660CD60)
#define CLASS_2_86E412E21556B4B3_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1660CDA0)

inline static constexpr unsigned int Class_2_86E412E21556B4B3_1___c_TypeDefinitionIndex = 80436;

class Class_2_86E412E21556B4B3_1___c : public ::System::Object
{
public:
	static ::Class_2_86E412E21556B4B3_1___c** StaticGet___9()
	{
		return (::Class_2_86E412E21556B4B3_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_86E412E21556B4B3_1___c_TypeDefinitionIndex)->GetStaticField(0x34FB0);
	}
	static ::System::Func_2<::Struct_2_2F8FC043285F98CD_3, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Struct_2_2F8FC043285F98CD_3, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_86E412E21556B4B3_1___c_TypeDefinitionIndex)->GetStaticField(0x34FB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_86E412E21556B4B3_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86E412E21556B4B3_1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_3DFFEA8885EDBFF0(::Struct_2_2F8FC043285F98CD_3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_2F8FC043285F98CD_3))((::PBYTE)hIl2Cpp + CLASS_2_86E412E21556B4B3_1___C_METHOD_1_3DFFEA8885EDBFF0_OFFSET))(this, a1);
	}
};
