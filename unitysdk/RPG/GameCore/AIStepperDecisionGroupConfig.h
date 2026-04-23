#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIDecisionBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIDecisionConfig; }
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_METHOD_4_9BC4B801EB811E9E_OFFSET UNITYSDK_OFFSET(0x185F2610)
#define RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_METHOD_4_BD4C279166180CFB_OFFSET UNITYSDK_OFFSET(0x185F0070)
#define RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_METHOD_4_C66FCDCC115993CF_OFFSET UNITYSDK_OFFSET(0x185F2650)
#define RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x185F0060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIStepperDecisionGroupConfig_TypeDefinitionIndex = 14650;

	class AIStepperDecisionGroupConfig : public ::RPG::GameCore::AIDecisionBaseConfig
	{
	public:
		::System::String* DecisionGroupName; // 0x28
		::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* DecisionList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9BC4B801EB811E9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIStepperDecisionGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIStepperDecisionGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_METHOD_4_9BC4B801EB811E9E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BD4C279166180CFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIStepperDecisionGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIStepperDecisionGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_METHOD_4_BD4C279166180CFB_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AIDecisionConfig*>* Method_4_C66FCDCC115993CF()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AIDecisionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_METHOD_4_C66FCDCC115993CF_OFFSET))(this);
		}
	};
}
