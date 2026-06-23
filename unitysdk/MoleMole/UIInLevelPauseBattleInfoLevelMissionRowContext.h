#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_EA67DE3E7B7C743B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2_ValueCollection; }

#define MOLEMOLE_UIINLEVELPAUSEBATTLEINFOLEVELMISSIONROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x186EED90)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseBattleInfoLevelMissionRowContext_TypeDefinitionIndex = 59585;

	class UIInLevelPauseBattleInfoLevelMissionRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::Dictionary_2_ValueCollection<::System::Int32, ::Class_1_EA67DE3E7B7C743B*>* Quests; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBATTLEINFOLEVELMISSIONROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
