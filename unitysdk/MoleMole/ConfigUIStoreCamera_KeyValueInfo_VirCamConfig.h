#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVirtualCameraConfigs; }
namespace System { class String; }

#define MOLEMOLE_CONFIGUISTORECAMERA_KEYVALUEINFO_VIRCAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADA320)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIStoreCamera_KeyValueInfo_VirCamConfig_TypeDefinitionIndex = 54107;

	class ConfigUIStoreCamera_KeyValueInfo_VirCamConfig : public ::System::Object
	{
	public:
		::System::String* keyInst; // 0x10
		::MoleMole::UIVirtualCameraConfigs* valueInst; // 0x18

		::System::Void _ctor(::System::String* _keyInst, ::MoleMole::UIVirtualCameraConfigs* _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::UIVirtualCameraConfigs*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISTORECAMERA_KEYVALUEINFO_VIRCAMCONFIG__CTOR_OFFSET))(this, _keyInst, _valueInst);
		}
	};
}
