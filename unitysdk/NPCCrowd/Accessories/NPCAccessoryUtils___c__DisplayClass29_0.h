#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE8AE7E0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS29_0__ENABLEEXTRAACCESSORIESBYOVERRIDEPARAM_B__0_OFFSET UNITYSDK_OFFSET(0xE8AE7F0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryUtils___c__DisplayClass29_0_TypeDefinitionIndex = 64547;

	class NPCAccessoryUtils___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::String* accessoryKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _EnableExtraAccessoriesByOverrideParam_b__0(::FNpcAvatarGenericParams_AccessoryInfo info)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNpcAvatarGenericParams_AccessoryInfo))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS29_0__ENABLEEXTRAACCESSORIESBYOVERRIDEPARAM_B__0_OFFSET))(this, info);
		}
	};
}
