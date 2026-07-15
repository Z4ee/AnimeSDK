#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKDAILYFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x18FCF0C0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18FCF040)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_GET_REDDOTDAILYQUESTIDS_OFFSET UNITYSDK_OFFSET(0x18FCF5F0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_GET_REDDOTDAILYREWARDLEVELS_OFFSET UNITYSDK_OFFSET(0x18FCF5D0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x18FCEAC0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_SET_REDDOTDAILYQUESTIDS_OFFSET UNITYSDK_OFFSET(0x18FCF600)
#define RPG_CLIENT_HANDBOOKDAILYFILTER_SET_REDDOTDAILYREWARDLEVELS_OFFSET UNITYSDK_OFFSET(0x18FCF5E0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_0_OFFSET UNITYSDK_OFFSET(0x18FCF6C0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_1_OFFSET UNITYSDK_OFFSET(0x18FCF6D0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_2_OFFSET UNITYSDK_OFFSET(0x18FCF6E0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_3_OFFSET UNITYSDK_OFFSET(0x18FCF6F0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_4_OFFSET UNITYSDK_OFFSET(0x18FCF700)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__ADDHANDLERS_B__2_5_OFFSET UNITYSDK_OFFSET(0x18FCF710)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FCF610)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__UPDATEDAILYQUESTS_OFFSET UNITYSDK_OFFSET(0x18FCEDD0)
#define RPG_CLIENT_HANDBOOKDAILYFILTER__UPDATEREWARDLEVELS_OFFSET UNITYSDK_OFFSET(0x18FCEB20)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookDailyFilter_TypeDefinitionIndex = 63846;

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
	};
}
