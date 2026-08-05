#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_74C6EE564641CFF8_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x805BB0)
#define STRUCT_2_74C6EE564641CFF8_METHOD_2_7DFB4B9C80198D98_1_OFFSET UNITYSDK_OFFSET(0x805B90)
#define STRUCT_2_74C6EE564641CFF8_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x805B70)
#define STRUCT_2_74C6EE564641CFF8_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x805A80)

inline static constexpr unsigned int Struct_2_74C6EE564641CFF8_TypeDefinitionIndex = 60069;

struct alignas(4) Struct_2_74C6EE564641CFF8
{
	::System::Single Field_2_3; // 0x10
	::System::Single Field_2_2; // 0x14
	::UnityEngine::Vector3 Field_2_1; // 0x18
	::UnityEngine::Vector3 Field_2_0; // 0x24
	::UnityEngine::Vector3 Field_2_7; // 0x30

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_74C6EE564641CFF8_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_74C6EE564641CFF8_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_74C6EE564641CFF8_METHOD_2_7DFB4B9C80198D98_1_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_74C6EE564641CFF8_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}
};
