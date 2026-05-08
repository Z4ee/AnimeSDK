#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGFIXEDCAMERAENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17535670)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFixedCameraEntry_TypeDefinitionIndex = 65939;

	class ConfigFixedCameraEntry : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::FixedCameraConfig*>* fixedCameraConfigDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFIXEDCAMERAENTRY__CTOR_OFFSET))(this);
		}
	};
}
