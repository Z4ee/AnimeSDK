#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_ROLETRIALACTIVITYDATA_GET_TYPEPARAM_OFFSET UNITYSDK_OFFSET(0x16A170F0)
#define RPG_CLIENT_ROLETRIALACTIVITYDATA_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x16A17000)
#define RPG_CLIENT_ROLETRIALACTIVITYDATA_ISALLREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x16A17270)
#define RPG_CLIENT_ROLETRIALACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x16A174D0)
#define RPG_CLIENT_ROLETRIALACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x16A17470)
#define RPG_CLIENT_ROLETRIALACTIVITYDATA_ONENTERACTIVITYTAB_OFFSET UNITYSDK_OFFSET(0x16A17420)
#define RPG_CLIENT_ROLETRIALACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16A16FF0)
#define RPG_CLIENT_ROLETRIALACTIVITYDATA__ONACTIVITYOPENEDCUSTOM_OFFSET UNITYSDK_OFFSET(0x16A17530)

namespace RPG::Client
{
	inline static constexpr unsigned int RoleTrialActivityData_TypeDefinitionIndex = 61751;

	class RoleTrialActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::UInt32 DefaultSelectedAvatarID; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALACTIVITYDATA_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean IsAllRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALACTIVITYDATA_ISALLREWARDTAKEN_OFFSET))(this);
		}

		::System::Void OnEnterActivityTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALACTIVITYDATA_ONENTERACTIVITYTAB_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Void _OnActivityOpenedCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALACTIVITYDATA__ONACTIVITYOPENEDCUSTOM_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TypeParam()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALACTIVITYDATA_GET_TYPEPARAM_OFFSET))(this);
		}
	};
}
