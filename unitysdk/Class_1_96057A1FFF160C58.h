#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_96057A1FFF160C58__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0ABE0)

inline static constexpr unsigned int Class_1_96057A1FFF160C58_TypeDefinitionIndex = 42084;

class Class_1_96057A1FFF160C58 : public ::System::Object
{
public:
	::System::Action* DPANHIICMLD; // 0x10
	::UnityEngine::AnimationCurve* HDLKELNBCNL; // 0x18
	::System::Single AEFONDFPGEI; // 0x20
	::System::Single FAFBLAFJGJD; // 0x24
	::System::Single HKOANFBDPCK; // 0x28
	::UnityEngine::Vector3 DLKMKNFJLIK; // 0x2C
	::System::Single IEHPFADHJFD; // 0x38
	::UnityEngine::Vector3 EKKNKFAGHLE; // 0x3C
	::System::Single NKICNCOLGFF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96057A1FFF160C58__CTOR_OFFSET))(this);
	}
};
