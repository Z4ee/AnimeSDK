#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace RPG::CustomRP { class CRPTerrainLayer; }
namespace System { class String; }

#define RPG_CUSTOMRP_CRPTERRAINLAYERGROUP_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0x3AF73B0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPTerrainLayerGroup_TypeDefinitionIndex = 37038;

	struct alignas(8) CRPTerrainLayerGroup
	{
		::System::String* name; // 0x10
		::UnityEngine::Color32 debugColor; // 0x18
		::RPG::CustomRP::CRPTerrainLayer* layer0; // 0x20
		::RPG::CustomRP::CRPTerrainLayer* layer1; // 0x28
		::RPG::CustomRP::CRPTerrainLayer* layer2; // 0x30
		::RPG::CustomRP::CRPTerrainLayer* layer3; // 0x38
		::RPG::CustomRP::CRPTerrainLayer* layer4; // 0x40
		::RPG::CustomRP::CRPTerrainLayer* layer5; // 0x48
		::RPG::CustomRP::CRPTerrainLayer* layer6; // 0x50
		::RPG::CustomRP::CRPTerrainLayer* layer7; // 0x58

		::Il2CppArray<::RPG::CustomRP::CRPTerrainLayer*>* get_layers()
		{
			return ((::Il2CppArray<::RPG::CustomRP::CRPTerrainLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAINLAYERGROUP_GET_LAYERS_OFFSET))(this);
		}
	};
}
