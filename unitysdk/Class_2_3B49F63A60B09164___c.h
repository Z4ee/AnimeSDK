#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_3B49F63A60B09164___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14541D20)
#define CLASS_2_3B49F63A60B09164___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14541CD0)
#define CLASS_2_3B49F63A60B09164___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14541D10)

inline static constexpr unsigned int Class_2_3B49F63A60B09164___c_TypeDefinitionIndex = 85833;

class Class_2_3B49F63A60B09164___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__20_13()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3B49F63A60B09164___c_TypeDefinitionIndex)->GetStaticField(0x2E6C0);
	}
	static ::Class_2_3B49F63A60B09164___c** StaticGet___9()
	{
		return (::Class_2_3B49F63A60B09164___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3B49F63A60B09164___c_TypeDefinitionIndex)->GetStaticField(0x2E6C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3B49F63A60B09164___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B49F63A60B09164___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B49F63A60B09164___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
