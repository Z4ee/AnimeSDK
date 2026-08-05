#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_3_06ECA6EE85840866___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1680D490)
#define CLASS_3_06ECA6EE85840866___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1680D440)
#define CLASS_3_06ECA6EE85840866___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1680D480)

inline static constexpr unsigned int Class_3_06ECA6EE85840866___c_TypeDefinitionIndex = 65696;

class Class_3_06ECA6EE85840866___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_06ECA6EE85840866___c_TypeDefinitionIndex)->GetStaticField(0x495E0);
	}
	static ::Class_3_06ECA6EE85840866___c** StaticGet___9()
	{
		return (::Class_3_06ECA6EE85840866___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_06ECA6EE85840866___c_TypeDefinitionIndex)->GetStaticField(0x495E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_06ECA6EE85840866___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06ECA6EE85840866___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06ECA6EE85840866___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
