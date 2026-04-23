#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class BehaviorBase; }
namespace RPG::Client { class CRPVCBackground; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CLIENT_SMALLWINDOWVCCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0xB192740)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL_CREATEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xB1929C0)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB192AD0)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB192790)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB192960)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB192850)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL_REFRESH_OFFSET UNITYSDK_OFFSET(0xB192A10)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xB1928A0)
#define RPG_CLIENT_SMALLWINDOWVCCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB192B30)

namespace RPG::Client
{
	inline static constexpr unsigned int SmallWindowVCControl_TypeDefinitionIndex = 64250;

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

		::System::Void Method_5_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMALLWINDOWVCCONTROL_METHOD_5_A239DF324AF4215D_OFFSET))(this);
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
