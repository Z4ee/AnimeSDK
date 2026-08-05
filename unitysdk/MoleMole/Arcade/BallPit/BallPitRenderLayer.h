#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_70B7FA67472246C5.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Renderer; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EBD99A0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1EBD9940)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_COPYTOALLCHILDREN_OFFSET UNITYSDK_OFFSET(0x1EBD95B0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_GET_MAINRENDERER_OFFSET UNITYSDK_OFFSET(0x1EBD95A0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1EBD9AA0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_METHOD_5_FB306D946BF229A1_OFFSET UNITYSDK_OFFSET(0x1EBD9BC0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBD9B70)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallPitRenderLayer_TypeDefinitionIndex = 93298;

	class BallPitRenderLayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_70B7FA67472246C5 Layer; // 0x18
		::System::Int32 SubLayer; // 0x1C
		::UnityEngine::Renderer* Field_5_6; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Renderer* get_MainRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_GET_MAINRENDERER_OFFSET))(this);
		}

		::System::Void CopyToAllChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_COPYTOALLCHILDREN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_AWAKE_OFFSET))(this);
		}

		::System::Void CopyFrom(::MoleMole::Arcade::BallPit::BallPitRenderLayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Arcade::BallPit::BallPitRenderLayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_COPYFROM_OFFSET))(this, a1);
		}

		::System::Void Method_5_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_METHOD_5_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_5_FB306D946BF229A1(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_METHOD_5_FB306D946BF229A1_OFFSET))(this, a1);
		}
	};
}
