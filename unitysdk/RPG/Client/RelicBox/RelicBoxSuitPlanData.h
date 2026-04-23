#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_24.h"
#include "unitysdk/System/Object.h"

class Class_1_68168894A9D2D702_5;
class Class_1_D17272E82AE804C2_743;
namespace RPG::Client { class IAvatarInfoProvider; }

#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CLEARDIRTY_OFFSET UNITYSDK_OFFSET(0xAF8CF80)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CREATEBYCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xAF906D0)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CREATEBYRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xAF905D0)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CREATEBYTARGETDATA_OFFSET UNITYSDK_OFFSET(0xAF90740)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xAF8C300)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_GET_ISCUSTOM_OFFSET UNITYSDK_OFFSET(0xAF90560)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xAF90570)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_ISEQUALPLAN_OFFSET UNITYSDK_OFFSET(0xAF8C8C0)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_ISSAMEPLAN_OFFSET UNITYSDK_OFFSET(0xAF90980)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_REVERTCHANGE_OFFSET UNITYSDK_OFFSET(0xAF90920)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_SYNCSUITID_OFFSET UNITYSDK_OFFSET(0xAF908B0)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xAF90850)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAF906C0)

namespace RPG::Client::RelicBox
{
	inline static constexpr unsigned int RelicBoxSuitPlanData_TypeDefinitionIndex = 68720;

	class RelicBoxSuitPlanData : public ::System::Object
	{
	public:
		::RPG::Client::IAvatarInfoProvider* Avatar; // 0x10
		::System::UInt32 Set2ID; // 0x18
		::System::UInt32 _OldSet4ID; // 0x1C
		::System::UInt32 Set4ID; // 0x20
		::System::Boolean IsDirty; // 0x24
		::Enum_3_ED790DAC948A65A9_24 TargetSetType; // 0x28
		::System::UInt32 _OldSet2ID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Boolean get_IsCustom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_GET_ISCUSTOM_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_GET_ISEMPTY_OFFSET))(this);
		}

		static ::RPG::Client::RelicBox::RelicBoxSuitPlanData* CreateByRecommendData(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::RelicBox::RelicBoxSuitPlanData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CREATEBYRECOMMENDDATA_OFFSET))(avatarID);
		}

		static ::RPG::Client::RelicBox::RelicBoxSuitPlanData* CreateByCustomData(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::RelicBox::RelicBoxSuitPlanData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CREATEBYCUSTOMDATA_OFFSET))(avatarID);
		}

		static ::RPG::Client::RelicBox::RelicBoxSuitPlanData* CreateByTargetData(::Class_1_68168894A9D2D702_5* target)
		{
			return ((::RPG::Client::RelicBox::RelicBoxSuitPlanData*(*)(::Class_1_68168894A9D2D702_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CREATEBYTARGETDATA_OFFSET))(target);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_743* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_743*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_SYNC_OFFSET))(this, data);
		}

		::System::Void SyncSuitID(::System::UInt32 set4ID, ::System::UInt32 set2ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_SYNCSUITID_OFFSET))(this, set4ID, set2ID);
		}

		::System::Void ClearDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CLEARDIRTY_OFFSET))(this);
		}

		::System::Void RevertChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_REVERTCHANGE_OFFSET))(this);
		}

		::System::Boolean IsSamePlan(::RPG::Client::RelicBox::RelicBoxSuitPlanData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicBox::RelicBoxSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_ISSAMEPLAN_OFFSET))(this, data);
		}

		::System::Boolean IsEqualPlan(::RPG::Client::RelicBox::RelicBoxSuitPlanData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicBox::RelicBoxSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_ISEQUALPLAN_OFFSET))(this, data);
		}
	};
}
