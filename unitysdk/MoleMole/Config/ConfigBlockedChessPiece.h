#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigBlockedChessPiece_BigTVType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_NOISETEXTURE_OFFSET UNITYSDK_OFFSET(0x1B8F3360)
#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_SCREENMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B8F3170)
#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_ISMAPTEXTUREVALID_OFFSET UNITYSDK_OFFSET(0x1B8F3550)
#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8F36B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBlockedChessPiece_TypeDefinitionIndex = 84403;

	class ConfigBlockedChessPiece : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* _screenMapTexture; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* overlayEffectPathes; // 0x18
		::UnityEngine::AnimationCurve* OpacityCurve; // 0x20
		::System::String* screenMapTexturePath; // 0x28
		::System::String* BigTVresourse; // 0x30
		::System::String* noiseTexturePath; // 0x38
		::UnityEngine::Texture2D* _noiseTexture; // 0x40
		::System::String* textureSheetConfigKey; // 0x48
		::System::Single BrightOpacity; // 0x50
		::UnityEngine::Vector2 MultipleDisplayOpacityRange; // 0x54
		::MoleMole::Config::ConfigBlockedChessPiece_BigTVType bigTVTpye; // 0x5C
		::System::Single ShowAnimOpacity; // 0x60
		::System::Nullable_1<::System::Single> overrideOpacity; // 0x64
		::System::Nullable_1<::System::Single> overrideBrightness; // 0x6C
		::System::Nullable_1<::System::Boolean> overrideNoiseTrigger; // 0x74
		::System::Boolean isTextureSheet; // 0x76
		::System::Boolean EnableMultipleDisplay; // 0x77
		::System::Boolean noiseTrigger; // 0x78
		::System::Boolean isDynamicBrightness; // 0x79
		::UnityEngine::Color noiseColor; // 0x7C
		::UnityEngine::Color screenMapColor; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_screenMapTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_SCREENMAPTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_noiseTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_NOISETEXTURE_OFFSET))(this);
		}

		::System::Boolean IsMapTextureValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_ISMAPTEXTUREVALID_OFFSET))(this);
		}
	};
}
