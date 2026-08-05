#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigLensDistortion; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGLENSDISTORTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD5E400)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLensDistortions_TypeDefinitionIndex = 53183;

	class ConfigLensDistortions : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single DefaultIntensity; // 0x58
		::System::Single DefaultXMultiplier; // 0x5C
		::System::Single DefaultYMultiplier; // 0x60
		::System::Single DefaultScale; // 0x64
		::System::Single DefaultDepthClip; // 0x68
		::UnityEngine::Vector2 DefaultCenter; // 0x6C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLensDistortion*>* ScreenEffects; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLENSDISTORTIONS__CTOR_OFFSET))(this);
		}
	};
}
