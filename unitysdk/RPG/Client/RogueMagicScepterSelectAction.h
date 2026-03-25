#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_5FEFAED860528596_86;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA32F5B0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xA32F640)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xA32F230)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA32F1F0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_GET_SELECTSCEPTERSIDLEVEL_OFFSET UNITYSDK_OFFSET(0xA32F210)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xA32F240)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA32F200)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_SET_SELECTSCEPTERSIDLEVEL_OFFSET UNITYSDK_OFFSET(0xA32F220)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xA32F5F0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xA32F2C0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA32F250)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicScepterSelectAction_TypeDefinitionIndex = 54527;

	class RogueMagicScepterSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* _SelectSceptersIDLevel_k__BackingField; // 0x10
		::System::UInt32 _HintID_k__BackingField; // 0x18
		::System::UInt32 _RogueActionID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_5FEFAED860528596_86* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_5FEFAED860528596_86*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_SET_ROGUEACTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* get_SelectSceptersIDLevel()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_GET_SELECTSCEPTERSIDLEVEL_OFFSET))(this);
		}

		::System::Void set_SelectSceptersIDLevel(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_SET_SELECTSCEPTERSIDLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_SET_HINTID_OFFSET))(this, value);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_GETUIPATH_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_5FEFAED860528596_86* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_86*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION__CONSTRUCT_OFFSET))(this, proto);
		}
	};
}
