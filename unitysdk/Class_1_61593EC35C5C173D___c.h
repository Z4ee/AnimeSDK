#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_61593EC35C5C173D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17ABEE60)
#define CLASS_1_61593EC35C5C173D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17ABEEA0)
#define CLASS_1_61593EC35C5C173D___C___CREATEBIGDATARECOMMEND_B__4_0_OFFSET UNITYSDK_OFFSET(0x17ABEF50)
#define CLASS_1_61593EC35C5C173D___C___CREATESYSTEMRECOMMEND_B__3_0_OFFSET UNITYSDK_OFFSET(0x17ABEEB0)

inline static constexpr unsigned int Class_1_61593EC35C5C173D___c_TypeDefinitionIndex = 65644;

class Class_1_61593EC35C5C173D___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__4_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61593EC35C5C173D___c_TypeDefinitionIndex)->GetStaticField(0x12BE0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61593EC35C5C173D___c_TypeDefinitionIndex)->GetStaticField(0x12BE8);
	}
	static ::Class_1_61593EC35C5C173D___c** StaticGet___9()
	{
		return (::Class_1_61593EC35C5C173D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61593EC35C5C173D___c_TypeDefinitionIndex)->GetStaticField(0x12BF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_61593EC35C5C173D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61593EC35C5C173D___C__CTOR_OFFSET))(this);
	}

	::System::String* __CreateSystemRecommend_b__3_0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61593EC35C5C173D___C___CREATESYSTEMRECOMMEND_B__3_0_OFFSET))(this);
	}

	::System::String* __CreateBigDataRecommend_b__4_0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61593EC35C5C173D___C___CREATEBIGDATARECOMMEND_B__4_0_OFFSET))(this);
	}
};
