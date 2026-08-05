#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_45578855C7710D8B;
class Class_3_F59B5360489F89C4_Class_1_0755F51D2CF0D842_1;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_F59B5360489F89C4___C_METHOD_1_43AC2078E6BFCAB4_OFFSET UNITYSDK_OFFSET(0x1283B4F0)
#define CLASS_3_F59B5360489F89C4___C_METHOD_1_581E50CB7E3F9937_OFFSET UNITYSDK_OFFSET(0x1283B320)
#define CLASS_3_F59B5360489F89C4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1283B2D0)
#define CLASS_3_F59B5360489F89C4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1283B310)

inline static constexpr unsigned int Class_3_F59B5360489F89C4___c_TypeDefinitionIndex = 68351;

class Class_3_F59B5360489F89C4___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_45578855C7710D8B*, ::Class_3_F59B5360489F89C4_Class_1_0755F51D2CF0D842_1*>** StaticGet___9__19_1()
	{
		return (::System::Func_2<::Class_2_45578855C7710D8B*, ::Class_3_F59B5360489F89C4_Class_1_0755F51D2CF0D842_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F59B5360489F89C4___c_TypeDefinitionIndex)->GetStaticField(0x36020);
	}
	static ::System::Comparison_1<::Class_2_45578855C7710D8B*>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::Class_2_45578855C7710D8B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F59B5360489F89C4___c_TypeDefinitionIndex)->GetStaticField(0x36028);
	}
	static ::Class_3_F59B5360489F89C4___c** StaticGet___9()
	{
		return (::Class_3_F59B5360489F89C4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F59B5360489F89C4___c_TypeDefinitionIndex)->GetStaticField(0x36030);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F59B5360489F89C4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F59B5360489F89C4___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_581E50CB7E3F9937(::Class_2_45578855C7710D8B* a1, ::Class_2_45578855C7710D8B* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_45578855C7710D8B*, ::Class_2_45578855C7710D8B*))((::PBYTE)hIl2Cpp + CLASS_3_F59B5360489F89C4___C_METHOD_1_581E50CB7E3F9937_OFFSET))(this, a1, a2);
	}

	::Class_3_F59B5360489F89C4_Class_1_0755F51D2CF0D842_1* Method_1_43AC2078E6BFCAB4(::Class_2_45578855C7710D8B* a1)
	{
		return ((::Class_3_F59B5360489F89C4_Class_1_0755F51D2CF0D842_1*(*)(::PVOID, ::Class_2_45578855C7710D8B*))((::PBYTE)hIl2Cpp + CLASS_3_F59B5360489F89C4___C_METHOD_1_43AC2078E6BFCAB4_OFFSET))(this, a1);
	}
};
