#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RenderSelectMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROPSELECTIONMATERIALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17B4C0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PropSelectionMaterialConfig_TypeDefinitionIndex = 60366;

	class PropSelectionMaterialConfig : public ::System::Object
	{
	public:
		::RPG::Client::RenderSelectMode Mode; // 0x10
		::UnityEngine::GameObject* Renderer; // 0x18
		::System::String* RenderName; // 0x20
		::UnityEngine::Material* OverlayMat; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONMATERIALCONFIG__CTOR_OFFSET))(this);
		}
	};
}
