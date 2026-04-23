#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKDAILYFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5E3550)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5E3480)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_GET_REDDOTDAILYQUESTIDS_OFFSET UNITYSDK_OFFSET(0xA5E3860)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_GET_REDDOTDAILYREWARDLEVELS_OFFSET UNITYSDK_OFFSET(0xA5E3840)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xA5E2F70)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_SET_REDDOTDAILYQUESTIDS_OFFSET UNITYSDK_OFFSET(0xA5E3870)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_SET_REDDOTDAILYREWARDLEVELS_OFFSET UNITYSDK_OFFSET(0xA5E3850)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_0_OFFSET UNITYSDK_OFFSET(0xA5E3920)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_1_OFFSET UNITYSDK_OFFSET(0xA5E3930)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_2_OFFSET UNITYSDK_OFFSET(0xA5E3940)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_3_OFFSET UNITYSDK_OFFSET(0xA5E3950)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_4_OFFSET UNITYSDK_OFFSET(0xA5E3960)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_5_OFFSET UNITYSDK_OFFSET(0xA5E3970)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E3880)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__UPDATEDAILYQUESTS_OFFSET UNITYSDK_OFFSET(0xA5E31F0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__UPDATEREWARDLEVELS_OFFSET UNITYSDK_OFFSET(0xA5E2FF0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5E3A80)
#define RPG_CLIENT_HANDBOOKDAILYFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5E3A00)
#define RPG_CLIENT_HANDBOOKDAILYFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA5E3980)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookDailyFilter_TypeDefinitionIndex = 61547;

	class HandbookDailyFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotDailyRewardLevels_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotDailyQuestIDs_k__BackingField; // 0x18

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

		::System::Void set_RedDotDailyRewardLevels(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER_SET_REDDOTDAILYREWARDLEVELS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotDailyQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER_GET_REDDOTDAILYQUESTIDS_OFFSET))(this);
		}

		::System::Void set_RedDotDailyQuestIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER_SET_REDDOTDAILYQUESTIDS_OFFSET))(this, value);
		}

		::System::Void _AddHandlers_b__2_0(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_0_OFFSET))(this, arg);
		}

		::System::Void _AddHandlers_b__2_1(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_1_OFFSET))(this, arg);
		}

		::System::Void _AddHandlers_b__2_2(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_2_OFFSET))(this, arg);
		}

		::System::Void _AddHandlers_b__2_3(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_3_OFFSET))(this, arg);
		}

		::System::Void _AddHandlers_b__2_4(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_4_OFFSET))(this, arg);
		}

		::System::Void _AddHandlers_b__2_5(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_5_OFFSET))(this, arg);
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
