#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_3B49F63A60B09164_1___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1448C530)
#define CLASS_2_3B49F63A60B09164_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1448C4E0)
#define CLASS_2_3B49F63A60B09164_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1448C520)

inline static constexpr unsigned int Class_2_3B49F63A60B09164_1___c_TypeDefinitionIndex = 67071;

class Class_2_3B49F63A60B09164_1___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__20_11()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3B49F63A60B09164_1___c_TypeDefinitionIndex)->GetStaticField(0x39350);
	}
	static ::Class_2_3B49F63A60B09164_1___c** StaticGet___9()
	{
		return (::Class_2_3B49F63A60B09164_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3B49F63A60B09164_1___c_TypeDefinitionIndex)->GetStaticField(0x39358);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3B49F63A60B09164_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B49F63A60B09164_1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B49F63A60B09164_1___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
