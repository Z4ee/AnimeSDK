#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKDAILYFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xBCE5E90)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCE5DF0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_GET_REDDOTDAILYQUESTIDS_OFFSET UNITYSDK_OFFSET(0xBCE63C0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_GET_REDDOTDAILYREWARDLEVELS_OFFSET UNITYSDK_OFFSET(0xBCE63A0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xBCE5850)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_SET_REDDOTDAILYQUESTIDS_OFFSET UNITYSDK_OFFSET(0xBCE63D0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_SET_REDDOTDAILYREWARDLEVELS_OFFSET UNITYSDK_OFFSET(0xBCE63B0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_0_OFFSET UNITYSDK_OFFSET(0xBCE6480)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_1_OFFSET UNITYSDK_OFFSET(0xBCE6490)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_2_OFFSET UNITYSDK_OFFSET(0xBCE64A0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_3_OFFSET UNITYSDK_OFFSET(0xBCE64B0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_4_OFFSET UNITYSDK_OFFSET(0xBCE64C0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_5_OFFSET UNITYSDK_OFFSET(0xBCE64D0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xBCE63E0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__UPDATEDAILYQUESTS_OFFSET UNITYSDK_OFFSET(0xBCE5B80)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__UPDATEREWARDLEVELS_OFFSET UNITYSDK_OFFSET(0xBCE58D0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xBCE65C0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCE6550)
#define RPG_CLIENT_HANDBOOKDAILYFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xBCE64E0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookDailyFilter_TypeDefinitionIndex = 62480;

	class HandbookDailyFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotDailyQuestIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotDailyRewardLevels_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _UpdateRewardLevels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER__UPDATEREWARDLEVELS_OFFSET))(this);
		}

		::System::Void _UpdateDailyQuests()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER__UPDATEDAILYQUESTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotDailyRewardLevels()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER_GET_REDDOTDAILYREWARDLEVELS_OFFSET))(this);
		}

		::System::Void set_RedDotDailyRewardLevels(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER_SET_REDDOTDAILYREWARDLEVELS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotDailyQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER_GET_REDDOTDAILYQUESTIDS_OFFSET))(this);
		}

		::System::Void set_RedDotDailyQuestIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER_SET_REDDOTDAILYQUESTIDS_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers_b__2_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers_b__2_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_1_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers_b__2_2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_2_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers_b__2_3(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_3_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers_b__2_4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_4_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers_b__2_5(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_5_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
