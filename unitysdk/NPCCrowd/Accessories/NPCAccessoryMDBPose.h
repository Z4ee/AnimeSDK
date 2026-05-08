#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMDBPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0xEC7AC80)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryMDBPose_TypeDefinitionIndex = 41139;

	class NPCAccessoryMDBPose : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::Foundation::AssetPath clipAssetPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMDBPOSE__CTOR_OFFSET))(this);
		}
	};
}
