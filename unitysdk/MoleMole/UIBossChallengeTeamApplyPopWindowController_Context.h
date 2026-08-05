#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_3A7CC933E49505B0_Class_1_8C92669D4140023D;
class Class_3_F118437738B4CCD5_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBOSSCHALLENGETEAMAPPLYPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D29710)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeTeamApplyPopWindowController_Context_TypeDefinitionIndex = 50844;

	class UIBossChallengeTeamApplyPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_3_F118437738B4CCD5_2*>* TeamInfos; // 0x28
		::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_8C92669D4140023D*>* SquadToolLayers; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMAPPLYPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
