#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/Struct_2_746370D3F3911884.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_C2F56B252E590157_METHOD_2_5488BB7F3C840805_OFFSET UNITYSDK_OFFSET(0xDD830)
#define STRUCT_2_C2F56B252E590157_METHOD_2_B1564B8ADEAF75B1_OFFSET UNITYSDK_OFFSET(0xDD780)
#define STRUCT_2_C2F56B252E590157_METHOD_2_BD25FD6417910E27_OFFSET UNITYSDK_OFFSET(0xDD850)
#define STRUCT_2_C2F56B252E590157_METHOD_2_CC6A1184169D3920_OFFSET UNITYSDK_OFFSET(0xDD740)
#define STRUCT_2_C2F56B252E590157_METHOD_2_CC74714172F771CD_OFFSET UNITYSDK_OFFSET(0xDD800)
#define STRUCT_2_C2F56B252E590157_METHOD_2_EDD16E7B688599FA_OFFSET UNITYSDK_OFFSET(0xDD840)

inline static constexpr unsigned int Struct_2_C2F56B252E590157_TypeDefinitionIndex = 63151;

struct alignas(8) Struct_2_C2F56B252E590157
{
	::RootMotion::IKJob::IKTransformRef Field_2_0; // 0x10
	::RootMotion::IKJob::IKTransformRef Field_2_1; // 0x20
	::RootMotion::IKJob::IKTransformRef Field_2_2; // 0x30
	::System::Boolean Field_2_3; // 0x40
	::System::Single Field_2_4; // 0x44
	::System::Single Field_2_5; // 0x48
	::System::Single Field_2_6; // 0x4C
	::System::Single Field_2_7; // 0x50
	::System::Single Field_2_8; // 0x54
	::System::Single Field_2_9; // 0x58
	::System::Single Field_2_10; // 0x5C
	::System::Single Field_2_11; // 0x60
	::System::Single Field_2_12; // 0x64
	::Il2CppArray<::System::Single>* Field_2_13; // 0x68
	::Il2CppArray<::System::Single>* Field_2_14; // 0x70
	::Struct_2_746370D3F3911884 Field_2_15; // 0x78
	::Il2CppArray<::Struct_2_746370D3F3911884>* Field_2_16; // 0xD8
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_17; // 0xE0
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_18; // 0xE8
	::System::Int32 Field_2_19; // 0xF0
	::System::Single Field_2_20; // 0xF4
	::UnityEngine::Vector3 Field_2_21; // 0xF8
	::UnityEngine::Vector3 Field_2_22; // 0x104
	::UnityEngine::Vector3 Field_2_23; // 0x110
	::UnityEngine::Vector3 Field_2_24; // 0x11C
	::System::Boolean Field_2_25; // 0x128
	::UnityEngine::Vector3 Field_2_26; // 0x12C

	::System::Void Method_2_CC6A1184169D3920(::RootMotion::IKJob::IKTransformRef a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_C2F56B252E590157_METHOD_2_CC6A1184169D3920_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_B1564B8ADEAF75B1(::RootMotion::IKJob::IKTransformRef a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_C2F56B252E590157_METHOD_2_B1564B8ADEAF75B1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::Vector3 Method_2_CC74714172F771CD(::RootMotion::IKJob::IKTransformRef a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_C2F56B252E590157_METHOD_2_CC74714172F771CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5488BB7F3C840805(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_C2F56B252E590157_METHOD_2_5488BB7F3C840805_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EDD16E7B688599FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_C2F56B252E590157_METHOD_2_EDD16E7B688599FA_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Vector3>* Method_2_BD25FD6417910E27(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_C2F56B252E590157_METHOD_2_BD25FD6417910E27_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
