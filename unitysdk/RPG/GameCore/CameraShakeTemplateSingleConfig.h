#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class String; }

#define RPG_GAMECORE_CAMERASHAKETEMPLATESINGLECONFIG_METHOD_2_6AB77628500B5306_OFFSET UNITYSDK_OFFSET(0x187B72C0)
#define RPG_GAMECORE_CAMERASHAKETEMPLATESINGLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187B73A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraShakeTemplateSingleConfig_TypeDefinitionIndex = 15556;

	class CameraShakeTemplateSingleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TemplateName; // 0x10
		::RPG::GameCore::VCameraShakeV2* ShakeConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATESINGLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6AB77628500B5306(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CameraShakeTemplateSingleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CameraShakeTemplateSingleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATESINGLECONFIG_METHOD_2_6AB77628500B5306_OFFSET))(a1, a2);
		}
	};
}
