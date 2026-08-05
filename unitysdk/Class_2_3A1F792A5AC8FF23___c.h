#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CFE95B82BD52EB3B;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_3A1F792A5AC8FF23___C_METHOD_1_5DC57180DE8EA128_OFFSET UNITYSDK_OFFSET(0xF751660)
#define CLASS_2_3A1F792A5AC8FF23___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF751610)
#define CLASS_2_3A1F792A5AC8FF23___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF751650)

inline static constexpr unsigned int Class_2_3A1F792A5AC8FF23___c_TypeDefinitionIndex = 56371;

class Class_2_3A1F792A5AC8FF23___c : public ::System::Object
{
public:
	static ::Class_2_3A1F792A5AC8FF23___c** StaticGet___9()
	{
		return (::Class_2_3A1F792A5AC8FF23___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3A1F792A5AC8FF23___c_TypeDefinitionIndex)->GetStaticField(0x430D0);
	}
	static ::System::Func_2<::Class_3_CFE95B82BD52EB3B*, ::System::Boolean>** StaticGet___9__49_1()
	{
		return (::System::Func_2<::Class_3_CFE95B82BD52EB3B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3A1F792A5AC8FF23___c_TypeDefinitionIndex)->GetStaticField(0x430D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3A1F792A5AC8FF23___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A1F792A5AC8FF23___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5DC57180DE8EA128(::Class_3_CFE95B82BD52EB3B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_CFE95B82BD52EB3B*))((::PBYTE)hIl2Cpp + CLASS_2_3A1F792A5AC8FF23___C_METHOD_1_5DC57180DE8EA128_OFFSET))(this, a1);
	}
};
