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

#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_NOISETEXTURE_OFFSET UNITYSDK_OFFSET(0x1743E2F0)
#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_SCREENMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1743E100)
#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_ISMAPTEXTUREVALID_OFFSET UNITYSDK_OFFSET(0x1743E4E0)
#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0x1743E640)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBlockedChessPiece_TypeDefinitionIndex = 40528;

	class ConfigBlockedChessPiece : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* OpacityCurve; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* overlayEffectPathes; // 0x18
		::System::String* BigTVresourse; // 0x20
		::System::String* screenMapTexturePath; // 0x28
		::UnityEngine::Texture2D* _screenMapTexture; // 0x30
		::System::String* textureSheetConfigKey; // 0x38
		::System::String* noiseTexturePath; // 0x40
		::UnityEngine::Texture2D* _noiseTexture; // 0x48
		::UnityEngine::Color noiseColor; // 0x50
		::System::Boolean EnableMultipleDisplay; // 0x60
		::System::Nullable_1<::System::Boolean> overrideNoiseTrigger; // 0x61
		::System::Single BrightOpacity; // 0x64
		::System::Nullable_1<::System::Single> overrideOpacity; // 0x68
		::UnityEngine::Vector2 MultipleDisplayOpacityRange; // 0x70
		::MoleMole::Config::ConfigBlockedChessPiece_BigTVType bigTVTpye; // 0x78
		::System::Boolean isDynamicBrightness; // 0x7C
		::System::Boolean isTextureSheet; // 0x7D
		::System::Boolean noiseTrigger; // 0x7E
		::System::Single ShowAnimOpacity; // 0x80
		::System::Nullable_1<::System::Single> overrideBrightness; // 0x84
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
