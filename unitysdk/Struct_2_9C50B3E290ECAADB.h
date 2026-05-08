#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A948_2.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B5.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_9C50B3E290ECAADB_METHOD_2_1B0527862C8B1813_OFFSET UNITYSDK_OFFSET(0x5B1A40)
#define STRUCT_2_9C50B3E290ECAADB_METHOD_2_1D158F21AF29EF89_OFFSET UNITYSDK_OFFSET(0x5B1EB0)
#define STRUCT_2_9C50B3E290ECAADB_METHOD_2_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x5B1CE0)
#define STRUCT_2_9C50B3E290ECAADB__CCTOR_OFFSET UNITYSDK_OFFSET(0xDB6DCB0)

inline static constexpr unsigned int Struct_2_9C50B3E290ECAADB_TypeDefinitionIndex = 81412;

struct alignas(8) Struct_2_9C50B3E290ECAADB
{
	static ::Struct_2_9C50B3E290ECAADB* StaticGet_Field_2_2()
	{
		return (::Struct_2_9C50B3E290ECAADB*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9C50B3E290ECAADB_TypeDefinitionIndex)->GetStaticField(0xDB00);
	}
	::Struct_2_AAD4F4215611A948_2 Field_2_0; // 0x10
	::Struct_2_F213AC3D3FBF57B5 Field_2_1; // 0x130

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_9C50B3E290ECAADB__CCTOR_OFFSET))();
	}

	/*
	::Foundation::Unreal::Interval_1<::System::Single> Method_2_1B0527862C8B1813()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9C50B3E290ECAADB_METHOD_2_1B0527862C8B1813_OFFSET))(this);
	}
	*/

	::System::Boolean Method_2_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9C50B3E290ECAADB_METHOD_2_41EC8E0AD6EE8093_OFFSET))(this);
	}

	/*
	::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single> Method_2_1D158F21AF29EF89(::Foundation::Unreal::Interval_1<::System::Single> a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single>(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + STRUCT_2_9C50B3E290ECAADB_METHOD_2_1D158F21AF29EF89_OFFSET))(this, a1);
	}
	*/
};
