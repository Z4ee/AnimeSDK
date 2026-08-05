#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_8500CCAF67F8FA7F.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define STRUCT_2_218FFCFFC544A6B9_METHOD_2_3D78D2E0F9F95F07_1_OFFSET UNITYSDK_OFFSET(0x7CC860)
#define STRUCT_2_218FFCFFC544A6B9_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x7CC770)
#define STRUCT_2_218FFCFFC544A6B9_METHOD_2_4E84FD21E7EECC5B_OFFSET UNITYSDK_OFFSET(0x7CC790)
#define STRUCT_2_218FFCFFC544A6B9_METHOD_2_A2846FC5EA0763C6_OFFSET UNITYSDK_OFFSET(0x322600)
#define STRUCT_2_218FFCFFC544A6B9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7CC720)
#define STRUCT_2_218FFCFFC544A6B9__CTOR_OFFSET UNITYSDK_OFFSET(0x7CC6B0)

inline static constexpr unsigned int Struct_2_218FFCFFC544A6B9_TypeDefinitionIndex = 70318;

struct alignas(8) Struct_2_218FFCFFC544A6B9
{
	::UnityEngine::Bounds Field_2_0; // 0x10
	::Struct_2_8500CCAF67F8FA7F Field_2_7; // 0x28
	::Struct_2_8500CCAF67F8FA7F Field_2_6; // 0x58

	::System::Void _ctor(::UnityEngine::Bounds a1, ::Struct_2_8500CCAF67F8FA7F a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::Struct_2_8500CCAF67F8FA7F))((::PBYTE)hIl2Cpp + STRUCT_2_218FFCFFC544A6B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::UnityEngine::Bounds a1, ::Struct_2_8500CCAF67F8FA7F a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::Struct_2_8500CCAF67F8FA7F, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_218FFCFFC544A6B9__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_8500CCAF67F8FA7F Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_8500CCAF67F8FA7F(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_218FFCFFC544A6B9_METHOD_2_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Boolean Method_2_4E84FD21E7EECC5B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_218FFCFFC544A6B9_METHOD_2_4E84FD21E7EECC5B_OFFSET))(this);
	}

	::Struct_2_8500CCAF67F8FA7F Method_2_3D78D2E0F9F95F07_1()
	{
		return ((::Struct_2_8500CCAF67F8FA7F(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_218FFCFFC544A6B9_METHOD_2_3D78D2E0F9F95F07_1_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_2_A2846FC5EA0763C6()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_218FFCFFC544A6B9_METHOD_2_A2846FC5EA0763C6_OFFSET))(this);
	}
};
