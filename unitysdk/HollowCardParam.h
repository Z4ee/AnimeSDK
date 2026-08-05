#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class AnimationCurve; }

#define HOLLOWCARDPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD7AC0)

inline static constexpr unsigned int HollowCardParam_TypeDefinitionIndex = 67372;

class HollowCardParam : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
{
public:
	::System::Single AnimLength; // 0x58
	::UnityEngine::AnimationCurve* Curve; // 0x60
	::System::Single Interval; // 0x68
	::System::Single StanimaValue; // 0x6C
	::System::Single CurseUpdateInterval; // 0x70
	::System::Single PunishOverloadFadeOutTime; // 0x74
	::System::Single PunishOverloadTime; // 0x78
	::UnityEngine::Vector4 DevelopRectParamDefault; // 0x7C
	::UnityEngine::Vector4 HollowItemRectParamDefault; // 0x8C
	::UnityEngine::Vector4 DevelopRectParam; // 0x9C
	::UnityEngine::Vector4 HollowItemRectParam; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLLOWCARDPARAM__CTOR_OFFSET))(this);
	}
};
