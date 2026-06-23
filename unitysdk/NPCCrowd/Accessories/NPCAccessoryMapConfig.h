#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Accessories { class NpcAccessoryItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMAPCONFIG_GETNPCACCITEM_OFFSET UNITYSDK_OFFSET(0xEBCB030)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xEBCB110)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryMapConfig_TypeDefinitionIndex = 83555;

	class NPCAccessoryMapConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NpcAccessoryItem*>* items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMAPCONFIG__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Accessories::NpcAccessoryItem* GetNpcAccItem(::System::String* itemName)
		{
			return ((::NPCCrowd::Accessories::NpcAccessoryItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMAPCONFIG_GETNPCACCITEM_OFFSET))(this, itemName);
		}
	};
}
