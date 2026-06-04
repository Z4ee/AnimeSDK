#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_D17272E82AE804C2_436;
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GETSCRIPTPATH_OFFSET UNITYSDK_OFFSET(0xBC254D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0xBC25560)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0xBC25540)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SET_EFFECTID_OFFSET UNITYSDK_OFFSET(0xBC25570)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SET_TRAITID_OFFSET UNITYSDK_OFFSET(0xBC25550)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xBC25480)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xBC25470)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitChooseBaseAction_TypeDefinitionIndex = 61110;

	class GridFightTraitChooseBaseAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::UInt32 _EffectID_k__BackingField; // 0x18
		::System::UInt32 _TraitID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_436* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_436*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::System::String* GetScriptPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GETSCRIPTPATH_OFFSET))(this);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GET_TRAITID_OFFSET))(this);
		}

		::System::Void set_TraitID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SET_TRAITID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GET_EFFECTID_OFFSET))(this);
		}

		::System::Void set_EffectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SET_EFFECTID_OFFSET))(this, a1);
		}
	};
}
