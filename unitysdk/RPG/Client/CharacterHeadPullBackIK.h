#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FABRIK.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHARACTERHEADPULLBACKIK_PROCESSIK_OFFSET UNITYSDK_OFFSET(0x9F70E50)
#define RPG_CLIENT_CHARACTERHEADPULLBACKIK__CTOR_OFFSET UNITYSDK_OFFSET(0x9F714D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterHeadPullBackIK_TypeDefinitionIndex = 63051;

	class CharacterHeadPullBackIK : public ::RPG::Client::FABRIK
	{
	public:
		::System::Single LerpSpeed; // 0x60
		::UnityEngine::Transform* RunPullBackTransform; // 0x68
		::UnityEngine::Transform* FastRunPullBackTransform; // 0x70
		::UnityEngine::Vector3 Field_6_3; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERHEADPULLBACKIK__CTOR_OFFSET))(this);
		}

		::System::Void ProcessIK(::RPG::GameCore::CharacterMotionFlag a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERHEADPULLBACKIK_PROCESSIK_OFFSET))(this, a1, a2);
		}
	};
}
