#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ACCESSORIES_NPCSLOTACCESSORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE017610)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCSlotAccessoryInfo_TypeDefinitionIndex = 74195;

	class NPCSlotAccessoryInfo : public ::System::Object
	{
	public:
		::System::String* itemName; // 0x10
		::Il2CppArray<::System::Boolean>* bOverrides; // 0x18
		::Il2CppArray<::System::Int32>* overrideInfoIds; // 0x20
		::System::Boolean bIsHidden; // 0x28

		::System::Void _ctor(::System::Boolean bInIsShowOnCreate, ::System::String* inItemName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCSLOTACCESSORYINFO__CTOR_OFFSET))(this, bInIsShowOnCreate, inItemName);
		}
	};
}
