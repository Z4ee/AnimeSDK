#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA_GETROGUEAREAIDS_OFFSET UNITYSDK_OFFSET(0x1A44A7E0)
#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA_HASAVAILABLEAREAREWARD_OFFSET UNITYSDK_OFFSET(0x1A44ADB0)
#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1A44ABC0)
#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A44ABB0)
#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA__HASNEWAREA_OFFSET UNITYSDK_OFFSET(0x1A44AED0)
#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA__ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A44ACC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessActivityData_TypeDefinitionIndex = 58910;

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
	};
}
