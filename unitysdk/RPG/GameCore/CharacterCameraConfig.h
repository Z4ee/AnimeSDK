#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERCAMERACONFIG_METHOD_2_EAA469D64EB82AC0_OFFSET UNITYSDK_OFFSET(0x187CAAB0)
#define RPG_GAMECORE_CHARACTERCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187CABC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterCameraConfig_TypeDefinitionIndex = 15621;

	class CharacterCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::VCameraConfig* CameraConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EAA469D64EB82AC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMERACONFIG_METHOD_2_EAA469D64EB82AC0_OFFSET))(a1, a2);
		}
	};
}
