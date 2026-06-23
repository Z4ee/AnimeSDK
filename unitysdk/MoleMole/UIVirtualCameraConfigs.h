#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigCameraPosType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVirtualNpcConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVIRTUALCAMERACONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF4350)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirtualCameraConfigs_TypeDefinitionIndex = 42887;

	class UIVirtualCameraConfigs : public ::System::Object
	{
	public:
		::MoleMole::ConfigCameraPosType CameraPosType; // 0x10
		::System::String* PCCameraPos; // 0x18
		::System::String* PhoneCameraPos; // 0x20
		::System::Single Fov; // 0x28
		::System::Single NearClip; // 0x2C
		::System::Single FarClip; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::UIVirtualNpcConfig*>* npcConfig; // 0x38
		::System::String* SpecialKey; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALCAMERACONFIGS__CTOR_OFFSET))(this);
		}
	};
}
