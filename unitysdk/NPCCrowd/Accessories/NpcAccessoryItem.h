#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYITEM_GET_ISMIX_OFFSET UNITYSDK_OFFSET(0xF9AD830)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xF9AD880)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NpcAccessoryItem_TypeDefinitionIndex = 75308;

	class NpcAccessoryItem : public ::System::Object
	{
	public:
		::System::String* itemName; // 0x10
		::System::Int32 accessoryId; // 0x18
		::System::Int32 nameHashID; // 0x1C
		::System::String* defaultSeqFrameKey; // 0x20
		::System::Int32 defaultObjectId; // 0x28
		::System::Boolean overrideSlotDefaultOffset; // 0x2C
		::UnityEngine::Vector3 offsetPosition; // 0x30
		::UnityEngine::Quaternion offsetRotation; // 0x3C
		::UnityEngine::Vector3 offsetScale; // 0x4C
		::System::Boolean bOverrideMaterials; // 0x58
		::Il2CppArray<::Foundation::AssetPath>* overrideMaterialAssetPaths; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* npcAnimationList; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsMix()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYITEM_GET_ISMIX_OFFSET))(this);
		}
	};
}
