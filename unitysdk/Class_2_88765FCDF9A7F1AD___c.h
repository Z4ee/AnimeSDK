#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_88765FCDF9A7F1AD___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14A496E0)
#define CLASS_2_88765FCDF9A7F1AD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A49690)
#define CLASS_2_88765FCDF9A7F1AD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A496D0)

inline static constexpr unsigned int Class_2_88765FCDF9A7F1AD___c_TypeDefinitionIndex = 71266;

class Class_2_88765FCDF9A7F1AD___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__8_19()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_88765FCDF9A7F1AD___c_TypeDefinitionIndex)->GetStaticField(0x43E90);
	}
	static ::Class_2_88765FCDF9A7F1AD___c** StaticGet___9()
	{
		return (::Class_2_88765FCDF9A7F1AD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_88765FCDF9A7F1AD___c_TypeDefinitionIndex)->GetStaticField(0x43E98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_88765FCDF9A7F1AD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88765FCDF9A7F1AD___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88765FCDF9A7F1AD___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
