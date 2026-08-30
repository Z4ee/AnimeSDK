#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45EB26448208D929;
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define CLASS_1_17B67B2C61E4204F_METHOD_1_346221E08C45B035_OFFSET UNITYSDK_OFFSET(0x1A6DCA10)
#define CLASS_1_17B67B2C61E4204F_METHOD_1_A37448BC57FB8EDE_OFFSET UNITYSDK_OFFSET(0x1A6DCB50)
#define CLASS_1_17B67B2C61E4204F_METHOD_1_E2ACF3FF064F9810_OFFSET UNITYSDK_OFFSET(0x1A6DC8B0)
#define CLASS_1_17B67B2C61E4204F_METHOD_1_EF90527E19A345E6_OFFSET UNITYSDK_OFFSET(0x1A6DC960)
#define CLASS_1_17B67B2C61E4204F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6DCC30)
#define CLASS_1_17B67B2C61E4204F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6DCC20)

inline static constexpr unsigned int Class_1_17B67B2C61E4204F_TypeDefinitionIndex = 48152;

class Class_1_17B67B2C61E4204F : public ::System::Object
{
public:
	static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::Class_1_45EB26448208D929*>** StaticGet_CIMODNKAAPF()
	{
		return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::Class_1_45EB26448208D929*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17B67B2C61E4204F_TypeDefinitionIndex)->GetStaticField(0x64200);
	}
	static ::System::UInt32* StaticGet_AEGGLFIFGML()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17B67B2C61E4204F_TypeDefinitionIndex)->GetStaticField(0x14880);
	}
	// static const ::System::UInt32 PMIDCJIDKKD = 0x0; // 0x0

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
