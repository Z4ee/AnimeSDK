#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigCameraTelescope; }
namespace System { class String; }

#define MOLEMOLE_CONFIGUISTORECAMERA_KEYVALUEINFO_TELESCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3A6C0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIStoreCamera_KeyValueInfo_TelesConfig_TypeDefinitionIndex = 60004;

	class ConfigUIStoreCamera_KeyValueInfo_TelesConfig : public ::System::Object
	{
	public:
		::System::String* keyInst; // 0x10
		::MoleMole::ConfigCameraTelescope* valueInst; // 0x18

		::System::Void _ctor(::System::String* _keyInst, ::MoleMole::ConfigCameraTelescope* _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::ConfigCameraTelescope*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISTORECAMERA_KEYVALUEINFO_TELESCONFIG__CTOR_OFFSET))(this, _keyInst, _valueInst);
		}
	};
}
