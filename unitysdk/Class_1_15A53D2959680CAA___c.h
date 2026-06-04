#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_15A53D2959680CAA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD7EE770)
#define CLASS_1_15A53D2959680CAA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD7EE7B0)
#define CLASS_1_15A53D2959680CAA___C___CREATEBIGDATARECOMMEND_B__4_0_OFFSET UNITYSDK_OFFSET(0xD7EE860)
#define CLASS_1_15A53D2959680CAA___C___CREATESYSTEMRECOMMEND_B__3_0_OFFSET UNITYSDK_OFFSET(0xD7EE7C0)

inline static constexpr unsigned int Class_1_15A53D2959680CAA___c_TypeDefinitionIndex = 61317;

class Class_1_15A53D2959680CAA___c : public ::System::Object
{
public:
	static ::Class_1_15A53D2959680CAA___c** StaticGet___9()
	{
		return (::Class_1_15A53D2959680CAA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_15A53D2959680CAA___c_TypeDefinitionIndex)->GetStaticField(0x68DD0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_15A53D2959680CAA___c_TypeDefinitionIndex)->GetStaticField(0x68DD8);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__4_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_15A53D2959680CAA___c_TypeDefinitionIndex)->GetStaticField(0x68DE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_15A53D2959680CAA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A53D2959680CAA___C__CTOR_OFFSET))(this);
	}

	::System::String* __CreateSystemRecommend_b__3_0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A53D2959680CAA___C___CREATESYSTEMRECOMMEND_B__3_0_OFFSET))(this);
	}

	::System::String* __CreateBigDataRecommend_b__4_0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A53D2959680CAA___C___CREATEBIGDATARECOMMEND_B__4_0_OFFSET))(this);
	}
};
