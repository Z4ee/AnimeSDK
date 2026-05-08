#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A62B8C05FE608BC8.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define STRUCT_2_218FFCFFC544A6B9_METHOD_2_3D78D2E0F9F95F07_1_OFFSET UNITYSDK_OFFSET(0x7E3AA0)
#define STRUCT_2_218FFCFFC544A6B9_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x7E3A80)
#define STRUCT_2_218FFCFFC544A6B9_METHOD_2_4E84FD21E7EECC5B_OFFSET UNITYSDK_OFFSET(0x7E39B0)
#define STRUCT_2_218FFCFFC544A6B9_METHOD_2_A2846FC5EA0763C6_OFFSET UNITYSDK_OFFSET(0x2E44E0)
#define STRUCT_2_218FFCFFC544A6B9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7E3960)
#define STRUCT_2_218FFCFFC544A6B9__CTOR_OFFSET UNITYSDK_OFFSET(0x7E38F0)

inline static constexpr unsigned int Struct_2_218FFCFFC544A6B9_TypeDefinitionIndex = 53905;

struct alignas(8) Struct_2_218FFCFFC544A6B9
{
	::UnityEngine::Bounds Field_2_0; // 0x10
	::Struct_2_A62B8C05FE608BC8 Field_2_1; // 0x28
	::Struct_2_A62B8C05FE608BC8 Field_2_2; // 0x58

	::System::Void _ctor(::UnityEngine::Bounds a1, ::Struct_2_A62B8C05FE608BC8 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::Struct_2_A62B8C05FE608BC8))((::PBYTE)hIl2Cpp + STRUCT_2_218FFCFFC544A6B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::UnityEngine::Bounds a1, ::Struct_2_A62B8C05FE608BC8 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::Struct_2_A62B8C05FE608BC8, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_218FFCFFC544A6B9__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_4E84FD21E7EECC5B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_218FFCFFC544A6B9_METHOD_2_4E84FD21E7EECC5B_OFFSET))(this);
	}

	::Struct_2_A62B8C05FE608BC8 Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_A62B8C05FE608BC8(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_218FFCFFC544A6B9_METHOD_2_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_2_A2846FC5EA0763C6()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_218FFCFFC544A6B9_METHOD_2_A2846FC5EA0763C6_OFFSET))(this);
	}

	::Struct_2_A62B8C05FE608BC8 Method_2_3D78D2E0F9F95F07_1()
	{
		return ((::Struct_2_A62B8C05FE608BC8(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_218FFCFFC544A6B9_METHOD_2_3D78D2E0F9F95F07_1_OFFSET))(this);
	}
};
