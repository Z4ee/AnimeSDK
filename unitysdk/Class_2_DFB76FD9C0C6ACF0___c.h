#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_DFB76FD9C0C6ACF0___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1B59FED0)
#define CLASS_2_DFB76FD9C0C6ACF0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B59FE80)
#define CLASS_2_DFB76FD9C0C6ACF0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B59FEC0)

inline static constexpr unsigned int Class_2_DFB76FD9C0C6ACF0___c_TypeDefinitionIndex = 40569;

class Class_2_DFB76FD9C0C6ACF0___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_11()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DFB76FD9C0C6ACF0___c_TypeDefinitionIndex)->GetStaticField(0x4D030);
	}
	static ::Class_2_DFB76FD9C0C6ACF0___c** StaticGet___9()
	{
		return (::Class_2_DFB76FD9C0C6ACF0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DFB76FD9C0C6ACF0___c_TypeDefinitionIndex)->GetStaticField(0x4D038);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DFB76FD9C0C6ACF0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFB76FD9C0C6ACF0___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFB76FD9C0C6ACF0___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
