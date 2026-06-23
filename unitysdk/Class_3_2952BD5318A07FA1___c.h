#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9748BD8033D5EDFE_Struct_2_BBD456EBC9087BC2_1.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_2952BD5318A07FA1___C_METHOD_1_34609036D59D87EA_OFFSET UNITYSDK_OFFSET(0x1BD5D130)
#define CLASS_3_2952BD5318A07FA1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD5D0E0)
#define CLASS_3_2952BD5318A07FA1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD5D120)

inline static constexpr unsigned int Class_3_2952BD5318A07FA1___c_TypeDefinitionIndex = 87878;

class Class_3_2952BD5318A07FA1___c : public ::System::Object
{
public:
	static ::Class_3_2952BD5318A07FA1___c** StaticGet___9()
	{
		return (::Class_3_2952BD5318A07FA1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2952BD5318A07FA1___c_TypeDefinitionIndex)->GetStaticField(0x4DC60);
	}
	static ::System::Func_2<::Class_3_9748BD8033D5EDFE_Struct_2_BBD456EBC9087BC2_1, ::System::Boolean>** StaticGet___9__28_0()
	{
		return (::System::Func_2<::Class_3_9748BD8033D5EDFE_Struct_2_BBD456EBC9087BC2_1, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2952BD5318A07FA1___c_TypeDefinitionIndex)->GetStaticField(0x4DC68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2952BD5318A07FA1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2952BD5318A07FA1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_34609036D59D87EA(::Class_3_9748BD8033D5EDFE_Struct_2_BBD456EBC9087BC2_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_9748BD8033D5EDFE_Struct_2_BBD456EBC9087BC2_1))((::PBYTE)hIl2Cpp + CLASS_3_2952BD5318A07FA1___C_METHOD_1_34609036D59D87EA_OFFSET))(this, a1);
	}
};
