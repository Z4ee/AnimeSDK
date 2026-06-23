#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_METHOD_5_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x14189370)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x14189230)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x141892B0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_SIMULATEMOTION_OFFSET UNITYSDK_OFFSET(0x14189130)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x14189320)

namespace MoleMole::MiniGame::BangbooPartyGame
{
	inline static constexpr unsigned int MonoParabolicMotion_TypeDefinitionIndex = 44634;

	class MonoParabolicMotion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single climaxPoint; // 0x18
		::UnityEngine::Vector3 originalSpeed; // 0x1C
		::UnityEngine::Transform* destination; // 0x28
		::UnityEngine::Vector3 Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION__CTOR_OFFSET))(this);
		}

		::System::Void SimulateMotion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_SIMULATEMOTION_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_RESETPOSITION_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 Method_5_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_METHOD_5_10867B69EFBCA83E_OFFSET))(a1);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
		}
	};
}
