#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOMARCELMAPGENERATOR_MARCELBLOCKCOLLECTOR_COLLECT_OFFSET UNITYSDK_OFFSET(0x182F9B50)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOMARCELMAPGENERATOR_MARCELBLOCKCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x182F9B40)

namespace MoleMole::MiniGame::BangbooPartyGame
{
	inline static constexpr unsigned int MonoMarcelMapGenerator_MarcelBlockCollector_TypeDefinitionIndex = 40647;

	class MonoMarcelMapGenerator_MarcelBlockCollector : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _transform; // 0x10

		::System::Void _ctor(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOMARCELMAPGENERATOR_MARCELBLOCKCOLLECTOR__CTOR_OFFSET))(this, transform);
		}

		::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>* Collect()
		{
			return ((::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOMARCELMAPGENERATOR_MARCELBLOCKCOLLECTOR_COLLECT_OFFSET))(this);
		}
	};
}
