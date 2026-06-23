#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterFadeDitheringDataV2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_COMMONDITHERCONFIGS_KEYVALUEINFO_CHARFADE__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2DEA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CommonDitherConfigs_KeyValueInfo_CharFade_TypeDefinitionIndex = 67278;

	class CommonDitherConfigs_KeyValueInfo_CharFade : public ::System::Object
	{
	public:
		::System::String* keyInst; // 0x10
		::MoleMole::Config::CharacterFadeDitheringDataV2 valueInst; // 0x18

		::System::Void _ctor(::System::String* _keyInst, ::MoleMole::Config::CharacterFadeDitheringDataV2 _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::CharacterFadeDitheringDataV2))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONDITHERCONFIGS_KEYVALUEINFO_CHARFADE__CTOR_OFFSET))(this, _keyInst, _valueInst);
		}
	};
}
