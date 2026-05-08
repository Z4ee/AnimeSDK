#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGTURNBASEPREVIEWEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x159F85B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTurnBasePreviewEffect_TypeDefinitionIndex = 73914;

	class ConfigTurnBasePreviewEffect : public ::System::Object
	{
	public:
		::System::String* EffectKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTURNBASEPREVIEWEFFECT__CTOR_OFFSET))(this);
		}
	};
}
