#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define STRUCT_2_CA25BDF8E803FBAA_METHOD_2_9F84D1FF74319152_OFFSET UNITYSDK_OFFSET(0x82E970)
#define STRUCT_2_CA25BDF8E803FBAA_METHOD_2_A2846FC5EA0763C6_OFFSET UNITYSDK_OFFSET(0x82E950)
#define STRUCT_2_CA25BDF8E803FBAA_METHOD_2_E3B6DD75936C22F3_OFFSET UNITYSDK_OFFSET(0x34D000)
#define STRUCT_2_CA25BDF8E803FBAA__CTOR_OFFSET UNITYSDK_OFFSET(0x82E900)

inline static constexpr unsigned int Struct_2_CA25BDF8E803FBAA_TypeDefinitionIndex = 87274;

struct alignas(4) Struct_2_CA25BDF8E803FBAA
{
	::Foundation::Unreal::FTransform3D Field_2_0; // 0x10
	::UnityEngine::Bounds Field_2_1; // 0x38

	::System::Void _ctor(::Foundation::Unreal::FTransform3D a1, ::UnityEngine::Bounds a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform3D, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + STRUCT_2_CA25BDF8E803FBAA__CTOR_OFFSET))(this, a1, a2);
	}

	::Foundation::Unreal::FTransform3D Method_2_E3B6DD75936C22F3()
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CA25BDF8E803FBAA_METHOD_2_E3B6DD75936C22F3_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_2_A2846FC5EA0763C6()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CA25BDF8E803FBAA_METHOD_2_A2846FC5EA0763C6_OFFSET))(this);
	}

	::System::Boolean Method_2_9F84D1FF74319152()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CA25BDF8E803FBAA_METHOD_2_9F84D1FF74319152_OFFSET))(this);
	}
};
