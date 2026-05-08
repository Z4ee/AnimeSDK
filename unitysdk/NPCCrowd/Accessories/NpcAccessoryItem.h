#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYITEM_GET_ISMIX_OFFSET UNITYSDK_OFFSET(0x11B1FB70)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11B1FBC0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NpcAccessoryItem_TypeDefinitionIndex = 76712;

	class NpcAccessoryItem : public ::System::Object
	{
	public:
		::System::String* itemName; // 0x10
		::System::Int32 accessoryId; // 0x18
		::System::Int32 nameHashID; // 0x1C
		::System::Int32 defaultObjectId; // 0x20
		::System::Boolean overrideSlotDefaultOffset; // 0x24
		::UnityEngine::Vector3 offsetPosition; // 0x28
		::UnityEngine::Quaternion offsetRotation; // 0x34
		::System::Boolean bOverrideMaterials; // 0x44
		::Il2CppArray<::Foundation::AssetPath>* overrideMaterialAssetPaths; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* npcAnimationList; // 0x50

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
