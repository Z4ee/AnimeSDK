#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EAvatarLightChangeType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace MoleMole { class UIAvatarLightSetting; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_146B801758087363_METHOD_2_45A28948EFC6A77D_OFFSET UNITYSDK_OFFSET(0x67E860)
#define STRUCT_2_146B801758087363_METHOD_2_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0x67E880)
#define STRUCT_2_146B801758087363_METHOD_2_D37CCCD272A7FD3E_OFFSET UNITYSDK_OFFSET(0x67E900)
#define STRUCT_2_146B801758087363_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x5806F0)

inline static constexpr unsigned int Struct_2_146B801758087363_TypeDefinitionIndex = 63183;

struct alignas(8) Struct_2_146B801758087363
{
	::MoleMole::EAvatarLightChangeType Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::UnityEngine::Quaternion Field_2_3; // 0x1C
	::UnityEngine::Quaternion Field_2_4; // 0x2C
	::UnityEngine::AnimationCurve* Field_2_5; // 0x40

	::UnityEngine::Quaternion Method_2_45A28948EFC6A77D(::System::Single a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + STRUCT_2_146B801758087363_METHOD_2_45A28948EFC6A77D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_146B801758087363_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_2_570C5557A774C69E(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_146B801758087363_METHOD_2_570C5557A774C69E_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_2_D37CCCD272A7FD3E(::MoleMole::UIAvatarLightSetting* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + STRUCT_2_146B801758087363_METHOD_2_D37CCCD272A7FD3E_OFFSET))(this, a1, a2);
	}
};
