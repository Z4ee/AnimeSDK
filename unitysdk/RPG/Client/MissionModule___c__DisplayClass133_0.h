#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class MissionCondition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS133_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD6E8DB0)
#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS133_0___GETFIRSTFAILUREMISSIONCONDITIONWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xD709230)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule___c__DisplayClass133_0_TypeDefinitionIndex = 66194;

	class MissionModule___c__DisplayClass133_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::RPG::GameCore::MissionCondition*>* resultPromise; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>* param; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS133_0__CTOR_OFFSET))(this);
		}

		::System::Void __GetFirstFailureMissionConditionWithPromise_b__0(::System::Collections::Generic::List_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS133_0___GETFIRSTFAILUREMISSIONCONDITIONWITHPROMISE_B__0_OFFSET))(this, a1);
		}
	};
}
