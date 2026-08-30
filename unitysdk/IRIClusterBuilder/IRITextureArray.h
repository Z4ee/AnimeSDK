#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace IRIClusterBuilder { class IRITextureArray_TextureItem; }

#define IRICLUSTERBUILDER_IRITEXTUREARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18E65E10)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRITextureArray_TypeDefinitionIndex = 48210;

	class IRITextureArray : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::IRIClusterBuilder::IRITextureArray_TextureItem*>* AlbedoMetalArray; // 0x18
		::Il2CppArray<::IRIClusterBuilder::IRITextureArray_TextureItem*>* NormalSmothTexArray; // 0x20
		::Il2CppArray<::IRIClusterBuilder::IRITextureArray_TextureItem*>* SpecialTexArray; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRITEXTUREARRAY__CTOR_OFFSET))(this);
		}
	};
}
