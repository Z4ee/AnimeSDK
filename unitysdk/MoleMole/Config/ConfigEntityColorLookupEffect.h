#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectFloat; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORLOOKUPEFFECT_GETCONTRIBUTION_OFFSET UNITYSDK_OFFSET(0x177DC200)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORLOOKUPEFFECT_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x177DC190)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORLOOKUPEFFECT_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x177DBFA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORLOOKUPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x177DC280)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityColorLookupEffect_TypeDefinitionIndex = 88675;

	class ConfigEntityColorLookupEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* contribution; // 0x40
		::System::String* texturePath; // 0x48
		::UnityEngine::Texture2D* _texture; // 0x50
		::MoleMole::Config::ScreenEffectFieldHandleType textureHandleType; // 0x58
		::MoleMole::Config::ScreenEffectFieldHandleType contributionHandleType; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORLOOKUPEFFECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_texture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORLOOKUPEFFECT_GET_TEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORLOOKUPEFFECT_GETTEXTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetContribution(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORLOOKUPEFFECT_GETCONTRIBUTION_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
