#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_8B5A1A0CF0C38042___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16A315E0)
#define CLASS_2_8B5A1A0CF0C38042___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A31590)
#define CLASS_2_8B5A1A0CF0C38042___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A315D0)

inline static constexpr unsigned int Class_2_8B5A1A0CF0C38042___c_TypeDefinitionIndex = 81469;

class Class_2_8B5A1A0CF0C38042___c : public ::System::Object
{
public:
	static ::Class_2_8B5A1A0CF0C38042___c** StaticGet___9()
	{
		return (::Class_2_8B5A1A0CF0C38042___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8B5A1A0CF0C38042___c_TypeDefinitionIndex)->GetStaticField(0x2A4F0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__33_19()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8B5A1A0CF0C38042___c_TypeDefinitionIndex)->GetStaticField(0x2A4F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8B5A1A0CF0C38042___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5A1A0CF0C38042___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5A1A0CF0C38042___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
