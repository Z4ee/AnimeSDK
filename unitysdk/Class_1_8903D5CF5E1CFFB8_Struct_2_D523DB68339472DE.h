#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_8903D5CF5E1CFFB8_STRUCT_2_D523DB68339472DE_METHOD_2_656A40E88F3682F6_OFFSET UNITYSDK_OFFSET(0x16610A60)
#define CLASS_1_8903D5CF5E1CFFB8_STRUCT_2_D523DB68339472DE_METHOD_2_E5B3535CD7CF2667_OFFSET UNITYSDK_OFFSET(0x2E853D0)
#define CLASS_1_8903D5CF5E1CFFB8_STRUCT_2_D523DB68339472DE__CTOR_OFFSET UNITYSDK_OFFSET(0x2E853A0)

inline static constexpr unsigned int Class_1_8903D5CF5E1CFFB8_Struct_2_D523DB68339472DE_TypeDefinitionIndex = 48944;

struct alignas(8) Class_1_8903D5CF5E1CFFB8_Struct_2_D523DB68339472DE
{
	::Il2CppArray<::UnityEngine::Vector2>* NDCKOALGHDL; // 0x10
	::System::Single OGCGJNFANAH; // 0x18
	::System::Single GAFLPFPIMBA; // 0x1C
	::UnityEngine::Vector2 IEFJBBELNOD; // 0x20
	::UnityEngine::Vector2 BJCDMCGHONM; // 0x28

	::System::Void _ctor(::Il2CppArray<::UnityEngine::Vector2>* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_STRUCT_2_D523DB68339472DE__CTOR_OFFSET))(this, a1, a2, a3);
	}

	/*
	::System::Boolean Method_2_E5B3535CD7CF2667(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_STRUCT_2_D523DB68339472DE_METHOD_2_E5B3535CD7CF2667_OFFSET))(this, a1, a2, a3);
	}
	*/

	static ::System::Void Method_2_656A40E88F3682F6(::Il2CppArray<::UnityEngine::Vector2>* a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_STRUCT_2_D523DB68339472DE_METHOD_2_656A40E88F3682F6_OFFSET))(a1, a2, a3);
	}
};
