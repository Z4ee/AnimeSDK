#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_09CC5D2676B783CA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_4609359B80F29981___C_METHOD_1_5DC57180DE8EA128_OFFSET UNITYSDK_OFFSET(0x1418BA50)
#define CLASS_3_4609359B80F29981___C_METHOD_1_7B0DB2A5CB2107CF_OFFSET UNITYSDK_OFFSET(0x1418BA70)
#define CLASS_3_4609359B80F29981___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1418BA00)
#define CLASS_3_4609359B80F29981___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1418BA40)

inline static constexpr unsigned int Class_3_4609359B80F29981___c_TypeDefinitionIndex = 44787;

class Class_3_4609359B80F29981___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_3_09CC5D2676B783CA*, ::System::Boolean>** StaticGet___9__25_1()
	{
		return (::System::Func_2<::Class_3_09CC5D2676B783CA*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4609359B80F29981___c_TypeDefinitionIndex)->GetStaticField(0x31010);
	}
	static ::Class_3_4609359B80F29981___c** StaticGet___9()
	{
		return (::Class_3_4609359B80F29981___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4609359B80F29981___c_TypeDefinitionIndex)->GetStaticField(0x31018);
	}
	static ::System::Func_2<::Class_3_09CC5D2676B783CA*, ::System::Boolean>** StaticGet___9__25_0()
	{
		return (::System::Func_2<::Class_3_09CC5D2676B783CA*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4609359B80F29981___c_TypeDefinitionIndex)->GetStaticField(0x31020);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_4609359B80F29981___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4609359B80F29981___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5DC57180DE8EA128(::Class_3_09CC5D2676B783CA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_09CC5D2676B783CA*))((::PBYTE)hIl2Cpp + CLASS_3_4609359B80F29981___C_METHOD_1_5DC57180DE8EA128_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7B0DB2A5CB2107CF(::Class_3_09CC5D2676B783CA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_09CC5D2676B783CA*))((::PBYTE)hIl2Cpp + CLASS_3_4609359B80F29981___C_METHOD_1_7B0DB2A5CB2107CF_OFFSET))(this, a1);
	}
};
