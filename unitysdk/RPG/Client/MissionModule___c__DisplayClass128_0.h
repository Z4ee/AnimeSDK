#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class MissionCondition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS128_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA8E59F0)
#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS128_0___GETFIRSTFAILUREMISSIONCONDITIONWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xA8E5A00)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule___c__DisplayClass128_0_TypeDefinitionIndex = 60913;

	class MissionModule___c__DisplayClass128_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>* param; // 0x10
		::RPG::Client::Promises::Promise_1<::RPG::GameCore::MissionCondition*>* resultPromise; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS128_0__CTOR_OFFSET))(this);
		}

		::System::Void __GetFirstFailureMissionConditionWithPromise_b__0(::System::Collections::Generic::List_1<::System::Boolean>* res)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS128_0___GETFIRSTFAILUREMISSIONCONDITIONWITHPROMISE_B__0_OFFSET))(this, res);
		}
	};
}
