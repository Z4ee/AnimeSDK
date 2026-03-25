#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

#define RPG_CLIENT_TOPVIEWMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET UNITYSDK_OFFSET(0xA5E5000)
#define RPG_CLIENT_TOPVIEWMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E5050)

namespace RPG::Client
{
	inline static constexpr unsigned int TopViewModuleConfig_TypeDefinitionIndex = 56980;

	class TopViewModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Single DepressionAngle; // 0x18
		::System::Single TopDownCameraDistance; // 0x1C
		::System::Single HorizontalCameraDistance; // 0x20
		::System::Single SmoothTime; // 0x24
		::System::Single FieldOfView; // 0x28
		::System::Single TargetHeight; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOPVIEWMODULECONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType Method_4_2BF4648671111A7E()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOPVIEWMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET))(this);
		}
	};
}
