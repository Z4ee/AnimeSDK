#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/Struct_2_6AEDA351F1A331D3.h"
#include "unitysdk/Struct_2_C2F56B252E590157.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LookAtTargetConstraint; }

#define STRUCT_2_231BC944D2991258_METHOD_2_1B228CE5D2D71182_OFFSET UNITYSDK_OFFSET(0x14235F0)
#define STRUCT_2_231BC944D2991258_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x14239F0)
#define STRUCT_2_231BC944D2991258_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x1423B20)
#define STRUCT_2_231BC944D2991258_METHOD_2_7F3E5369B1A9C7A0_OFFSET UNITYSDK_OFFSET(0x1423630)
#define STRUCT_2_231BC944D2991258_METHOD_2_A34160E23FF7EE3B_OFFSET UNITYSDK_OFFSET(0x14236E0)
#define STRUCT_2_231BC944D2991258_METHOD_2_A869A2D944B4A769_OFFSET UNITYSDK_OFFSET(0x1423810)
#define STRUCT_2_231BC944D2991258_METHOD_2_A88AE8CFFC3D48DA_OFFSET UNITYSDK_OFFSET(0x1423600)
#define STRUCT_2_231BC944D2991258_METHOD_2_D00EFFFA316CD3C0_OFFSET UNITYSDK_OFFSET(0x14236F0)
#define STRUCT_2_231BC944D2991258_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x14239D0)

inline static constexpr unsigned int Struct_2_231BC944D2991258_TypeDefinitionIndex = 55918;

struct alignas(8) Struct_2_231BC944D2991258
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::UnityEngine::Vector3 Field_2_2; // 0x14
	::System::Single Field_2_3; // 0x20
	::Struct_2_6AEDA351F1A331D3 Field_2_4; // 0x28
	::RootMotion::IKJob::IKTransformRef Field_2_5; // 0x50
	::Struct_2_C2F56B252E590157 Field_2_6; // 0x60
	::UnityEngine::Vector3 Field_2_7; // 0x188
	::UnityEngine::Vector3 Field_2_8; // 0x194
	::UnityEngine::Vector3 Field_2_9; // 0x1A0
	::UnityEngine::Vector3 Field_2_10; // 0x1AC
	::System::Boolean Field_2_11; // 0x1B8
	::System::Boolean Field_2_12; // 0x1B9

	::System::Void Method_2_1B228CE5D2D71182(::System::Single a1, ::System::Single a2, ::System::Single a3, ::RPG::Client::LookAtTargetConstraint* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LookAtTargetConstraint*))((::PBYTE)hIl2Cpp + STRUCT_2_231BC944D2991258_METHOD_2_1B228CE5D2D71182_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_A88AE8CFFC3D48DA(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_231BC944D2991258_METHOD_2_A88AE8CFFC3D48DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7F3E5369B1A9C7A0(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_231BC944D2991258_METHOD_2_7F3E5369B1A9C7A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_A34160E23FF7EE3B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_231BC944D2991258_METHOD_2_A34160E23FF7EE3B_OFFSET))(this, a1);
	}

	::System::Single Method_2_D00EFFFA316CD3C0(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_231BC944D2991258_METHOD_2_D00EFFFA316CD3C0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A869A2D944B4A769(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_231BC944D2991258_METHOD_2_A869A2D944B4A769_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_231BC944D2991258_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_231BC944D2991258_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_231BC944D2991258_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}
};
