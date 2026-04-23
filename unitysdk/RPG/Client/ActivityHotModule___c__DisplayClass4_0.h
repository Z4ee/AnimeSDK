#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_6;
namespace RPG::Client { class ActivityHotData; }
namespace RPG::Client { class ActivityHotModule; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHOTMODULE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B1B7B0)
#define RPG_CLIENT_ACTIVITYHOTMODULE___C__DISPLAYCLASS4_0__GETACTIVITYHOTDATAS_B__0_OFFSET UNITYSDK_OFFSET(0x9B1E8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotModule___c__DisplayClass4_0_TypeDefinitionIndex = 56753;

	class ActivityHotModule___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHotModule* __4__this; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* activityHotDatas; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*>* _GetActivityHotDatas_b__0(::Class_1_455008579EB95638_6* rsp)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*>*(*)(::PVOID, ::Class_1_455008579EB95638_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE___C__DISPLAYCLASS4_0__GETACTIVITYHOTDATAS_B__0_OFFSET))(this, rsp);
		}
	};
}
