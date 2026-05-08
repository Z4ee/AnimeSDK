#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_5DA2E7556103D5A3_261;
class Class_1_A047EA5169B6B30F;
class Class_1_D87CC9E8B20EEC50;

#define MOLEMOLE_ACTIVITYGOBATTLELEVELINFOCONTEXT_INITQUESTDATA_OFFSET UNITYSDK_OFFSET(0x141CEA80)
#define MOLEMOLE_ACTIVITYGOBATTLELEVELINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x141CEC70)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityGoBattleLevelInfoContext_TypeDefinitionIndex = 57975;

	class ActivityGoBattleLevelInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_A047EA5169B6B30F* QuestData; // 0x28
		::Class_1_5DA2E7556103D5A3_261* QuestTemplate; // 0x30
		::Class_1_D87CC9E8B20EEC50* ActivityQuest; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYGOBATTLELEVELINFOCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void InitQuestData(::Class_1_D87CC9E8B20EEC50* quest)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D87CC9E8B20EEC50*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYGOBATTLELEVELINFOCONTEXT_INITQUESTDATA_OFFSET))(this, quest);
		}
	};
}
