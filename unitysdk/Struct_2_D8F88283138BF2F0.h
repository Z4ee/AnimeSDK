#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EAvatarLightChangeType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole { class UIAvatarLightSetting; }
namespace UnityEngine { class AnimationCurve; }

#define STRUCT_2_D8F88283138BF2F0_METHOD_2_3CE83AC3C1D9309E_OFFSET UNITYSDK_OFFSET(0x6936A0)
#define STRUCT_2_D8F88283138BF2F0_METHOD_2_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0x693620)
#define STRUCT_2_D8F88283138BF2F0_METHOD_2_973D0A1DA9EF54E4_OFFSET UNITYSDK_OFFSET(0x693720)
#define STRUCT_2_D8F88283138BF2F0_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x693710)

inline static constexpr unsigned int Struct_2_D8F88283138BF2F0_TypeDefinitionIndex = 59144;

struct alignas(8) Struct_2_D8F88283138BF2F0
{
	::MoleMole::EAvatarLightChangeType Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::UnityEngine::Quaternion Field_2_3; // 0x1C
	::UnityEngine::Quaternion Field_2_4; // 0x2C
	::UnityEngine::Quaternion Field_2_5; // 0x3C
	::UnityEngine::Quaternion Field_2_6; // 0x4C
	::UnityEngine::Vector4 Field_2_7; // 0x5C
	::UnityEngine::AnimationCurve* Field_2_8; // 0x70

	::System::Single Method_2_570C5557A774C69E(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_D8F88283138BF2F0_METHOD_2_570C5557A774C69E_OFFSET))(this, a1);
	}

	/*
	::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion> Method_2_3CE83AC3C1D9309E(::System::Single a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion>(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_D8F88283138BF2F0_METHOD_2_3CE83AC3C1D9309E_OFFSET))(this, a1, a2, a3, a4);
	}
	*/

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D8F88283138BF2F0_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	/*
	::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion> Method_2_973D0A1DA9EF54E4(::MoleMole::UIAvatarLightSetting* a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::UnityEngine::Quaternion a5)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion>(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_D8F88283138BF2F0_METHOD_2_973D0A1DA9EF54E4_OFFSET))(this, a1, a2, a3, a4, a5);
	}
	*/
};
