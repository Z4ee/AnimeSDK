#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define STRUCT_2_00BE805B1BEC263D_METHOD_2_4E2BCE3C8705DF5E_OFFSET UNITYSDK_OFFSET(0x10B2C430)
#define STRUCT_2_00BE805B1BEC263D_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x10B2C1E0)
#define STRUCT_2_00BE805B1BEC263D_METHOD_2_DEAE0CAF734CA850_OFFSET UNITYSDK_OFFSET(0x10B2C2D0)
#define STRUCT_2_00BE805B1BEC263D_METHOD_2_F26249928D69EDB5_OFFSET UNITYSDK_OFFSET(0x10B2C380)
#define STRUCT_2_00BE805B1BEC263D__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B2C180)

inline static constexpr unsigned int Struct_2_00BE805B1BEC263D_TypeDefinitionIndex = 54016;

struct alignas(1) Struct_2_00BE805B1BEC263D
{
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_00BE805B1BEC263D_TypeDefinitionIndex)->GetStaticField(0x4C760);
	}
	static ::System::UInt32* StaticGet_Field_2_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_00BE805B1BEC263D_TypeDefinitionIndex)->GetStaticField(0x11C40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_00BE805B1BEC263D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_00BE805B1BEC263D_METHOD_2_D0BD1377F2594D33_OFFSET))();
	}

	static ::System::Boolean Method_2_DEAE0CAF734CA850(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_00BE805B1BEC263D_METHOD_2_DEAE0CAF734CA850_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_F26249928D69EDB5(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_00BE805B1BEC263D_METHOD_2_F26249928D69EDB5_OFFSET))(a1);
	}

	static ::System::UInt32 Method_2_4E2BCE3C8705DF5E()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + STRUCT_2_00BE805B1BEC263D_METHOD_2_4E2BCE3C8705DF5E_OFFSET))();
	}
};
