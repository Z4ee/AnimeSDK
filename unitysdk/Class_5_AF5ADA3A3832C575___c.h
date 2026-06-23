#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_5_AF5ADA3A3832C575___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12850B90)
#define CLASS_5_AF5ADA3A3832C575___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12850B40)
#define CLASS_5_AF5ADA3A3832C575___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12850B80)

inline static constexpr unsigned int Class_5_AF5ADA3A3832C575___c_TypeDefinitionIndex = 43869;

class Class_5_AF5ADA3A3832C575___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_AF5ADA3A3832C575___c_TypeDefinitionIndex)->GetStaticField(0x2F8D0);
	}
	static ::Class_5_AF5ADA3A3832C575___c** StaticGet___9()
	{
		return (::Class_5_AF5ADA3A3832C575___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_AF5ADA3A3832C575___c_TypeDefinitionIndex)->GetStaticField(0x2F8D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_AF5ADA3A3832C575___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AF5ADA3A3832C575___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AF5ADA3A3832C575___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
