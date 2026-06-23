#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/UICameraInfoShowType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class UICameraTransformInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_UICAMERASETTINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x170CEBC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UICameraSettingData_TypeDefinitionIndex = 81269;

	class UICameraSettingData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::UICameraInfoShowType, ::MoleMole::Config::UICameraTransformInfo*>* uiPlatformCameraTransInfo; // 0x10
		::System::Boolean isOverrideCameraTransInfo; // 0x18
		::System::Boolean applyLUTAfterEverything; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UICAMERASETTINGDATA__CTOR_OFFSET))(this);
		}
	};
}
