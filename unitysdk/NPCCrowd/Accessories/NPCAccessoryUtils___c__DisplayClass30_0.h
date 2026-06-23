#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11364F90)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS30_0__GENERATENPCACCESSORYINFO_B__0_OFFSET UNITYSDK_OFFSET(0x11364FA0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryUtils___c__DisplayClass30_0_TypeDefinitionIndex = 64552;

	class NPCAccessoryUtils___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::FNpcAvatarGenericParams_AccessoryInfo accSlotInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GenerateNPCAccessoryInfo_b__0(::System::ValueTuple_2<::System::String*, ::System::Boolean> pair)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::String*, ::System::Boolean>))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS30_0__GENERATENPCACCESSORYINFO_B__0_OFFSET))(this, pair);
		}
	};
}
