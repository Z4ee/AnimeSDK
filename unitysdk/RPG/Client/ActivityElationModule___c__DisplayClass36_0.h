#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_31;
namespace RPG::Client { class ActivityElationStage; }

#define RPG_CLIENT_ACTIVITYELATIONMODULE___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB0B6290)
#define RPG_CLIENT_ACTIVITYELATIONMODULE___C__DISPLAYCLASS36_0___SETSTAGERESULT_B__0_OFFSET UNITYSDK_OFFSET(0xB0B66E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationModule___c__DisplayClass36_0_TypeDefinitionIndex = 57511;

	class ActivityElationModule___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::Class_1_21C7581DFE99F091_31* levelData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SetStageResult_b__0(::RPG::Client::ActivityElationStage* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityElationStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE___C__DISPLAYCLASS36_0___SETSTAGERESULT_B__0_OFFSET))(this, a1);
		}
	};
}
