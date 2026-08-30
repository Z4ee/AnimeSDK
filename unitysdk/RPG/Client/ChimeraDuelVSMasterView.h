#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHIMERADUELVSMASTERVIEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCBF5A10)
#define RPG_CLIENT_CHIMERADUELVSMASTERVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0xCBF51D0)
#define RPG_CLIENT_CHIMERADUELVSMASTERVIEW_PLAYFREESTYLE_OFFSET UNITYSDK_OFFSET(0xCBF5970)
#define RPG_CLIENT_CHIMERADUELVSMASTERVIEW__CREATEENTITY_OFFSET UNITYSDK_OFFSET(0xCBF5670)
#define RPG_CLIENT_CHIMERADUELVSMASTERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xCBF5B50)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelVSMasterView_TypeDefinitionIndex = 68611;

	class ChimeraDuelVSMasterView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::GameEntity* _Entity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELVSMASTERVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Load(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELVSMASTERVIEW_LOAD_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* _CreateEntity(::RPG::Client::ChimeraDuelMasterData* a1, ::UnityEngine::Transform* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELVSMASTERVIEW__CREATEENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void PlayFreeStyle(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELVSMASTERVIEW_PLAYFREESTYLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELVSMASTERVIEW_DISPOSE_OFFSET))(this);
		}
	};
}
