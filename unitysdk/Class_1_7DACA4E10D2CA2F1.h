#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45EB26448208D929;
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define CLASS_1_7DACA4E10D2CA2F1_METHOD_1_346221E08C45B035_OFFSET UNITYSDK_OFFSET(0xAA8DCC0)
#define CLASS_1_7DACA4E10D2CA2F1_METHOD_1_E2ACF3FF064F9810_OFFSET UNITYSDK_OFFSET(0xAA8DB60)
#define CLASS_1_7DACA4E10D2CA2F1_METHOD_1_EB6D1E58AC2AC25C_OFFSET UNITYSDK_OFFSET(0xAA8DE00)
#define CLASS_1_7DACA4E10D2CA2F1_METHOD_1_EF90527E19A345E6_OFFSET UNITYSDK_OFFSET(0xAA8DC10)
#define CLASS_1_7DACA4E10D2CA2F1__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA8DEE0)
#define CLASS_1_7DACA4E10D2CA2F1__CTOR_OFFSET UNITYSDK_OFFSET(0xAA8DED0)

inline static constexpr unsigned int Class_1_7DACA4E10D2CA2F1_TypeDefinitionIndex = 44434;

class Class_1_7DACA4E10D2CA2F1 : public ::System::Object
{
public:
	static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::Class_1_45EB26448208D929*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::Class_1_45EB26448208D929*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DACA4E10D2CA2F1_TypeDefinitionIndex)->GetStaticField(0x6B580);
	}
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DACA4E10D2CA2F1_TypeDefinitionIndex)->GetStaticField(0x11D50);
	}
	// static const ::System::UInt32 Field_1_2 = 0x0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DACA4E10D2CA2F1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DACA4E10D2CA2F1__CCTOR_OFFSET))();
	}

	static ::System::UInt32 Method_1_E2ACF3FF064F9810()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DACA4E10D2CA2F1_METHOD_1_E2ACF3FF064F9810_OFFSET))();
	}

	static ::Class_1_45EB26448208D929* Method_1_EF90527E19A345E6(::System::UInt32 a1)
	{
		return ((::Class_1_45EB26448208D929*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DACA4E10D2CA2F1_METHOD_1_EF90527E19A345E6_OFFSET))(a1);
	}

	static ::System::Void Method_1_346221E08C45B035(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DACA4E10D2CA2F1_METHOD_1_346221E08C45B035_OFFSET))(a1);
	}

	static ::System::Void Method_1_EB6D1E58AC2AC25C(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DACA4E10D2CA2F1_METHOD_1_EB6D1E58AC2AC25C_OFFSET))(a1, a2);
	}
};
