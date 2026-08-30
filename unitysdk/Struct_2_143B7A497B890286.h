#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define STRUCT_2_143B7A497B890286_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x3AE08A0)
#define STRUCT_2_143B7A497B890286_METHOD_2_57B996E880F6A8CA_OFFSET UNITYSDK_OFFSET(0x3AE0900)
#define STRUCT_2_143B7A497B890286_METHOD_2_93FF35ED7195B3DA_OFFSET UNITYSDK_OFFSET(0x3AE0990)
#define STRUCT_2_143B7A497B890286__CCTOR_OFFSET UNITYSDK_OFFSET(0x18567A40)
#define STRUCT_2_143B7A497B890286__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3AE0860)
#define STRUCT_2_143B7A497B890286__CTOR_OFFSET UNITYSDK_OFFSET(0x6B85C0)

inline static constexpr unsigned int Struct_2_143B7A497B890286_TypeDefinitionIndex = 60748;

struct alignas(4) Struct_2_143B7A497B890286
{
	static ::Struct_2_143B7A497B890286* StaticGet_IGCMPJGPOND()
	{
		return (::Struct_2_143B7A497B890286*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_143B7A497B890286_TypeDefinitionIndex)->GetStaticField(0x12B90);
	}
	static ::Struct_2_143B7A497B890286* StaticGet_COAHELMPGLI()
	{
		return (::Struct_2_143B7A497B890286*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_143B7A497B890286_TypeDefinitionIndex)->GetStaticField(0x12BA0);
	}
	::UnityEngine::Vector2 EFNAJMADAHM; // 0x10
	::UnityEngine::Vector2 NKAACMGNNPK; // 0x18

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STRUCT_2_143B7A497B890286__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::UnityEngine::Vector2 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_143B7A497B890286__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_143B7A497B890286__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_143B7A497B890286_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	/*
	::System::Boolean Method_2_57B996E880F6A8CA(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_143B7A497B890286_METHOD_2_57B996E880F6A8CA_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_93FF35ED7195B3DA(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STRUCT_2_143B7A497B890286_METHOD_2_93FF35ED7195B3DA_OFFSET))(this, a1);
	}
};
