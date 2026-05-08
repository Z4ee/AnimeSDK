#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraDitherLayerData.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_COMMONDITHERCONFIGS_KEYVALUEINFO_CAMDITHERLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1399BDB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CommonDitherConfigs_KeyValueInfo_CamDitherLayer_TypeDefinitionIndex = 81280;

	class CommonDitherConfigs_KeyValueInfo_CamDitherLayer : public ::System::Object
	{
	public:
		::System::String* keyInst; // 0x10
		::MoleMole::Config::CameraDitherLayerData valueInst; // 0x18

		::System::Void _ctor(::System::String* _keyInst, ::MoleMole::Config::CameraDitherLayerData _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::CameraDitherLayerData))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONDITHERCONFIGS_KEYVALUEINFO_CAMDITHERLAYER__CTOR_OFFSET))(this, _keyInst, _valueInst);
		}
	};
}
