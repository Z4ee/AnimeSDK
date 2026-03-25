#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class MaterialGroupAsset_RendererNameMaterials; }
namespace System { class String; }

#define RPG_CLIENT_MATERIALGROUPASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x9B71910)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialGroupAsset_TypeDefinitionIndex = 57126;

	class MaterialGroupAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* groupName; // 0x18
		::Il2CppArray<::RPG::Client::MaterialGroupAsset_RendererNameMaterials*>* entries; // 0x20
		::System::Boolean useOriginalTexture; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALGROUPASSET__CTOR_OFFSET))(this);
		}
	};
}
