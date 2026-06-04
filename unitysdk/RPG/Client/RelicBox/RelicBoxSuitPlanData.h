#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_24.h"
#include "unitysdk/System/Object.h"

class Class_1_68168894A9D2D702_6;
class Class_1_D17272E82AE804C2_779;
namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CLEARDIRTY_OFFSET UNITYSDK_OFFSET(0xC6D3E50)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CREATEBYCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xC6D74A0)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CREATEBYRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6D73B0)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CREATEBYTARGETDATA_OFFSET UNITYSDK_OFFSET(0xC6D7510)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xC6D3190)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_GET_ISCUSTOM_OFFSET UNITYSDK_OFFSET(0xC6D7340)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xC6D7350)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_ISEQUALPLAN_OFFSET UNITYSDK_OFFSET(0xC6D3750)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_ISSAMEPLAN_OFFSET UNITYSDK_OFFSET(0xC6D7750)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_REVERTCHANGE_OFFSET UNITYSDK_OFFSET(0xC6D76F0)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_SYNCSUITID_OFFSET UNITYSDK_OFFSET(0xC6D7680)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC6D7620)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC6D7490)

namespace RPG::Client::RelicBox
{
	inline static constexpr unsigned int RelicBoxSuitPlanData_TypeDefinitionIndex = 69532;

	class RelicBoxSuitPlanData : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* Avatar; // 0x10
		::System::Boolean IsDirty; // 0x18
		::System::UInt32 Set2ID; // 0x1C
		::Enum_3_ED790DAC948A65A9_24 TargetSetType; // 0x20
		::System::UInt32 _OldSet4ID; // 0x24
		::System::UInt32 Set4ID; // 0x28
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

		static ::RPG::Client::RelicBox::RelicBoxSuitPlanData* CreateByRecommendData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicBox::RelicBoxSuitPlanData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CREATEBYRECOMMENDDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RelicBox::RelicBoxSuitPlanData* CreateByCustomData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicBox::RelicBoxSuitPlanData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CREATEBYCUSTOMDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RelicBox::RelicBoxSuitPlanData* CreateByTargetData(::Class_1_68168894A9D2D702_6* a1)
		{
			return ((::RPG::Client::RelicBox::RelicBoxSuitPlanData*(*)(::Class_1_68168894A9D2D702_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CREATEBYTARGETDATA_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_779* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_779*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncSuitID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_SYNCSUITID_OFFSET))(this, a1, a2);
		}

		::System::Void ClearDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_CLEARDIRTY_OFFSET))(this);
		}

		::System::Void RevertChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_REVERTCHANGE_OFFSET))(this);
		}

		::System::Boolean IsSamePlan(::RPG::Client::RelicBox::RelicBoxSuitPlanData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicBox::RelicBoxSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_ISSAMEPLAN_OFFSET))(this, a1);
		}

		::System::Boolean IsEqualPlan(::RPG::Client::RelicBox::RelicBoxSuitPlanData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicBox::RelicBoxSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATA_ISEQUALPLAN_OFFSET))(this, a1);
		}
	};
}
