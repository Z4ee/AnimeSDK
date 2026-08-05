#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_114D54A31CF2C177.h"
#include "unitysdk/Struct_2_AAD4F4215611A948.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_5A85969690BAF8B8_METHOD_2_1B0527862C8B1813_OFFSET UNITYSDK_OFFSET(0x7F86A0)
#define STRUCT_2_5A85969690BAF8B8_METHOD_2_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x7F84C0)
#define STRUCT_2_5A85969690BAF8B8_METHOD_2_F4EAD4EE4E627DC0_OFFSET UNITYSDK_OFFSET(0x7F7DB0)
#define STRUCT_2_5A85969690BAF8B8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1445EEB0)

inline static constexpr unsigned int Struct_2_5A85969690BAF8B8_TypeDefinitionIndex = 44231;

struct alignas(8) Struct_2_5A85969690BAF8B8
{
	static ::Struct_2_5A85969690BAF8B8* StaticGet_Field_2_0()
	{
		return (::Struct_2_5A85969690BAF8B8*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_5A85969690BAF8B8_TypeDefinitionIndex)->GetStaticField(0x115F0);
	}
	::Struct_2_AAD4F4215611A948 Field_2_2; // 0x10
	::Struct_2_114D54A31CF2C177 Field_2_1; // 0x130

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_5A85969690BAF8B8__CCTOR_OFFSET))();
	}

	/*
	::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single> Method_2_F4EAD4EE4E627DC0(::Foundation::Unreal::Interval_1<::System::Single> a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single>(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + STRUCT_2_5A85969690BAF8B8_METHOD_2_F4EAD4EE4E627DC0_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A85969690BAF8B8_METHOD_2_41EC8E0AD6EE8093_OFFSET))(this);
	}

	/*
	::Foundation::Unreal::Interval_1<::System::Single> Method_2_1B0527862C8B1813()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A85969690BAF8B8_METHOD_2_1B0527862C8B1813_OFFSET))(this);
	}
	*/
};
