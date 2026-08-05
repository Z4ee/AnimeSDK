#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_8530E184D8325889.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_D849DAE8468890BF_METHOD_1_4C5D82D887C74BAB_OFFSET UNITYSDK_OFFSET(0x16F69A40)
#define CLASS_1_D849DAE8468890BF_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x16F69820)
#define CLASS_1_D849DAE8468890BF_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x16F697A0)
#define CLASS_1_D849DAE8468890BF_METHOD_1_C2A93AC0176160FD_OFFSET UNITYSDK_OFFSET(0x16F69690)
#define CLASS_1_D849DAE8468890BF_METHOD_1_C7CEB25BFE6FF659_OFFSET UNITYSDK_OFFSET(0x16F69930)
#define CLASS_1_D849DAE8468890BF__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F69600)

inline static constexpr unsigned int Class_1_D849DAE8468890BF_TypeDefinitionIndex = 82566;

class Class_1_D849DAE8468890BF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::Struct_2_8530E184D8325889>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Queue_1<::Struct_2_8530E184D8325889>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D849DAE8468890BF_TypeDefinitionIndex)->GetStaticField(0x41C50);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D849DAE8468890BF_TypeDefinitionIndex)->GetStaticField(0xF4F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D849DAE8468890BF__CCTOR_OFFSET))();
	}

	static ::Struct_2_8530E184D8325889 Method_1_C2A93AC0176160FD()
	{
		return ((::Struct_2_8530E184D8325889(*)())((::PBYTE)hIl2Cpp + CLASS_1_D849DAE8468890BF_METHOD_1_C2A93AC0176160FD_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_D849DAE8468890BF_METHOD_1_BFBBE8A6FE167A6A_OFFSET))();
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D849DAE8468890BF_METHOD_1_AA169839CB93802A_OFFSET))();
	}

	static ::System::Void Method_1_C7CEB25BFE6FF659(::Struct_2_8530E184D8325889& a1)
	{
		return ((::System::Void(*)(::Struct_2_8530E184D8325889&))((::PBYTE)hIl2Cpp + CLASS_1_D849DAE8468890BF_METHOD_1_C7CEB25BFE6FF659_OFFSET))(a1);
	}

	static ::System::Void Method_1_4C5D82D887C74BAB(::System::Action_1<::Struct_2_8530E184D8325889>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::Struct_2_8530E184D8325889>*))((::PBYTE)hIl2Cpp + CLASS_1_D849DAE8468890BF_METHOD_1_4C5D82D887C74BAB_OFFSET))(a1);
	}
};
