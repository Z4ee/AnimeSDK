#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Accessories { class NpcAccessoryItem; }
namespace System { class String; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMAPCONFIG___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD23F650)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMAPCONFIG___C__DISPLAYCLASS1_0__GETNPCACCITEM_B__0_OFFSET UNITYSDK_OFFSET(0xD23F660)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryMapConfig___c__DisplayClass1_0_TypeDefinitionIndex = 45032;

	class NPCAccessoryMapConfig___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::String* itemName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMAPCONFIG___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNpcAccItem_b__0(::NPCCrowd::Accessories::NpcAccessoryItem* i)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Accessories::NpcAccessoryItem*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMAPCONFIG___C__DISPLAYCLASS1_0__GETNPCACCITEM_B__0_OFFSET))(this, i);
		}
	};
}
