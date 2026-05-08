#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF851B00)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS23_0__ENABLEEXTRAACCESSORIESBYOVERRIDEPARAM_B__0_OFFSET UNITYSDK_OFFSET(0xF851B10)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryUtils___c__DisplayClass23_0_TypeDefinitionIndex = 46224;

	class NPCAccessoryUtils___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::String* accessoryKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _EnableExtraAccessoriesByOverrideParam_b__0(::FNpcAvatarGenericParams_AccessoryInfo info)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNpcAvatarGenericParams_AccessoryInfo))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS23_0__ENABLEEXTRAACCESSORIESBYOVERRIDEPARAM_B__0_OFFSET))(this, info);
		}
	};
}
