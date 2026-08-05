#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174C37C0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__DISPLAYCLASS18_0__SHOWEVACUATIONCOUNTDOWNTIPS_B__0_OFFSET UNITYSDK_OFFSET(0x174C37D0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovQuestSubSystem___c__DisplayClass18_0_TypeDefinitionIndex = 54628;

	class ZenkovQuestSubSystem___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::String* showName; // 0x10
		::System::Int32 tipsId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowEvacuationCountdownTips_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__DISPLAYCLASS18_0__SHOWEVACUATIONCOUNTDOWNTIPS_B__0_OFFSET))(this);
		}
	};
}
