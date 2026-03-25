#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
#include "unitysdk/System/Object.h"

class Class_3_B8A086DB341E9298;
namespace RPG::Client { class PhotoGraphResultCondition; }
namespace RPG::GameCore { class PhotoGraphShotResultCondition; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK_CHECKRESULT_OFFSET UNITYSDK_OFFSET(0x9F4AC90)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F4AD20)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK_TICK_OFFSET UNITYSDK_OFFSET(0x9F4AB50)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK__CTOR_OFFSET UNITYSDK_OFFSET(0x9F4A9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphResultConditionPack_TypeDefinitionIndex = 56760;

	class PhotoGraphResultConditionPack : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::PhotoGraphResultCondition*>* PhotoGraphResultSingleConditions; // 0x10
		::Class_3_B8A086DB341E9298* _ResultChange; // 0x18
		::RPG::GameCore::PhotoGraphFovLevel TargetFovLevel; // 0x20
		::System::Boolean _LastResult; // 0x24
		::System::Boolean AutoSnapFovLevel; // 0x25
		::RPG::Client::TextID ConditionName; // 0x28

		::System::Void _ctor(::RPG::GameCore::PhotoGraphShotResultCondition* condition, ::RPG::GameCore::TaskContext* context, ::Class_3_B8A086DB341E9298* resultChangeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphShotResultCondition*, ::RPG::GameCore::TaskContext*, ::Class_3_B8A086DB341E9298*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK__CTOR_OFFSET))(this, condition, context, resultChangeCallback);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK_TICK_OFFSET))(this);
		}

		::System::Boolean CheckResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK_CHECKRESULT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK_DISPOSE_OFFSET))(this);
		}
	};
}
