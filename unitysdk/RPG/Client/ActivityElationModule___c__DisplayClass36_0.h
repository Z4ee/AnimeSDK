#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_36;
namespace RPG::Client { class ActivityElationStage; }

#define RPG_CLIENT_ACTIVITYELATIONMODULE___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3E590)
#define RPG_CLIENT_ACTIVITYELATIONMODULE___C__DISPLAYCLASS36_0___SETSTAGERESULT_B__0_OFFSET UNITYSDK_OFFSET(0x1AD3E8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationModule___c__DisplayClass36_0_TypeDefinitionIndex = 61604;

	class ActivityElationModule___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::Class_1_21C7581DFE99F091_36* levelData; // 0x10

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
