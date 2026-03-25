#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RESIDENTBOXINGCLUBACTIVITYDATA_GETPREMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xA2DE560)
#define RPG_CLIENT_RESIDENTBOXINGCLUBACTIVITYDATA_GET_ENTERPANELREDDOT_OFFSET UNITYSDK_OFFSET(0xA2DE5F0)
#define RPG_CLIENT_RESIDENTBOXINGCLUBACTIVITYDATA_ISENTERPANELFULLCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA2DE510)
#define RPG_CLIENT_RESIDENTBOXINGCLUBACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2DE350)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentBoxingClubActivityData_TypeDefinitionIndex = 50114;

	class ResidentBoxingClubActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockMissionList; // 0xA0

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTBOXINGCLUBACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Boolean IsEnterPanelFullCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTBOXINGCLUBACTIVITYDATA_ISENTERPANELFULLCOMPLETED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetPremissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTBOXINGCLUBACTIVITYDATA_GETPREMISSIONLIST_OFFSET))(this);
		}

		::System::String* get_EnterPanelRedDot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTBOXINGCLUBACTIVITYDATA_GET_ENTERPANELREDDOT_OFFSET))(this);
		}
	};
}
