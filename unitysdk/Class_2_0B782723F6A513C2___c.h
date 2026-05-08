#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_0B782723F6A513C2___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x104B68F0)
#define CLASS_2_0B782723F6A513C2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x104B68A0)
#define CLASS_2_0B782723F6A513C2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x104B68E0)

inline static constexpr unsigned int Class_2_0B782723F6A513C2___c_TypeDefinitionIndex = 64336;

class Class_2_0B782723F6A513C2___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_7()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0B782723F6A513C2___c_TypeDefinitionIndex)->GetStaticField(0x31350);
	}
	static ::Class_2_0B782723F6A513C2___c** StaticGet___9()
	{
		return (::Class_2_0B782723F6A513C2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0B782723F6A513C2___c_TypeDefinitionIndex)->GetStaticField(0x31358);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0B782723F6A513C2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B782723F6A513C2___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B782723F6A513C2___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
