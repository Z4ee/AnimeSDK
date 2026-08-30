#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_BLENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC95D680)

namespace RPG::Client
{
	inline static constexpr unsigned int BlendConfig_TypeDefinitionIndex = 69665;

	class BlendConfig : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::Cinemachine::CinemachineBlendDefinition_Style Style; // 0x18
		::System::Single Time; // 0x1C
		::UnityEngine::AnimationCurve* Curve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLENDCONFIG__CTOR_OFFSET))(this);
		}
	};
}
