#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class UIBallGameMainPageController_BallPitInitGameContext; }
namespace System { class EventArgs; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DDF0430)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_GENERATEMAINPAGECONTEXT_OFFSET UNITYSDK_OFFSET(0x1DDF0830)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_METHOD_5_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x1DDF04C0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_METHOD_5_8D51EA8930FD3172_OFFSET UNITYSDK_OFFSET(0x1DDF15B0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1DDF07F0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_START_OFFSET UNITYSDK_OFFSET(0x1DDF0470)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF1560)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallPitGameLauncher_TypeDefinitionIndex = 89490;

	class BallPitGameLauncher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_ONDESTROY_OFFSET))(this);
		}

		::MoleMole::UIBallGameMainPageController_BallPitInitGameContext* GenerateMainPageContext()
		{
			return ((::MoleMole::UIBallGameMainPageController_BallPitInitGameContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_GENERATEMAINPAGECONTEXT_OFFSET))(this);
		}

		::System::Void Method_5_8D51EA8930FD3172(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_METHOD_5_8D51EA8930FD3172_OFFSET))(this, a1);
		}

		::System::Void Method_5_6916CB2AB9451DD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_METHOD_5_6916CB2AB9451DD7_OFFSET))(this);
		}
	};
}
