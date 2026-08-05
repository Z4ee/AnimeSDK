#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Cameras { class BangbooCameraEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CAMERAS_CONFIGCAMERABANGBOOADJUSTMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x12A2D0E0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ConfigCameraBangbooAdjustment_TypeDefinitionIndex = 87852;

	class ConfigCameraBangbooAdjustment : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::BangbooCameraEntry*>* config; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERABANGBOOADJUSTMENT__CTOR_OFFSET))(this);
		}
	};
}
