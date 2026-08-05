#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;

#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10666E30)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__DISPLAYCLASS39_0__REFRESHALLNPCTIMEPERIODTAGS_B__0_OFFSET UNITYSDK_OFFSET(0x10666E40)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarSubSystem___c__DisplayClass39_0_TypeDefinitionIndex = 58540;

	class NPCAvatarSubSystem___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::ProtoScript::TimePeriodType period; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshAllNpcTimePeriodTags_b__0(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__DISPLAYCLASS39_0__REFRESHALLNPCTIMEPERIODTAGS_B__0_OFFSET))(this, npcComp);
		}
	};
}
