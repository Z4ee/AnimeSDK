#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigControllableObjectCommonParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCONTROLLABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4A8FD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigControllableObject_TypeDefinitionIndex = 62865;

	class ConfigControllableObject : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigControllableObjectCommonParam*>* hackControllableCameras; // 0x58
		::System::Single defaultSwitchCameraDuration; // 0x60
		::System::String* backToAvatarBlackCurveKey; // 0x68
		::System::Single backToAvatarFadeInDuration; // 0x70
		::System::Single backToAvatarFadeOutDuration; // 0x74
		::System::Boolean avatarControlStreaming; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCONTROLLABLEOBJECT__CTOR_OFFSET))(this);
		}
	};
}
