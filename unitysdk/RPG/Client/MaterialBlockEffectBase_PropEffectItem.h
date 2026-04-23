#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_PROPEFFECTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA86B130)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialBlockEffectBase_PropEffectItem_TypeDefinitionIndex = 65138;

	class MaterialBlockEffectBase_PropEffectItem : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* PropRenderer; // 0x10
		::System::String* RendererName; // 0x18
		::System::Int32 PropMaterialIndex; // 0x20

		::System::Void _ctor(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_PROPEFFECTITEM__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
