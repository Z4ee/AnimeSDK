#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define STRUCT_2_143B7A497B890286_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xDA9C0)
#define STRUCT_2_143B7A497B890286_METHOD_2_57B996E880F6A8CA_OFFSET UNITYSDK_OFFSET(0xDAA20)
#define STRUCT_2_143B7A497B890286_METHOD_2_93FF35ED7195B3DA_OFFSET UNITYSDK_OFFSET(0xDAAB0)
#define STRUCT_2_143B7A497B890286__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA8BD70)
#define STRUCT_2_143B7A497B890286__CTOR_1_OFFSET UNITYSDK_OFFSET(0xDA980)
#define STRUCT_2_143B7A497B890286__CTOR_OFFSET UNITYSDK_OFFSET(0x743C0)

inline static constexpr unsigned int Struct_2_143B7A497B890286_TypeDefinitionIndex = 55926;

struct alignas(4) Struct_2_143B7A497B890286
{
	static ::Struct_2_143B7A497B890286* StaticGet_Field_2_0()
	{
		return (::Struct_2_143B7A497B890286*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_143B7A497B890286_TypeDefinitionIndex)->GetStaticField(0xC560);
	}
	static ::Struct_2_143B7A497B890286* StaticGet_Field_2_1()
	{
		return (::Struct_2_143B7A497B890286*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_143B7A497B890286_TypeDefinitionIndex)->GetStaticField(0xC570);
	}
	::UnityEngine::Vector2 Field_2_2; // 0x10
	::UnityEngine::Vector2 Field_2_3; // 0x18

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
