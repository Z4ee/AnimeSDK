#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client { class ConditionCheckerHandle; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONDITIONCHECKERUTIL_ADDCHECKITEM_OFFSET UNITYSDK_OFFSET(0xB7086E0)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_CREATECONDITIONCHECKER_OFFSET UNITYSDK_OFFSET(0xB7085D0)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0xB708750)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_DOCHECKCONDITIONS_OFFSET UNITYSDK_OFFSET(0xB708800)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_DOCHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xB708990)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_DOCHECK_OFFSET UNITYSDK_OFFSET(0xB7088A0)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_GETUNLOCKCONDITION_OFFSET UNITYSDK_OFFSET(0xB7089F0)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_GETUNSATISFYCONDITION_OFFSET UNITYSDK_OFFSET(0xB708AA0)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_INIT_OFFSET UNITYSDK_OFFSET(0xB7087C0)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSHASMET_1_OFFSET UNITYSDK_OFFSET(0xB708D60)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSHASMET_OFFSET UNITYSDK_OFFSET(0xB708C60)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSNOTMET_1_OFFSET UNITYSDK_OFFSET(0xB708ED0)
#define RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSNOTMET_OFFSET UNITYSDK_OFFSET(0xB708DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionCheckerUtil_TypeDefinitionIndex = 56002;

	class ConditionCheckerUtil : public ::System::Object
	{
	public:
		static ::RPG::Client::ConditionChecker* CreateConditionChecker(::Il2CppArray<::RPG::GameCore::ConditionParam*>* a1)
		{
			return ((::RPG::Client::ConditionChecker*(*)(::Il2CppArray<::RPG::GameCore::ConditionParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_CREATECONDITIONCHECKER_OFFSET))(a1);
		}

		static ::RPG::Client::ConditionChecker* CreateEmpty()
		{
			return ((::RPG::Client::ConditionChecker*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_CREATEEMPTY_OFFSET))();
		}

		static ::System::Void AddCheckItem(::RPG::Client::ConditionChecker* a1, ::RPG::GameCore::ConditionParam* a2)
		{
			return ((::System::Void(*)(::RPG::Client::ConditionChecker*, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_ADDCHECKITEM_OFFSET))(a1, a2);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_INIT_OFFSET))();
		}

		static ::System::Boolean DoCheckConditions(::Il2CppArray<::RPG::GameCore::ConditionParam*>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::ConditionParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_DOCHECKCONDITIONS_OFFSET))(a1);
		}

		static ::System::Boolean DoCheckCondition(::RPG::GameCore::ConditionParam* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_DOCHECKCONDITION_OFFSET))(a1);
		}

		static ::System::Boolean DoCheck(::RPG::GameCore::ConditionType a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ConditionType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_DOCHECK_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::ConditionParam* GetUnLockCondition(::Il2CppArray<::RPG::GameCore::ConditionParam*>* a1)
		{
			return ((::RPG::GameCore::ConditionParam*(*)(::Il2CppArray<::RPG::GameCore::ConditionParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_GETUNLOCKCONDITION_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::ConditionParam*>* GetUnSatisfyCondition(::Il2CppArray<::RPG::GameCore::ConditionParam*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ConditionParam*>*(*)(::Il2CppArray<::RPG::GameCore::ConditionParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_GETUNSATISFYCONDITION_OFFSET))(a1);
		}

		static ::RPG::Client::ConditionCheckerHandle* WaitConditionsHasMet(::RPG::Client::ConditionChecker* a1, ::System::Action* a2, ::System::Single a3)
		{
			return ((::RPG::Client::ConditionCheckerHandle*(*)(::RPG::Client::ConditionChecker*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSHASMET_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ConditionCheckerHandle* WaitConditionsHasMet_1(::Il2CppArray<::RPG::GameCore::ConditionParam*>* a1, ::System::Action* a2, ::System::Single a3)
		{
			return ((::RPG::Client::ConditionCheckerHandle*(*)(::Il2CppArray<::RPG::GameCore::ConditionParam*>*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSHASMET_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ConditionCheckerHandle* WaitConditionsNotMet(::RPG::Client::ConditionChecker* a1, ::System::Action* a2, ::System::Single a3)
		{
			return ((::RPG::Client::ConditionCheckerHandle*(*)(::RPG::Client::ConditionChecker*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSNOTMET_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ConditionCheckerHandle* WaitConditionsNotMet_1(::Il2CppArray<::RPG::GameCore::ConditionParam*>* a1, ::System::Action* a2, ::System::Single a3)
		{
			return ((::RPG::Client::ConditionCheckerHandle*(*)(::Il2CppArray<::RPG::GameCore::ConditionParam*>*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERUTIL_WAITCONDITIONSNOTMET_1_OFFSET))(a1, a2, a3);
		}
	};
}
