#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class BehaviorBase; }
namespace RPG::Client { class CRPVCBackground; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CLIENT_SMALLWINDOWVCCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x18905630)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL_CREATEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x189059A0)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18905AC0)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL_METHOD_5_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x18905680)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x189058E0)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x189057C0)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL_REFRESH_OFFSET UNITYSDK_OFFSET(0x189059F0)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x18905810)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x18905B80)

namespace RPG::Client
{
	inline static constexpr unsigned int SmallWindowVCControl_TypeDefinitionIndex = 66580;

	class SmallWindowVCControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::CRPVirtualCamera* VCSmallWindow; // 0x18
		::System::Single WindowCenterX; // 0x20
		::System::Single WindowCenterY; // 0x24
		::System::Single WindowWidth; // 0x28
		::System::Single WindowHeight; // 0x2C
		::RPG::Client::CRPVCBackground* SmallWindowBackground; // 0x30
		::RPG::Client::BehaviorBase* Field_5_6; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMALLWINDOWVCCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMALLWINDOWVCCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMALLWINDOWVCCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMALLWINDOWVCCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMALLWINDOWVCCONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMALLWINDOWVCCONTROL_METHOD_5_7DB49B5407C8FD68_OFFSET))(this);
		}

		::System::Void CreateBehavior()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMALLWINDOWVCCONTROL_CREATEBEHAVIOR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMALLWINDOWVCCONTROL_REFRESH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMALLWINDOWVCCONTROL_DISPOSE_OFFSET))(this);
		}
	};
}
