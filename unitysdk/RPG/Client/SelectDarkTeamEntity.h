#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5D178EC982C80153;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateSelectDarkTeamEntityConfig; }
namespace RPG::GameCore { class OverrideSelectDarkTeamEntityCamera; }

#define RPG_CLIENT_SELECTDARKTEAMENTITY_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0xA424F80)
#define RPG_CLIENT_SELECTDARKTEAMENTITY_IGNORE_OFFSET UNITYSDK_OFFSET(0xA425030)
#define RPG_CLIENT_SELECTDARKTEAMENTITY_INIT_OFFSET UNITYSDK_OFFSET(0xA423090)
#define RPG_CLIENT_SELECTDARKTEAMENTITY_OVERRIDECAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xA424F30)
#define RPG_CLIENT_SELECTDARKTEAMENTITY_REFRESH_OFFSET UNITYSDK_OFFSET(0xA4231D0)
#define RPG_CLIENT_SELECTDARKTEAMENTITY_RESET_OFFSET UNITYSDK_OFFSET(0xA423130)
#define RPG_CLIENT_SELECTDARKTEAMENTITY_SAVEPLAYERPREFABSCONFIG_OFFSET UNITYSDK_OFFSET(0xA424FC0)
#define RPG_CLIENT_SELECTDARKTEAMENTITY__CALCLOCALOFFSET_OFFSET UNITYSDK_OFFSET(0xA4244D0)
#define RPG_CLIENT_SELECTDARKTEAMENTITY__CALCOFFSETXZBYHEIGHT_OFFSET UNITYSDK_OFFSET(0xA424EB0)
#define RPG_CLIENT_SELECTDARKTEAMENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0xA4250D0)

namespace RPG::Client
{
	inline static constexpr unsigned int SelectDarkTeamEntity_TypeDefinitionIndex = 56897;

	class SelectDarkTeamEntity : public ::System::Object
	{
	public:
		::RPG::Client::CameraDataAndFlags* _CameraDataRef; // 0x10
		::Class_2_5D178EC982C80153* _OwnerModuleRef; // 0x18
		::RPG::GameCore::OverrideSelectDarkTeamEntityCamera* _OverrideStateConfig; // 0x20
		::RPG::Client::CameraFightStateSelectDarkTeamEntityConfig* _StateConfig; // 0x28
		::UnityEngine::Vector3 _AimOffsetLocal; // 0x30
		::UnityEngine::Vector3 _AnchorOffsetLocal; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_2_5D178EC982C80153* pCameraFightModule, ::RPG::Client::CameraDataAndFlags* pCameraData, ::RPG::Client::CameraFightStateCommonConfig* pStateConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_5D178EC982C80153*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY_INIT_OFFSET))(this, pCameraFightModule, pCameraData, pStateConfig);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY_REFRESH_OFFSET))(this);
		}

		::System::Void OverrideCameraConfig(::RPG::GameCore::OverrideSelectDarkTeamEntityCamera* configRef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OverrideSelectDarkTeamEntityCamera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY_OVERRIDECAMERACONFIG_OFFSET))(this, configRef);
		}

		::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
		{
			return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY_GETFIGHTSTATECONFIG_OFFSET))(this);
		}

		::System::Void SavePlayerPrefabsConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY_SAVEPLAYERPREFABSCONFIG_OFFSET))(this);
		}

		::System::Boolean Ignore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY_IGNORE_OFFSET))(this);
		}

		::System::Single _CalcOffsetXZByHeight(::System::Single fHeight)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY__CALCOFFSETXZBYHEIGHT_OFFSET))(this, fHeight);
		}

		::System::Void _CalcLocalOffset(::System::Single& radiusOffsetRef, ::System::Single& yOffsetRef, ::System::Single& angleOffsetRef)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY__CALCLOCALOFFSET_OFFSET))(this, radiusOffsetRef, yOffsetRef, angleOffsetRef);
		}
	};
}
