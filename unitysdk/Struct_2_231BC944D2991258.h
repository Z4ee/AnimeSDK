#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/Struct_2_6AEDA351F1A331D3.h"
#include "unitysdk/Struct_2_C2F56B252E590157.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LookAtTargetConstraint; }

#define STRUCT_2_231BC944D2991258_METHOD_2_1B228CE5D2D71182_OFFSET UNITYSDK_OFFSET(0x2DEDDE0)
#define STRUCT_2_231BC944D2991258_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x2DEE1B0)
#define STRUCT_2_231BC944D2991258_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x2DEE2E0)
#define STRUCT_2_231BC944D2991258_METHOD_2_7F3E5369B1A9C7A0_OFFSET UNITYSDK_OFFSET(0x2DEDE20)
#define STRUCT_2_231BC944D2991258_METHOD_2_A34160E23FF7EE3B_OFFSET UNITYSDK_OFFSET(0x2DEDED0)
#define STRUCT_2_231BC944D2991258_METHOD_2_A869A2D944B4A769_OFFSET UNITYSDK_OFFSET(0x2DEE000)
#define STRUCT_2_231BC944D2991258_METHOD_2_A88AE8CFFC3D48DA_OFFSET UNITYSDK_OFFSET(0x2DEDDF0)
#define STRUCT_2_231BC944D2991258_METHOD_2_D00EFFFA316CD3C0_OFFSET UNITYSDK_OFFSET(0x2DEDEE0)
#define STRUCT_2_231BC944D2991258_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x2DEE190)

inline static constexpr unsigned int Struct_2_231BC944D2991258_TypeDefinitionIndex = 68454;

struct alignas(8) Struct_2_231BC944D2991258
{
	::System::Boolean JGCPBGGDEIN; // 0x10
	::System::Boolean CMMFHJEMKLJ; // 0x11
	::UnityEngine::Vector3 LOHDILLJMPB; // 0x14
	::System::Single APAKCBFMCAB; // 0x20
	::Struct_2_6AEDA351F1A331D3 HKPKPKDNADH; // 0x28
	::RootMotion::IKJob::IKTransformRef DHIPFJBEJPI; // 0x50
	::Struct_2_C2F56B252E590157 PCKJJLKKAHK; // 0x60
	::UnityEngine::Vector3 HPCDFGDODHF; // 0x188
	::UnityEngine::Vector3 HPKPBIHADFF; // 0x194
	::UnityEngine::Vector3 IOPNOMCOKGH; // 0x1A0
	::UnityEngine::Vector3 HGCMEGBPGLB; // 0x1AC
	::System::Boolean ODFIMBNOOCI; // 0x1B8
	::System::Boolean KKJLMNLCMBK; // 0x1B9

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
