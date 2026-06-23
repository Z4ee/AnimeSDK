#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_80F9F81D77436297;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_E11249420E5859F9___C_METHOD_1_B8D06555739F0F08_OFFSET UNITYSDK_OFFSET(0x1BF267F0)
#define CLASS_3_E11249420E5859F9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF267A0)
#define CLASS_3_E11249420E5859F9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF267E0)

inline static constexpr unsigned int Class_3_E11249420E5859F9___c_TypeDefinitionIndex = 88470;

class Class_3_E11249420E5859F9___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_80F9F81D77436297*, ::System::Int32>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::Class_1_80F9F81D77436297*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E11249420E5859F9___c_TypeDefinitionIndex)->GetStaticField(0x4DE60);
	}
	static ::Class_3_E11249420E5859F9___c** StaticGet___9()
	{
		return (::Class_3_E11249420E5859F9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E11249420E5859F9___c_TypeDefinitionIndex)->GetStaticField(0x4DE68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E11249420E5859F9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E11249420E5859F9___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_B8D06555739F0F08(::Class_1_80F9F81D77436297* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_80F9F81D77436297*))((::PBYTE)hIl2Cpp + CLASS_3_E11249420E5859F9___C_METHOD_1_B8D06555739F0F08_OFFSET))(this, a1);
	}
};
