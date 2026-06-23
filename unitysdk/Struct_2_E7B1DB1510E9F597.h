#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3C60E087B86D1AFF.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define STRUCT_2_E7B1DB1510E9F597_DISPOSE_OFFSET UNITYSDK_OFFSET(0x68F9F0)
#define STRUCT_2_E7B1DB1510E9F597_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xFE26BB0)
#define STRUCT_2_E7B1DB1510E9F597_METHOD_2_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0xFE26DA0)
#define STRUCT_2_E7B1DB1510E9F597_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xFE26D40)
#define STRUCT_2_E7B1DB1510E9F597_METHOD_2_DF0BBD0771644FA2_OFFSET UNITYSDK_OFFSET(0xFE26C50)
#define STRUCT_2_E7B1DB1510E9F597__CCTOR_OFFSET UNITYSDK_OFFSET(0xFE26B20)
#define STRUCT_2_E7B1DB1510E9F597__CTOR_OFFSET UNITYSDK_OFFSET(0x68F9E0)

inline static constexpr unsigned int Struct_2_E7B1DB1510E9F597_TypeDefinitionIndex = 46246;

struct alignas(1) Struct_2_E7B1DB1510E9F597
{
	static ::System::Collections::Generic::Stack_1<::System::ValueTuple_2<::Enum_3_3C60E087B86D1AFF, ::System::Boolean>>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Stack_1<::System::ValueTuple_2<::Enum_3_3C60E087B86D1AFF, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_E7B1DB1510E9F597_TypeDefinitionIndex)->GetStaticField(0x3D290);
	}

	::System::Void _ctor(::Enum_3_3C60E087B86D1AFF a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3C60E087B86D1AFF, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_E7B1DB1510E9F597__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_E7B1DB1510E9F597__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E7B1DB1510E9F597_DISPOSE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + STRUCT_2_E7B1DB1510E9F597_METHOD_2_1808E1CF7A125519_OFFSET))();
	}

	static ::Enum_3_3C60E087B86D1AFF Method_2_DF0BBD0771644FA2()
	{
		return ((::Enum_3_3C60E087B86D1AFF(*)())((::PBYTE)hIl2Cpp + STRUCT_2_E7B1DB1510E9F597_METHOD_2_DF0BBD0771644FA2_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + STRUCT_2_E7B1DB1510E9F597_METHOD_2_CE34EA208837238D_OFFSET))();
	}

	static ::System::Boolean Method_2_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + STRUCT_2_E7B1DB1510E9F597_METHOD_2_64F0C85A431FBD69_OFFSET))();
	}
};
