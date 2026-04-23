#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client { class ConditionCheckerHandle; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONDITIONCHECKERUTIL_ADDCHECKITEM_OFFSET UNITYSDK_OFFSET(0xA0C9410)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_CREATECONDITIONCHECKER_OFFSET UNITYSDK_OFFSET(0xA0C9300)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0xA0C9480)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_DOCHECKCONDITIONS_OFFSET UNITYSDK_OFFSET(0xA0C9530)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_DOCHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xA0C96C0)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_DOCHECK_OFFSET UNITYSDK_OFFSET(0xA0C95E0)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_GETUNLOCKCONDITION_OFFSET UNITYSDK_OFFSET(0xA0C9720)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_GETUNSATISFYCONDITION_OFFSET UNITYSDK_OFFSET(0xA0C97F0)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_INIT_OFFSET UNITYSDK_OFFSET(0xA0C94F0)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSHASMET_1_OFFSET UNITYSDK_OFFSET(0xA0C9A70)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSHASMET_OFFSET UNITYSDK_OFFSET(0xA0C9980)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSNOTMET_1_OFFSET UNITYSDK_OFFSET(0xA0C9BD0)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSNOTMET_OFFSET UNITYSDK_OFFSET(0xA0C9AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionCheckerUtil_TypeDefinitionIndex = 55268;

	class ConditionCheckerUtil : public ::System::Object
	{
	public:
		static ::RPG::Client::ConditionChecker* CreateConditionChecker(::Il2CppArray<::RPG::GameCore::ConditionParam*>* conditionParams)
		{
			return ((::RPG::Client::ConditionChecker*(*)(::Il2CppArray<::RPG::GameCore::ConditionParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_CREATECONDITIONCHECKER_OFFSET))(conditionParams);
		}

		static ::RPG::Client::ConditionChecker* CreateEmpty()
		{
			return ((::RPG::Client::ConditionChecker*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_CREATEEMPTY_OFFSET))();
		}

		static ::System::Void AddCheckItem(::RPG::Client::ConditionChecker* checker, ::RPG::GameCore::ConditionParam* conditionParam)
		{
			return ((::System::Void(*)(::RPG::Client::ConditionChecker*, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_ADDCHECKITEM_OFFSET))(checker, conditionParam);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_INIT_OFFSET))();
		}

		static ::System::Boolean DoCheckConditions(::Il2CppArray<::RPG::GameCore::ConditionParam*>* conditionParams)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::ConditionParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_DOCHECKCONDITIONS_OFFSET))(conditionParams);
		}

		static ::System::Boolean DoCheckCondition(::RPG::GameCore::ConditionParam* conditionParams)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_DOCHECKCONDITION_OFFSET))(conditionParams);
		}

		static ::System::Boolean DoCheck(::RPG::GameCore::ConditionType type, ::System::Object* param)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ConditionType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_DOCHECK_OFFSET))(type, param);
		}

		static ::RPG::GameCore::ConditionParam* GetUnLockCondition(::Il2CppArray<::RPG::GameCore::ConditionParam*>* conditionParams)
		{
			return ((::RPG::GameCore::ConditionParam*(*)(::Il2CppArray<::RPG::GameCore::ConditionParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_GETUNLOCKCONDITION_OFFSET))(conditionParams);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::ConditionParam*>* GetUnSatisfyCondition(::Il2CppArray<::RPG::GameCore::ConditionParam*>* conditionParams)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ConditionParam*>*(*)(::Il2CppArray<::RPG::GameCore::ConditionParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_GETUNSATISFYCONDITION_OFFSET))(conditionParams);
		}

		static ::RPG::Client::ConditionCheckerHandle* WaitConditionsHasMet(::RPG::Client::ConditionChecker* checker, ::System::Action* callBack, ::System::Single tickIntervalSeconds)
		{
			return ((::RPG::Client::ConditionCheckerHandle*(*)(::RPG::Client::ConditionChecker*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSHASMET_OFFSET))(checker, callBack, tickIntervalSeconds);
		}

		static ::RPG::Client::ConditionCheckerHandle* WaitConditionsHasMet_1(::Il2CppArray<::RPG::GameCore::ConditionParam*>* conditionParams, ::System::Action* callBack, ::System::Single tickIntervalSeconds)
		{
			return ((::RPG::Client::ConditionCheckerHandle*(*)(::Il2CppArray<::RPG::GameCore::ConditionParam*>*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSHASMET_1_OFFSET))(conditionParams, callBack, tickIntervalSeconds);
		}

		static ::RPG::Client::ConditionCheckerHandle* WaitConditionsNotMet(::RPG::Client::ConditionChecker* checker, ::System::Action* callBack, ::System::Single tickIntervalSeconds)
		{
			return ((::RPG::Client::ConditionCheckerHandle*(*)(::RPG::Client::ConditionChecker*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSNOTMET_OFFSET))(checker, callBack, tickIntervalSeconds);
		}

		static ::RPG::Client::ConditionCheckerHandle* WaitConditionsNotMet_1(::Il2CppArray<::RPG::GameCore::ConditionParam*>* conditionParams, ::System::Action* callBack, ::System::Single tickIntervalSeconds)
		{
			return ((::RPG::Client::ConditionCheckerHandle*(*)(::Il2CppArray<::RPG::GameCore::ConditionParam*>*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSNOTMET_1_OFFSET))(conditionParams, callBack, tickIntervalSeconds);
		}
	};
}
