#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/ValueTuple_3.h"

#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F49E00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelScoreActionContext_TypeDefinitionIndex = 83137;

	class UIMusicBattleInLevelScoreActionContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> Template; // 0x28
		::System::Int32 InitScore; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
