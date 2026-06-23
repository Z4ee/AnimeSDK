#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/MiniGame3DManifest.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Arcade::BallsRace::Client { class BrCinemachinePath; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class Volume; }

#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMEMANIFEST_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E295F00)
#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMEMANIFEST_GET_INS_OFFSET UNITYSDK_OFFSET(0x1E295EF0)
#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMEMANIFEST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E295F50)
#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMEMANIFEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E295FA0)

namespace MoleMole::Arcade::BallsRace::Client
{
	inline static constexpr unsigned int BRGameManifest_TypeDefinitionIndex = 89510;

	class BRGameManifest : public ::MoleMole::MiniGame::MiniGame3DManifest
	{
	public:
		static ::MoleMole::Arcade::BallsRace::Client::BRGameManifest** StaticGet_Field_7_6()
		{
			return (::MoleMole::Arcade::BallsRace::Client::BRGameManifest**)Il2CppClass::FromTypeDefinitionIndex(BRGameManifest_TypeDefinitionIndex)->GetStaticField(0x4DFD0);
		}
		::Cinemachine::CinemachineVirtualCamera* VCam; // 0x58
		::Cinemachine::CinemachineVirtualCamera* RoleSelectVCam; // 0x60
		::MoleMole::Arcade::BallsRace::Client::BrCinemachinePath* CamPath; // 0x68
		::UnityEngine::Material* SkyBox; // 0x70
		::UnityEngine::GameObject* SkyBoxGo; // 0x78
		::UnityEngine::Rendering::Volume* Volume; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMEMANIFEST__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Arcade::BallsRace::Client::BRGameManifest* get_Ins()
		{
			return ((::MoleMole::Arcade::BallsRace::Client::BRGameManifest*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMEMANIFEST_GET_INS_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMEMANIFEST_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMEMANIFEST_ONDESTROY_OFFSET))(this);
		}
	};
}
