#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHIMERADUELVSMASTERVIEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93B7140)
#define RPG_CLIENT_CHIMERADUELVSMASTERVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x93B6A50)
#define RPG_CLIENT_CHIMERADUELVSMASTERVIEW_PLAYFREESTYLE_OFFSET UNITYSDK_OFFSET(0x93B70A0)
#define RPG_CLIENT_CHIMERADUELVSMASTERVIEW__CREATEENTITY_OFFSET UNITYSDK_OFFSET(0x93B6E20)
#define RPG_CLIENT_CHIMERADUELVSMASTERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x93B7280)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelVSMasterView_TypeDefinitionIndex = 56064;

	class ChimeraDuelVSMasterView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::GameEntity* _Entity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELVSMASTERVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Load(::System::UInt32 masterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELVSMASTERVIEW_LOAD_OFFSET))(this, masterID);
		}

		::RPG::GameCore::GameEntity* _CreateEntity(::RPG::Client::ChimeraDuelMasterData* master, ::UnityEngine::Transform* bodyAnchorRef)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELVSMASTERVIEW__CREATEENTITY_OFFSET))(this, master, bodyAnchorRef);
		}

		::System::Void PlayFreeStyle(::System::UInt32 motionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELVSMASTERVIEW_PLAYFREESTYLE_OFFSET))(this, motionID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELVSMASTERVIEW_DISPOSE_OFFSET))(this);
		}
	};
}
