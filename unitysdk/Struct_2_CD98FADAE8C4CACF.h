#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define STRUCT_2_CD98FADAE8C4CACF_METHOD_2_0BC937355C326A37_OFFSET UNITYSDK_OFFSET(0x1817D6F0)
#define STRUCT_2_CD98FADAE8C4CACF_METHOD_2_5715BE153D24F100_OFFSET UNITYSDK_OFFSET(0x1817E330)
#define STRUCT_2_CD98FADAE8C4CACF_METHOD_2_6215A8999654A40E_OFFSET UNITYSDK_OFFSET(0x1817E2E0)
#define STRUCT_2_CD98FADAE8C4CACF_METHOD_2_959545BFD49B48E1_OFFSET UNITYSDK_OFFSET(0x1817D4B0)
#define STRUCT_2_CD98FADAE8C4CACF_METHOD_2_B28EA912AECCA006_OFFSET UNITYSDK_OFFSET(0x1817E170)
#define STRUCT_2_CD98FADAE8C4CACF_METHOD_2_CE10274E26837E7C_OFFSET UNITYSDK_OFFSET(0x7E1F30)

inline static constexpr unsigned int Struct_2_CD98FADAE8C4CACF_TypeDefinitionIndex = 48711;

struct alignas(8) Struct_2_CD98FADAE8C4CACF
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::UnityEngine::Vector3 Field_2_2; // 0x18
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_3; // 0x28
	::System::Single Field_2_4; // 0x30
	::System::Single Field_2_5; // 0x34
	::System::Single Field_2_6; // 0x38
	::System::Single Field_2_7; // 0x3C
	::System::Boolean Field_2_8; // 0x40
	::System::Boolean Field_2_9; // 0x41
	::UnityEngine::AnimationCurve* Field_2_10; // 0x48

	static ::System::Single Method_2_959545BFD49B48E1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_CD98FADAE8C4CACF_METHOD_2_959545BFD49B48E1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_2_0BC937355C326A37(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_CD98FADAE8C4CACF_METHOD_2_0BC937355C326A37_OFFSET))(a1, a2, a3, a4);
	}

	/*
	::PipelineCamera::WorldBasicCameraData Method_2_CE10274E26837E7C()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CD98FADAE8C4CACF_METHOD_2_CE10274E26837E7C_OFFSET))(this);
	}
	*/

	static ::UnityEngine::Vector3 Method_2_B28EA912AECCA006(::Il2CppArray<::UnityEngine::Vector3>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_CD98FADAE8C4CACF_METHOD_2_B28EA912AECCA006_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_2_6215A8999654A40E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_CD98FADAE8C4CACF_METHOD_2_6215A8999654A40E_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_2_5715BE153D24F100(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::AnimationCurve* a3)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + STRUCT_2_CD98FADAE8C4CACF_METHOD_2_5715BE153D24F100_OFFSET))(a1, a2, a3);
	}
};
