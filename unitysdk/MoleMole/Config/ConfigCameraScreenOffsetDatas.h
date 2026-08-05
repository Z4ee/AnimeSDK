#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigCameraScreenOffset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSETDATAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B547780)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraScreenOffsetDatas_TypeDefinitionIndex = 62942;

	class ConfigCameraScreenOffsetDatas : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraScreenOffset*>* cameraScreenOffsets; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSETDATAS__CTOR_OFFSET))(this);
		}
	};
}
