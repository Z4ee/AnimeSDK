#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class PhotoGraphResultPredicate; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18673350)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_GET_CONDITIONINDEX_OFFSET UNITYSDK_OFFSET(0x186734D0)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_GET_CONDITIONNAME_OFFSET UNITYSDK_OFFSET(0x18673510)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_GET_CURRENTRESULT_OFFSET UNITYSDK_OFFSET(0x186734F0)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_SET_CONDITIONINDEX_OFFSET UNITYSDK_OFFSET(0x186734E0)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_SET_CONDITIONNAME_OFFSET UNITYSDK_OFFSET(0x18673520)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_SET_CURRENTRESULT_OFFSET UNITYSDK_OFFSET(0x18673500)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_TICK_OFFSET UNITYSDK_OFFSET(0x18673220)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18672FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphResultCondition_TypeDefinitionIndex = 69418;

	class PhotoGraphResultCondition : public ::System::Object
	{
	public:
		::Class_3_07C3C4D2990C49EE* _OnSuccessSeq; // 0x10
		::Il2CppArray<::RPG::GameCore::StringHash>* FlagNames; // 0x18
		::Class_1_5F51D4049EA87B7B* _PredicateTask; // 0x20
		::RPG::Client::TextID _ConditionName_k__BackingField; // 0x28
		::System::Int32 _ConditionIndex_k__BackingField; // 0x38
		::System::Boolean _CurrentResult_k__BackingField; // 0x3C

		::System::Void _ctor(::RPG::GameCore::PhotoGraphResultPredicate* a1, ::RPG::GameCore::TaskContext* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphResultPredicate*, ::RPG::GameCore::TaskContext*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_TICK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_ConditionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_GET_CONDITIONINDEX_OFFSET))(this);
		}

		::System::Void set_ConditionIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_SET_CONDITIONINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_CurrentResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_GET_CURRENTRESULT_OFFSET))(this);
		}

		::System::Void set_CurrentResult(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_SET_CURRENTRESULT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ConditionName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_GET_CONDITIONNAME_OFFSET))(this);
		}

		::System::Void set_ConditionName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_SET_CONDITIONNAME_OFFSET))(this, a1);
		}
	};
}
