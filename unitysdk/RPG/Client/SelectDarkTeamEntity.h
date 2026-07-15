#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4C3F9D9CF221EFEC;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateSelectDarkTeamEntityConfig; }
namespace RPG::GameCore { class OverrideSelectDarkTeamEntityCamera; }

#define RPG_CLIENT_SELECTDARKTEAMENTITY_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x19F3BD40)
#define RPG_CLIENT_SELECTDARKTEAMENTITY_IGNORE_OFFSET UNITYSDK_OFFSET(0x19F3BDF0)
#define RPG_CLIENT_SELECTDARKTEAMENTITY_INIT_OFFSET UNITYSDK_OFFSET(0x19F39930)
#define RPG_CLIENT_SELECTDARKTEAMENTITY_OVERRIDECAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x19F3BCF0)
#define RPG_CLIENT_SELECTDARKTEAMENTITY_REFRESH_OFFSET UNITYSDK_OFFSET(0x19F39A70)
#define RPG_CLIENT_SELECTDARKTEAMENTITY_RESET_OFFSET UNITYSDK_OFFSET(0x19F399D0)
#define RPG_CLIENT_SELECTDARKTEAMENTITY_SAVEPLAYERPREFABSCONFIG_OFFSET UNITYSDK_OFFSET(0x19F3BD80)
#define RPG_CLIENT_SELECTDARKTEAMENTITY__CALCLOCALOFFSET_OFFSET UNITYSDK_OFFSET(0x19F3B190)
#define RPG_CLIENT_SELECTDARKTEAMENTITY__CALCOFFSETXZBYHEIGHT_OFFSET UNITYSDK_OFFSET(0x19F3BC70)
#define RPG_CLIENT_SELECTDARKTEAMENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19F3BE80)

namespace RPG::Client
{
	inline static constexpr unsigned int SelectDarkTeamEntity_TypeDefinitionIndex = 66473;

	class SelectDarkTeamEntity : public ::System::Object
	{
	public:
		::Class_2_4C3F9D9CF221EFEC* _OwnerModuleRef; // 0x10
		::RPG::GameCore::OverrideSelectDarkTeamEntityCamera* _OverrideStateConfig; // 0x18
		::RPG::Client::CameraFightStateSelectDarkTeamEntityConfig* _StateConfig; // 0x20
		::RPG::Client::CameraDataAndFlags* _CameraDataRef; // 0x28
		::UnityEngine::Vector3 _AnchorOffsetLocal; // 0x30
		::UnityEngine::Vector3 _AimOffsetLocal; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_2_4C3F9D9CF221EFEC* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_4C3F9D9CF221EFEC*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY_REFRESH_OFFSET))(this);
		}

		::System::Void OverrideCameraConfig(::RPG::GameCore::OverrideSelectDarkTeamEntityCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OverrideSelectDarkTeamEntityCamera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY_OVERRIDECAMERACONFIG_OFFSET))(this, a1);
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

		::System::Single _CalcOffsetXZByHeight(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY__CALCOFFSETXZBYHEIGHT_OFFSET))(this, a1);
		}

		::System::Void _CalcLocalOffset(::System::Single& a1, ::System::Single& a2, ::System::Single& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SELECTDARKTEAMENTITY__CALCLOCALOFFSET_OFFSET))(this, a1, a2, a3);
		}
	};
}
