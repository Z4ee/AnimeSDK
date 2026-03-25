#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MONOUIMATERIALTEXTURELOADER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D4C990)
#define RPG_CLIENT_MONOUIMATERIALTEXTURELOADER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9D4CAD0)
#define RPG_CLIENT_MONOUIMATERIALTEXTURELOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D4CC40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIMaterialTextureLoader_TypeDefinitionIndex = 56341;

	class MonoUIMaterialTextureLoader : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* ImageCompSrc; // 0x18
		::UnityEngine::Sprite* SpriteSrc; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* TextureNames; // 0x28
		::UnityEngine::Material* Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIMATERIALTEXTURELOADER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIMATERIALTEXTURELOADER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIMATERIALTEXTURELOADER_ONENABLE_OFFSET))(this);
		}
	};
}
