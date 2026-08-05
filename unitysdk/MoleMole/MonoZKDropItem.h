#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class StaticSceneObjectWidget; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_MONOZKDROPITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x199782E0)
#define MOLEMOLE_MONOZKDROPITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x199783E0)
#define MOLEMOLE_MONOZKDROPITEM_SETUPICON_OFFSET UNITYSDK_OFFSET(0x199788A0)
#define MOLEMOLE_MONOZKDROPITEM_SETUPTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x19978540)
#define MOLEMOLE_MONOZKDROPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19978C30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoZKDropItem_TypeDefinitionIndex = 80723;

	class MonoZKDropItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::StaticSceneObjectWidget* textureSheet; // 0x18
		::UnityEngine::GameObject* icon; // 0x20
		::UnityEngine::Material* Field_5_6; // 0x28
		::Foundation::AssetRequestHandle Field_5_5; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZKDROPITEM__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZKDROPITEM_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZKDROPITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetupTextureSheet(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZKDROPITEM_SETUPTEXTURESHEET_OFFSET))(this, a1);
		}

		::System::Void SetupIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZKDROPITEM_SETUPICON_OFFSET))(this, a1);
		}
	};
}
