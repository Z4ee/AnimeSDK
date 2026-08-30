#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_84;
namespace RPG::Client { class RogueBuffData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1BC78FA0)
#define RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0x1BC79030)
#define RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1BC78DF0)
#define RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_GET_SELECTBUFFSOURCEHINTID_OFFSET UNITYSDK_OFFSET(0x1BC78E30)
#define RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_GET_SELECTBUFFS_OFFSET UNITYSDK_OFFSET(0x1BC78E10)
#define RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1BC78E00)
#define RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_SET_SELECTBUFFSOURCEHINTID_OFFSET UNITYSDK_OFFSET(0x1BC78E40)
#define RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_SET_SELECTBUFFS_OFFSET UNITYSDK_OFFSET(0x1BC78E20)
#define RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1BC78FE0)
#define RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC78E50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffEnhanceSelectAction_TypeDefinitionIndex = 66983;

	class RogueBuffEnhanceSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _SelectBuffs_k__BackingField; // 0x10
		::System::UInt32 _SelectBuffSourceHintID_k__BackingField; // 0x18
		::System::UInt32 _RogueActionID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_7FF19F6206AF6DD7_84* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_7FF19F6206AF6DD7_84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_SET_ROGUEACTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* get_SelectBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_GET_SELECTBUFFS_OFFSET))(this);
		}

		::System::Void set_SelectBuffs(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_SET_SELECTBUFFS_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectBuffSourceHintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_GET_SELECTBUFFSOURCEHINTID_OFFSET))(this);
		}

		::System::Void set_SelectBuffSourceHintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_SET_SELECTBUFFSOURCEHINTID_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCESELECTACTION_GETUIPATH_OFFSET))(this);
		}
	};
}
