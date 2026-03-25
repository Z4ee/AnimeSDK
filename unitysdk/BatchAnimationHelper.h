#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BAVariantKey.h"

namespace System { class String; }

#define BATCHANIMATIONHELPER_CREATEVARIANTKEY_OFFSET UNITYSDK_OFFSET(0x16A57F60)
#define BATCHANIMATIONHELPER_CREATEVARIANT_OFFSET UNITYSDK_OFFSET(0x16A57FB0)

inline static constexpr unsigned int BatchAnimationHelper_TypeDefinitionIndex = 29123;

class BatchAnimationHelper : public ::System::Object
{
public:
	static ::UnityEngine::Rendering::BAVariantKey CreateVariantKey(::System::String* keyStr)
	{
		return ((::UnityEngine::Rendering::BAVariantKey(*)(::System::String*))((::PBYTE)hIl2Cpp + BATCHANIMATIONHELPER_CREATEVARIANTKEY_OFFSET))(keyStr);
	}

	static ::System::Void CreateVariant(::UnityEngine::Rendering::BAVariantKey& key, ::System::String* keyStr)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::BAVariantKey&, ::System::String*))((::PBYTE)hIl2Cpp + BATCHANIMATIONHELPER_CREATEVARIANT_OFFSET))(key, keyStr);
	}
};
