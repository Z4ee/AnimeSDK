#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AnimationClipMotionParamGroup.h"
#include "unitysdk/RPG/Client/CharacterMotionParamData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_RTCHARACTERANIMINFOBAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A1DFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RtCharacterAnimInfoBaker_TypeDefinitionIndex = 73156;

	class RtCharacterAnimInfoBaker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AnimationClipMotionParamGroup MotionParamGroup; // 0x18
		::RPG::Client::CharacterMotionParamData MotionParamData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RTCHARACTERANIMINFOBAKER__CTOR_OFFSET))(this);
		}
	};
}
