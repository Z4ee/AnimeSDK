#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_102;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_3AB2B984687B65AD___C_METHOD_1_933713A4305E9272_OFFSET UNITYSDK_OFFSET(0x16FAFDB0)
#define CLASS_1_3AB2B984687B65AD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FAFD60)
#define CLASS_1_3AB2B984687B65AD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16FAFDA0)

inline static constexpr unsigned int Class_1_3AB2B984687B65AD___c_TypeDefinitionIndex = 9362;

class Class_1_3AB2B984687B65AD___c : public ::System::Object
{
public:
	static ::Class_1_3AB2B984687B65AD___c** StaticGet___9()
	{
		return (::Class_1_3AB2B984687B65AD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AB2B984687B65AD___c_TypeDefinitionIndex)->GetStaticField(0x7760);
	}
	static ::System::Func_2<::Class_2_208CC9941471731A_102*, ::System::Int32>** StaticGet___9__11_0()
	{
		return (::System::Func_2<::Class_2_208CC9941471731A_102*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AB2B984687B65AD___c_TypeDefinitionIndex)->GetStaticField(0x7768);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AB2B984687B65AD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AB2B984687B65AD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_933713A4305E9272(::Class_2_208CC9941471731A_102* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_102*))((::PBYTE)hIl2Cpp + CLASS_1_3AB2B984687B65AD___C_METHOD_1_933713A4305E9272_OFFSET))(this, a1);
	}
};
