#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::Config { class ConfigUIPortrait; }
namespace System { class String; }

#define MOLEMOLE_MONOUIPORTRAITCONFIG_GET_REALKEY_OFFSET UNITYSDK_OFFSET(0x12361DD0)
#define MOLEMOLE_MONOUIPORTRAITCONFIG_SETUPIMAGECONFIG_OFFSET UNITYSDK_OFFSET(0x12361FF0)
#define MOLEMOLE_MONOUIPORTRAITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x123622F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIPortraitConfig_TypeDefinitionIndex = 77604;

	class MonoUIPortraitConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::String* portraitKey; // 0x58
		::System::String* customKey; // 0x60
		::System::String* extraKey; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIPORTRAITCONFIG__CTOR_OFFSET))(this);
		}

		::System::String* get_realKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIPORTRAITCONFIG_GET_REALKEY_OFFSET))(this);
		}

		::System::Boolean SetupImageConfig(::MoleMole::Config::ConfigUIPortrait* configPortrait, ::System::String* imgPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigUIPortrait*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIPORTRAITCONFIG_SETUPIMAGECONFIG_OFFSET))(this, configPortrait, imgPath);
		}
	};
}
