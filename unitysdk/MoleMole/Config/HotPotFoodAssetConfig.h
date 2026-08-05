#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace MoleMole::Config { class HotPotFoodColliderConfig; }
namespace System { class String; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_HOTPOTFOODASSETCONFIG_SETUPFOODICON_OFFSET UNITYSDK_OFFSET(0x1B921BD0)
#define MOLEMOLE_CONFIG_HOTPOTFOODASSETCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B921F90)
#define MOLEMOLE_CONFIG_HOTPOTFOODASSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B921F30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HotPotFoodAssetConfig_TypeDefinitionIndex = 58400;

	class HotPotFoodAssetConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::Int32* StaticGet_ErosionTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HotPotFoodAssetConfig_TypeDefinitionIndex)->GetStaticField(0xDBA0);
		}
		::System::String* foodTexturePath; // 0x18
		::System::String* erosionTexturePath; // 0x20
		::MoleMole::Config::HotPotFoodColliderConfig* colliderConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOTPOTFOODASSETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOTPOTFOODASSETCONFIG__CCTOR_OFFSET))();
		}

		::UnityEngine::Collider2D* SetupFoodIcon(::UnityEngine::GameObject* foodIcon, ::UnityEngine::GameObject* colliderRoot, ::System::Int32 foodID)
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOTPOTFOODASSETCONFIG_SETUPFOODICON_OFFSET))(this, foodIcon, colliderRoot, foodID);
		}
	};
}
