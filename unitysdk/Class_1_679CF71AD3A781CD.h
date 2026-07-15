#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::GameCore { class IdleLiveEquipSlotRow; }
namespace System { class String; }

#define CLASS_1_679CF71AD3A781CD_GET_EQUIP_OFFSET UNITYSDK_OFFSET(0x174D0E00)
#define CLASS_1_679CF71AD3A781CD_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0x174D0E20)
#define CLASS_1_679CF71AD3A781CD_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x174D0DF0)
#define CLASS_1_679CF71AD3A781CD_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x174D0EB0)
#define CLASS_1_679CF71AD3A781CD_METHOD_1_8119DCA79885035D_OFFSET UNITYSDK_OFFSET(0x174D0E60)
#define CLASS_1_679CF71AD3A781CD_SET_EQUIP_OFFSET UNITYSDK_OFFSET(0x174D0E10)
#define CLASS_1_679CF71AD3A781CD__CTOR_OFFSET UNITYSDK_OFFSET(0x174D0E30)

inline static constexpr unsigned int Class_1_679CF71AD3A781CD_TypeDefinitionIndex = 71616;

class Class_1_679CF71AD3A781CD : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* _Equip_k__BackingField; // 0x18
	::System::UInt32 _SlotId_k__BackingField; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::RPG::Client::TextID _Title_k__BackingField; // 0x28

	::System::Void _ctor(::RPG::GameCore::IdleLiveEquipSlotRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveEquipSlotRow*))((::PBYTE)hIl2Cpp + CLASS_1_679CF71AD3A781CD__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Title()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_679CF71AD3A781CD_GET_TITLE_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* get_Equip()
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_679CF71AD3A781CD_GET_EQUIP_OFFSET))(this);
	}

	::System::Void set_Equip(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + CLASS_1_679CF71AD3A781CD_SET_EQUIP_OFFSET))(this, a1);
	}

	::System::UInt32 get_SlotId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_679CF71AD3A781CD_GET_SLOTID_OFFSET))(this);
	}

	::System::Void Method_1_8119DCA79885035D(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + CLASS_1_679CF71AD3A781CD_METHOD_1_8119DCA79885035D_OFFSET))(this, a1);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_679CF71AD3A781CD_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
