#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_6;
namespace RPG::Client { class ActivityHotData; }
namespace RPG::Client { class ActivityHotModule; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHOTMODULE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB101000)
#define RPG_CLIENT_ACTIVITYHOTMODULE___C__DISPLAYCLASS4_0__GETACTIVITYHOTDATAS_B__0_OFFSET UNITYSDK_OFFSET(0xB104000)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotModule___c__DisplayClass4_0_TypeDefinitionIndex = 57537;

	class ActivityHotModule___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* activityHotDatas; // 0x10
		::RPG::Client::ActivityHotModule* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*>* _GetActivityHotDatas_b__0(::Class_1_455008579EB95638_6* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*>*(*)(::PVOID, ::Class_1_455008579EB95638_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE___C__DISPLAYCLASS4_0__GETACTIVITYHOTDATAS_B__0_OFFSET))(this, a1);
		}
	};
}
