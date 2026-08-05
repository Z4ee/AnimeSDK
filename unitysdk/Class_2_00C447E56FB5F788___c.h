#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_00C447E56FB5F788___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x171351F0)
#define CLASS_2_00C447E56FB5F788___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x171351A0)
#define CLASS_2_00C447E56FB5F788___C__CTOR_OFFSET UNITYSDK_OFFSET(0x171351E0)

inline static constexpr unsigned int Class_2_00C447E56FB5F788___c_TypeDefinitionIndex = 62631;

class Class_2_00C447E56FB5F788___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__5_9()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_00C447E56FB5F788___c_TypeDefinitionIndex)->GetStaticField(0x47D80);
	}
	static ::Class_2_00C447E56FB5F788___c** StaticGet___9()
	{
		return (::Class_2_00C447E56FB5F788___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_00C447E56FB5F788___c_TypeDefinitionIndex)->GetStaticField(0x47D88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_00C447E56FB5F788___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C447E56FB5F788___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C447E56FB5F788___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
