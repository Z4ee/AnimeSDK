#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE_GET_NOISETEXTURE_OFFSET UNITYSDK_OFFSET(0x1A345100)
#define MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE_GET_SCREENMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A344F10)
#define MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE_ISMAPTEXTUREVALID_OFFSET UNITYSDK_OFFSET(0x1A3452F0)
#define MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A345450)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFinishedChessPiece_TypeDefinitionIndex = 46158;

	class ConfigFinishedChessPiece : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* overlayEffectPathes; // 0x10
		::UnityEngine::Texture2D* _noiseTexture; // 0x18
		::System::String* screenMapTexturePath; // 0x20
		::System::String* textureSheetConfigKey; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* overlayEffect; // 0x30
		::UnityEngine::Texture2D* _screenMapTexture; // 0x38
		::System::String* noiseTexturePath; // 0x40
		::UnityEngine::Color screenMapColor; // 0x48
		::UnityEngine::Color noiseColor; // 0x58
		::System::Boolean noiseTrigger; // 0x68
		::System::Boolean isTextureSheet; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_screenMapTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE_GET_SCREENMAPTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_noiseTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE_GET_NOISETEXTURE_OFFSET))(this);
		}

		::System::Boolean IsMapTextureValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE_ISMAPTEXTUREVALID_OFFSET))(this);
		}
	};
}
