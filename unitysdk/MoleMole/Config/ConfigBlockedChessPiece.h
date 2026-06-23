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

#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_NOISETEXTURE_OFFSET UNITYSDK_OFFSET(0x1703A550)
#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_SCREENMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1703A360)
#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_ISMAPTEXTUREVALID_OFFSET UNITYSDK_OFFSET(0x1703A740)
#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0x1703A8A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBlockedChessPiece_TypeDefinitionIndex = 43855;

	class ConfigBlockedChessPiece : public ::System::Object
	{
	public:
		::System::String* screenMapTexturePath; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* overlayEffectPathes; // 0x18
		::UnityEngine::AnimationCurve* OpacityCurve; // 0x20
		::UnityEngine::Texture2D* _noiseTexture; // 0x28
		::System::String* noiseTexturePath; // 0x30
		::UnityEngine::Texture2D* _screenMapTexture; // 0x38
		::System::String* textureSheetConfigKey; // 0x40
		::System::String* BigTVresourse; // 0x48
		::System::Boolean EnableMultipleDisplay; // 0x50
		::System::Nullable_1<::System::Boolean> overrideNoiseTrigger; // 0x51
		::System::Boolean isTextureSheet; // 0x53
		::System::Boolean isDynamicBrightness; // 0x54
		::System::Nullable_1<::System::Single> overrideOpacity; // 0x58
		::MoleMole::Config::ConfigBlockedChessPiece_BigTVType bigTVTpye; // 0x60
		::System::Single BrightOpacity; // 0x64
		::UnityEngine::Color screenMapColor; // 0x68
		::UnityEngine::Vector2 MultipleDisplayOpacityRange; // 0x78
		::System::Nullable_1<::System::Single> overrideBrightness; // 0x80
		::System::Boolean noiseTrigger; // 0x88
		::System::Single ShowAnimOpacity; // 0x8C
		::UnityEngine::Color noiseColor; // 0x90

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
