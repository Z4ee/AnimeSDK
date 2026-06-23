#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_COMMONDITHERCONFIGS_KEYVALUEINFO_CHARCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA48C00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CommonDitherConfigs_KeyValueInfo_CharCamera_TypeDefinitionIndex = 67280;

	class CommonDitherConfigs_KeyValueInfo_CharCamera : public ::System::Object
	{
	public:
		::System::String* keyInst; // 0x10
		::MoleMole::CharacterCameraDitheringData valueInst; // 0x18

		::System::Void _ctor(::System::String* _keyInst, ::MoleMole::CharacterCameraDitheringData _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::CharacterCameraDitheringData))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONDITHERCONFIGS_KEYVALUEINFO_CHARCAMERA__CTOR_OFFSET))(this, _keyInst, _valueInst);
		}
	};
}
