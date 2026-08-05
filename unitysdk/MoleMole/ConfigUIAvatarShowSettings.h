#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowSettings_PerformType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIAvatarShowSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUIAVATARSHOWSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6CFA0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowSettings_TypeDefinitionIndex = 66346;

	class ConfigUIAvatarShowSettings : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* avatarName; // 0x58
		::System::Int32 avatarID; // 0x60
		::System::String* avatarMainPagePrefabPath; // 0x68
		::MoleMole::ConfigUIAvatarShowSettings_PerformType cameraPerformType; // 0x70
		::System::String* AnimationClipPath; // 0x78
		::System::String* AnimatorControllerPath; // 0x80
		::System::String* AvatarShowPrefabPath; // 0x88
		::UnityEngine::Vector2 CameraClippingPlanes; // 0x90
		::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>* avatarShowSettings; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
