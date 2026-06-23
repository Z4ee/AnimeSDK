#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigOutlineObjectRenderer_Global; }
namespace MoleMole { class ConfigOutlineObjectRenderer_Local; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGPLAYERACCESSORYEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1271DDC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayerAccessoryEffect_TypeDefinitionIndex = 74070;

	class ConfigPlayerAccessoryEffect : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Foundation::AssetPath SelectAnimPath; // 0x58
		::System::String* SelectAnimName; // 0x68
		::MoleMole::ConfigOutlineObjectRenderer_Local* ConfigOutlineParam_Local; // 0x70
		::MoleMole::ConfigOutlineObjectRenderer_Global* ConfigOutlineParam_Global; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYERACCESSORYEFFECT__CTOR_OFFSET))(this);
		}
	};
}
