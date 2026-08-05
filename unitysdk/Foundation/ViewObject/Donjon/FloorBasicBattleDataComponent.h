#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5CD8071E94907A55.h"
#include "unitysdk/Enum_3_B8476D59AF56A31C.h"
#include "unitysdk/Foundation/ViewObject/Donjon/DonjonFloorComponent_1.h"
#include "unitysdk/Foundation/ViewObject/Donjon/PartnerAvatarConfig.h"
#include "unitysdk/Struct_2_8A77D15D7EA8B8D3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_DIFFICULTYTAGID_OFFSET UNITYSDK_OFFSET(0x113EDB30)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_LEVELABILITYBUFFHANDLES_OFFSET UNITYSDK_OFFSET(0x113EDB90)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_MISCCTRLDICT_OFFSET UNITYSDK_OFFSET(0x113EDC10)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_MISCTIMECTRLDICT_OFFSET UNITYSDK_OFFSET(0x113EDBF0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_MONSTERVERSIONADJUSTID_OFFSET UNITYSDK_OFFSET(0x113EDB50)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_OVERRIDEHIGHPRIORITYMONSTERPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x113EDB70)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_PARTNERAVATAR_OFFSET UNITYSDK_OFFSET(0x113EDBD0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_WEAKNESSRESISTOVERRIDEID_OFFSET UNITYSDK_OFFSET(0x113EDBB0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x113EDC30)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_DIFFICULTYTAGID_OFFSET UNITYSDK_OFFSET(0x113EDB40)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_LEVELABILITYBUFFHANDLES_OFFSET UNITYSDK_OFFSET(0x113EDBA0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_MISCCTRLDICT_OFFSET UNITYSDK_OFFSET(0x113EDC20)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_MISCTIMECTRLDICT_OFFSET UNITYSDK_OFFSET(0x113EDC00)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_MONSTERVERSIONADJUSTID_OFFSET UNITYSDK_OFFSET(0x113EDB60)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_OVERRIDEHIGHPRIORITYMONSTERPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x113EDB80)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_PARTNERAVATAR_OFFSET UNITYSDK_OFFSET(0x113EDBE0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_WEAKNESSRESISTOVERRIDEID_OFFSET UNITYSDK_OFFSET(0x113EDBC0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x113EDC90)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorBasicBattleDataComponent_TypeDefinitionIndex = 74372;

	class FloorBasicBattleDataComponent : public ::Foundation::ViewObject::Donjon::DonjonFloorComponent_1<::Foundation::ViewObject::Donjon::FloorBasicBattleDataComponent*>
	{
	public:
		::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>* _LevelAbilityBuffHandles_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::Enum_3_B8476D59AF56A31C, ::System::Boolean>* _MiscTimeCtrlDict_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::Enum_3_5CD8071E94907A55, ::System::Boolean>* _MiscCtrlDict_k__BackingField; // 0x30
		::Foundation::ViewObject::Donjon::PartnerAvatarConfig _PartnerAvatar_k__BackingField; // 0x38
		::System::Int32 _MonsterVersionAdjustID_k__BackingField; // 0x48
		::System::Int32 _OverrideHighPriorityMonsterPlayType_k__BackingField; // 0x4C
		::System::Int32 _WeaknessResistOverrideID_k__BackingField; // 0x50
		::System::Int32 _DifficultyTagID_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DifficultyTagID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_DIFFICULTYTAGID_OFFSET))(this);
		}

		::System::Void set_DifficultyTagID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_DIFFICULTYTAGID_OFFSET))(this, value);
		}

		::System::Int32 get_MonsterVersionAdjustID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_MONSTERVERSIONADJUSTID_OFFSET))(this);
		}

		::System::Void set_MonsterVersionAdjustID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_MONSTERVERSIONADJUSTID_OFFSET))(this, value);
		}

		::System::Int32 get_OverrideHighPriorityMonsterPlayType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_OVERRIDEHIGHPRIORITYMONSTERPLAYTYPE_OFFSET))(this);
		}

		::System::Void set_OverrideHighPriorityMonsterPlayType(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_OVERRIDEHIGHPRIORITYMONSTERPLAYTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>* get_LevelAbilityBuffHandles()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_LEVELABILITYBUFFHANDLES_OFFSET))(this);
		}

		::System::Void set_LevelAbilityBuffHandles(::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_LEVELABILITYBUFFHANDLES_OFFSET))(this, value);
		}

		::System::Int32 get_WeaknessResistOverrideID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_WEAKNESSRESISTOVERRIDEID_OFFSET))(this);
		}

		::System::Void set_WeaknessResistOverrideID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_WEAKNESSRESISTOVERRIDEID_OFFSET))(this, value);
		}

		::Foundation::ViewObject::Donjon::PartnerAvatarConfig get_PartnerAvatar()
		{
			return ((::Foundation::ViewObject::Donjon::PartnerAvatarConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_PARTNERAVATAR_OFFSET))(this);
		}

		::System::Void set_PartnerAvatar(::Foundation::ViewObject::Donjon::PartnerAvatarConfig value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Donjon::PartnerAvatarConfig))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_PARTNERAVATAR_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::Enum_3_B8476D59AF56A31C, ::System::Boolean>* get_MiscTimeCtrlDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::Enum_3_B8476D59AF56A31C, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_MISCTIMECTRLDICT_OFFSET))(this);
		}

		::System::Void set_MiscTimeCtrlDict(::System::Collections::Generic::Dictionary_2<::Enum_3_B8476D59AF56A31C, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_B8476D59AF56A31C, ::System::Boolean>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_MISCTIMECTRLDICT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::Enum_3_5CD8071E94907A55, ::System::Boolean>* get_MiscCtrlDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::Enum_3_5CD8071E94907A55, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_MISCCTRLDICT_OFFSET))(this);
		}

		::System::Void set_MiscCtrlDict(::System::Collections::Generic::Dictionary_2<::Enum_3_5CD8071E94907A55, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_5CD8071E94907A55, ::System::Boolean>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_MISCCTRLDICT_OFFSET))(this, value);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_ONRECYCLE_OFFSET))(this);
		}
	};
}
