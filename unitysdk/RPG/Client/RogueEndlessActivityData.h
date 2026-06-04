#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA_GETROGUEAREAIDS_OFFSET UNITYSDK_OFFSET(0xC779260)
#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA_HASAVAILABLEAREAREWARD_OFFSET UNITYSDK_OFFSET(0xC779820)
#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xC779630)
#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC779620)
#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA__HASNEWAREA_OFFSET UNITYSDK_OFFSET(0xC779940)
#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA__ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC779730)
#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xC779AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessActivityData_TypeDefinitionIndex = 57645;

	class RogueEndlessActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _EndlessAreaID; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRogueAreaIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSACTIVITYDATA_GETROGUEAREAIDS_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean HasAvailableAreaReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSACTIVITYDATA_HASAVAILABLEAREAREWARD_OFFSET))(this);
		}

		::System::Boolean _IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSACTIVITYDATA__ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean _HasNewArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSACTIVITYDATA__HASNEWAREA_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
