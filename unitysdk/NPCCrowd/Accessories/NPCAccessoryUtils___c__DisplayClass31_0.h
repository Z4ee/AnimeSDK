#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13DE89A0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS31_0__GENERATEGALGAMENPCACCESSORYINFO_B__0_OFFSET UNITYSDK_OFFSET(0x13DE89B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS31_0__GENERATEGALGAMENPCACCESSORYINFO_B__1_OFFSET UNITYSDK_OFFSET(0x13DE89E0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS31_0__GENERATEGALGAMENPCACCESSORYINFO_B__2_OFFSET UNITYSDK_OFFSET(0x13DE89F0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryUtils___c__DisplayClass31_0_TypeDefinitionIndex = 72017;

	class NPCAccessoryUtils___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::FNpcAvatarGenericParams_AccessoryInfo accSlotInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GenerateGalgameNPCAccessoryInfo_b__0(::System::ValueTuple_2<::System::String*, ::System::Boolean> pair)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::String*, ::System::Boolean>))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS31_0__GENERATEGALGAMENPCACCESSORYINFO_B__0_OFFSET))(this, pair);
		}

		::System::Boolean _GenerateGalgameNPCAccessoryInfo_b__1(::FNpcAvatarGenericParams_AccessoryInfo info)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNpcAvatarGenericParams_AccessoryInfo))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS31_0__GENERATEGALGAMENPCACCESSORYINFO_B__1_OFFSET))(this, info);
		}

		::System::Boolean _GenerateGalgameNPCAccessoryInfo_b__2(::FNpcAvatarGenericParams_AccessoryInfo info)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNpcAvatarGenericParams_AccessoryInfo))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS31_0__GENERATEGALGAMENPCACCESSORYINFO_B__2_OFFSET))(this, info);
		}
	};
}
