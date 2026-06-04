#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BAVariantKey.h"

namespace System { class String; }

#define BATCHANIMATIONHELPER_CREATEVARIANTKEY_OFFSET UNITYSDK_OFFSET(0x18E9CBF0)
#define BATCHANIMATIONHELPER_CREATEVARIANT_OFFSET UNITYSDK_OFFSET(0x18E9CC40)

inline static constexpr unsigned int BatchAnimationHelper_TypeDefinitionIndex = 35146;

class BatchAnimationHelper : public ::System::Object
{
public:
	static ::UnityEngine::Rendering::BAVariantKey CreateVariantKey(::System::String* a1)
	{
		return ((::UnityEngine::Rendering::BAVariantKey(*)(::System::String*))((::PBYTE)hIl2Cpp + BATCHANIMATIONHELPER_CREATEVARIANTKEY_OFFSET))(a1);
	}

	static ::System::Void CreateVariant(::UnityEngine::Rendering::BAVariantKey& a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::BAVariantKey&, ::System::String*))((::PBYTE)hIl2Cpp + BATCHANIMATIONHELPER_CREATEVARIANT_OFFSET))(a1, a2);
	}
};
