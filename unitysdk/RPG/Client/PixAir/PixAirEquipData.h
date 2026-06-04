#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipTagDisplayData; }
namespace RPG::GameCore { class PixAirEquipRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GETDISPLAYTAGLIST_OFFSET UNITYSDK_OFFSET(0xC3BF3B0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET_AFFECTEDTAGLIST_OFFSET UNITYSDK_OFFSET(0xC3BF340)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET_EQUIPICON_OFFSET UNITYSDK_OFFSET(0xC3BF180)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET_EQUIPID_OFFSET UNITYSDK_OFFSET(0xC3BF080)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET_ISCORE_OFFSET UNITYSDK_OFFSET(0xC3BF260)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC3BF100)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET_SLOTTYPE_OFFSET UNITYSDK_OFFSET(0xC3BF1F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET_TAGLIST_OFFSET UNITYSDK_OFFSET(0xC3BF2D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC3BF0A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_SET_EQUIPID_OFFSET UNITYSDK_OFFSET(0xC3BF090)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xC3BF710)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3BF7A0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipData_TypeDefinitionIndex = 73623;

	class PixAirEquipData : public ::System::Object
	{
	public:
		::System::UInt32 _EquipID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EquipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET_EQUIPID_OFFSET))(this);
		}

		::System::Void set_EquipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_SET_EQUIPID_OFFSET))(this, a1);
		}

		::RPG::GameCore::PixAirEquipRow* get__Row()
		{
			return ((::RPG::GameCore::PixAirEquipRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_EquipIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET_EQUIPICON_OFFSET))(this);
		}

		::RPG::GameCore::PixAirSlotType get_SlotType()
		{
			return ((::RPG::GameCore::PixAirSlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET_SLOTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET_ISCORE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* get_TagList()
		{
			return ((::Il2CppArray<::RPG::GameCore::PixAirEquipTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET_TAGLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* get_AffectedTagList()
		{
			return ((::Il2CppArray<::RPG::GameCore::PixAirEquipTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GET_AFFECTEDTAGLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipTagDisplayData*>* GetDisplayTagList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipTagDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_GETDISPLAYTAGLIST_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipData* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDATA_TRYCREATE_OFFSET))(a1);
		}
	};
}
