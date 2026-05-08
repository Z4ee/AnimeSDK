#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Cameras { class AvatarLayoutCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGAVATARLAYOUTCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1C230)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAvatarLayoutCamera_TypeDefinitionIndex = 41686;

	class ConfigAvatarLayoutCamera : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::AvatarLayoutCameraConfig*>* AvatarLayoutCameraConfigDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARLAYOUTCAMERA__CTOR_OFFSET))(this);
		}
	};
}
