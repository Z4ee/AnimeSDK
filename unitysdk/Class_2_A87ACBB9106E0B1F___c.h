#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define CLASS_2_A87ACBB9106E0B1F___C_METHOD_1_D79F446AA30C0E6E_OFFSET UNITYSDK_OFFSET(0xF8BE000)
#define CLASS_2_A87ACBB9106E0B1F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF8BDFB0)
#define CLASS_2_A87ACBB9106E0B1F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF8BDFF0)

inline static constexpr unsigned int Class_2_A87ACBB9106E0B1F___c_TypeDefinitionIndex = 85483;

class Class_2_A87ACBB9106E0B1F___c : public ::System::Object
{
public:
	static ::Class_2_A87ACBB9106E0B1F___c** StaticGet___9()
	{
		return (::Class_2_A87ACBB9106E0B1F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A87ACBB9106E0B1F___c_TypeDefinitionIndex)->GetStaticField(0x3B880);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A87ACBB9106E0B1F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A87ACBB9106E0B1F___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D79F446AA30C0E6E(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_A87ACBB9106E0B1F___C_METHOD_1_D79F446AA30C0E6E_OFFSET))(this, a1);
	}
};
