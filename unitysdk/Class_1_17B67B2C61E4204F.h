#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45EB26448208D929;
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define CLASS_1_17B67B2C61E4204F_METHOD_1_346221E08C45B035_OFFSET UNITYSDK_OFFSET(0x17EA8D90)
#define CLASS_1_17B67B2C61E4204F_METHOD_1_A37448BC57FB8EDE_OFFSET UNITYSDK_OFFSET(0x17EA8ED0)
#define CLASS_1_17B67B2C61E4204F_METHOD_1_E2ACF3FF064F9810_OFFSET UNITYSDK_OFFSET(0x17EA8C30)
#define CLASS_1_17B67B2C61E4204F_METHOD_1_EF90527E19A345E6_OFFSET UNITYSDK_OFFSET(0x17EA8CE0)
#define CLASS_1_17B67B2C61E4204F__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EA8FB0)
#define CLASS_1_17B67B2C61E4204F__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA8FA0)

inline static constexpr unsigned int Class_1_17B67B2C61E4204F_TypeDefinitionIndex = 45898;

class Class_1_17B67B2C61E4204F : public ::System::Object
{
public:
	static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::Class_1_45EB26448208D929*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::Class_1_45EB26448208D929*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17B67B2C61E4204F_TypeDefinitionIndex)->GetStaticField(0x32D90);
	}
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17B67B2C61E4204F_TypeDefinitionIndex)->GetStaticField(0x88D0);
	}
	// static const ::System::UInt32 Field_1_2 = 0x0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17B67B2C61E4204F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17B67B2C61E4204F__CCTOR_OFFSET))();
	}

	static ::System::UInt32 Method_1_E2ACF3FF064F9810()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_17B67B2C61E4204F_METHOD_1_E2ACF3FF064F9810_OFFSET))();
	}

	static ::Class_1_45EB26448208D929* Method_1_EF90527E19A345E6(::System::UInt32 a1)
	{
		return ((::Class_1_45EB26448208D929*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_17B67B2C61E4204F_METHOD_1_EF90527E19A345E6_OFFSET))(a1);
	}

	static ::System::Void Method_1_346221E08C45B035(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_17B67B2C61E4204F_METHOD_1_346221E08C45B035_OFFSET))(a1);
	}

	static ::System::Void Method_1_A37448BC57FB8EDE(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_17B67B2C61E4204F_METHOD_1_A37448BC57FB8EDE_OFFSET))(a1, a2);
	}
};
