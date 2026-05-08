#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7EA3F9477E892234.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MOLEMOLE_UIYOROZUYADIFFICULTENTRANCECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD07EAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaDifficultEntranceContext_TypeDefinitionIndex = 78841;

	class UIYorozuyaDifficultEntranceContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Events::UnityAction_1<::Enum_3_7EA3F9477E892234>* ClickAction; // 0x28
		::Enum_3_7EA3F9477E892234 EntranceType; // 0x30
		::System::Int32 AbyssGroupId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTENTRANCECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
