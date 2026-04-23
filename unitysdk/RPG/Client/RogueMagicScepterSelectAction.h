#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_455008579EB95638_91;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xB0655D0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xB065660)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xB065240)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xB065200)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_GET_SELECTSCEPTERSIDLEVEL_OFFSET UNITYSDK_OFFSET(0xB065220)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xB065250)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xB065210)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_SET_SELECTSCEPTERSIDLEVEL_OFFSET UNITYSDK_OFFSET(0xB065230)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xB065610)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xB0652D0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB065260)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicScepterSelectAction_TypeDefinitionIndex = 61715;

	class RogueMagicScepterSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* _SelectSceptersIDLevel_k__BackingField; // 0x10
		::System::UInt32 _HintID_k__BackingField; // 0x18
		::System::UInt32 _RogueActionID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_455008579EB95638_91* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_455008579EB95638_91*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION__CTOR_OFFSET))(this, actionID, proto);
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

		::System::Void _Construct(::Class_1_455008579EB95638_91* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_91*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERSELECTACTION__CONSTRUCT_OFFSET))(this, proto);
		}
	};
}
