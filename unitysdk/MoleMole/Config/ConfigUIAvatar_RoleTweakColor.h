#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGUIAVATAR_ROLETWEAKCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x192A9A80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIAvatar_RoleTweakColor_TypeDefinitionIndex = 48018;

	class ConfigUIAvatar_RoleTweakColor : public ::System::Object
	{
	public:
		::System::String* keyInst; // 0x10
		::UnityEngine::Color color; // 0x18

		::System::Void _ctor(::System::String* _keyInst, ::UnityEngine::Color _color)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIAVATAR_ROLETWEAKCOLOR__CTOR_OFFSET))(this, _keyInst, _color);
		}
	};
}
