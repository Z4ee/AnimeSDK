#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipSkillData; }
namespace RPG::Client::PixAir { class PixAirTagDisplayData; }
namespace RPG::GameCore { class PixAirEquipLevelRow; }
namespace RPG::GameCore { class PixAirEquipRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GETSKILLDESCLIST_OFFSET UNITYSDK_OFFSET(0x19ED36A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GETSKILLDESC_OFFSET UNITYSDK_OFFSET(0x19ED35F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_BURNPOWER_OFFSET UNITYSDK_OFFSET(0x19ED1170)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_CHARGEPOWER_OFFSET UNITYSDK_OFFSET(0x19ED3F50)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x19ED1290)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_DAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0x19ED0E30)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_DISPLAYTAGLIST_OFFSET UNITYSDK_OFFSET(0x19ED3C80)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_EQUIPICON_OFFSET UNITYSDK_OFFSET(0x19ED3AA0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_EQUIPID_OFFSET UNITYSDK_OFFSET(0x19ED38D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_EQUIPLEVEL_OFFSET UNITYSDK_OFFSET(0x19ED38F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_HASTEPOWER_OFFSET UNITYSDK_OFFSET(0x19ED3EB0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_ISCORE_OFFSET UNITYSDK_OFFSET(0x19ED3B40)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_JAMPOWER_OFFSET UNITYSDK_OFFSET(0x19ED3FF0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_MULTIPOWER_OFFSET UNITYSDK_OFFSET(0x19ED3E10)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19ED39E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_SHIELDPOWER_OFFSET UNITYSDK_OFFSET(0x19ED0FD0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_SKILLLIST_OFFSET UNITYSDK_OFFSET(0x19ED4090)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_SLOTTYPE_OFFSET UNITYSDK_OFFSET(0x19ED03A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_TAGLIST_OFFSET UNITYSDK_OFFSET(0x19ED3BE0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET__EQUIPROW_OFFSET UNITYSDK_OFFSET(0x19ED3980)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x19ED3910)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_SET_EQUIPID_OFFSET UNITYSDK_OFFSET(0x19ED38E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_SET_EQUIPLEVEL_OFFSET UNITYSDK_OFFSET(0x19ED3900)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x19ECE220)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19ED4130)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA__INIT_OFFSET UNITYSDK_OFFSET(0x19ED3480)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipLevelData_TypeDefinitionIndex = 75275;

	class PixAirEquipLevelData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirTagDisplayData*>* _DisplayTagList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipSkillData*>* SkillDataList; // 0x18
		::System::UInt32 _EquipLevel_k__BackingField; // 0x20
		::System::UInt32 _EquipID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA__CTOR_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA__INIT_OFFSET))(this);
		}

		::System::String* GetSkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GETSKILLDESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetSkillDescList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GETSKILLDESCLIST_OFFSET))(this);
		}

		::System::UInt32 get_EquipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_EQUIPID_OFFSET))(this);
		}

		::System::Void set_EquipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_SET_EQUIPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EquipLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_EQUIPLEVEL_OFFSET))(this);
		}

		::System::Void set_EquipLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_SET_EQUIPLEVEL_OFFSET))(this, a1);
		}

		::RPG::GameCore::PixAirEquipLevelRow* get__Row()
		{
			return ((::RPG::GameCore::PixAirEquipLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::PixAirEquipRow* get__EquipRow()
		{
			return ((::RPG::GameCore::PixAirEquipRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET__EQUIPROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_EquipIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_EQUIPICON_OFFSET))(this);
		}

		::RPG::GameCore::PixAirSlotType get_SlotType()
		{
			return ((::RPG::GameCore::PixAirSlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_SLOTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_ISCORE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* get_TagList()
		{
			return ((::Il2CppArray<::RPG::GameCore::PixAirEquipTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_TAGLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirTagDisplayData*>* get_DisplayTagList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirTagDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_DISPLAYTAGLIST_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CoolDown()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_COOLDOWN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_DamagePower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_DAMAGEPOWER_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_ShieldPower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_SHIELDPOWER_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BurnPower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_BURNPOWER_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MultiPower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_MULTIPOWER_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_HastePower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_HASTEPOWER_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_ChargePower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_CHARGEPOWER_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_JamPower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_JAMPOWER_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SkillList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_GET_SKILLLIST_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipLevelData* TryCreate(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PixAir::PixAirEquipLevelData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPLEVELDATA_TRYCREATE_OFFSET))(a1, a2);
		}
	};
}
