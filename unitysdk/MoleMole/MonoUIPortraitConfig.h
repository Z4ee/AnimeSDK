#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::Config { class ConfigUIPortrait; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUIPORTRAITCONFIG_GET_REALKEY_OFFSET UNITYSDK_OFFSET(0x13F176E0)
#define MOLEMOLE_MONOUIPORTRAITCONFIG_SETUPIMAGECONFIG_OFFSET UNITYSDK_OFFSET(0x13F17900)
#define MOLEMOLE_MONOUIPORTRAITCONFIG_SETUPPREFABCONFIG_OFFSET UNITYSDK_OFFSET(0x13F17C00)
#define MOLEMOLE_MONOUIPORTRAITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13F17E90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIPortraitConfig_TypeDefinitionIndex = 57270;

	class MonoUIPortraitConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::GameObject* prefabObject; // 0x58
		::System::String* portraitKey; // 0x60
		::System::String* customKey; // 0x68
		::System::String* extraKey; // 0x70

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

		::System::Boolean SetupPrefabConfig(::MoleMole::Config::ConfigUIPortrait* configPortrait, ::UnityEngine::RectTransform* uiObject, ::System::String* prebPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigUIPortrait*, ::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIPORTRAITCONFIG_SETUPPREFABCONFIG_OFFSET))(this, configPortrait, uiObject, prebPath);
		}
	};
}
