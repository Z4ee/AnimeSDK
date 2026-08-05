#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_CONFIGUIPORTRAITITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B4DCE70)
#define MOLEMOLE_CONFIG_CONFIGUIPORTRAITITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DCE60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIPortraitItem_TypeDefinitionIndex = 80888;

	class ConfigUIPortraitItem : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 offset; // 0x10
		::UnityEngine::Vector2 imageSize; // 0x18
		::System::Single rotation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIPORTRAITITEM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MoleMole::Config::ConfigUIPortraitItem* other)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIPortraitItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIPORTRAITITEM__CTOR_1_OFFSET))(this, other);
		}
	};
}
