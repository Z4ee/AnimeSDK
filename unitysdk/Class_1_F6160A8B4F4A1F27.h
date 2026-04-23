#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/SlotUiData.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_014C66952F2D60FA;
class Class_1_679CF71AD3A781CD;
class Class_1_A0F414D2CF643E56;
class Class_2_D794DA1F69CB56FF;
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveQuestTreeItemData; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }
namespace RPG::Client::ActivityIdleLive { class SpSlotUiData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F6160A8B4F4A1F27_GET_EQUIPMENTMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0x12B27700)
#define CLASS_1_F6160A8B4F4A1F27_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x12B24C30)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x12B24E10)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_0F9BA4683D398D7A_OFFSET UNITYSDK_OFFSET(0x12B263B0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_17D0F97F4BDE47AD_OFFSET UNITYSDK_OFFSET(0x12B25DF0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_34A46B830830A440_OFFSET UNITYSDK_OFFSET(0x12B25590)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_357A86492DF425BD_OFFSET UNITYSDK_OFFSET(0x12B26710)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_403A1837F105DC0D_OFFSET UNITYSDK_OFFSET(0x12B26220)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_4C003798538D9C03_OFFSET UNITYSDK_OFFSET(0x12B25880)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x12B25B90)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_5F4806034EC2B439_OFFSET UNITYSDK_OFFSET(0x12B268B0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_723BFF523C6621C8_OFFSET UNITYSDK_OFFSET(0x12B24C10)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_7E876EE9E5D4C0FD_OFFSET UNITYSDK_OFFSET(0x12B26360)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_7F4C788D70BCF2F3_OFFSET UNITYSDK_OFFSET(0x12B26400)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_823E6D31E51BAFA4_OFFSET UNITYSDK_OFFSET(0x12B261B0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_8730278F3C146E79_OFFSET UNITYSDK_OFFSET(0x12B265F0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_92FFF23E51EB305F_OFFSET UNITYSDK_OFFSET(0x12B26E50)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_965981A2CB523A1E_OFFSET UNITYSDK_OFFSET(0x12B24C20)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_98F5AAA93BF786AA_OFFSET UNITYSDK_OFFSET(0x12B25B30)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_9A7B1D406C8D78E8_OFFSET UNITYSDK_OFFSET(0x12B25730)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_9AC6CF729C0A70E0_OFFSET UNITYSDK_OFFSET(0x12B25060)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_A5D41B5FA4BF8615_OFFSET UNITYSDK_OFFSET(0x12B25A80)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_A6AAAB7E68EED38C_OFFSET UNITYSDK_OFFSET(0x12B264C0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_A7961B4083CB4E20_OFFSET UNITYSDK_OFFSET(0x12B262F0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_C09DDBC9865CB462_OFFSET UNITYSDK_OFFSET(0x12B26910)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_C47C096674E34F09_OFFSET UNITYSDK_OFFSET(0x12B26CC0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12B256F0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_CEB65F3424915749_OFFSET UNITYSDK_OFFSET(0x12B253C0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_DAA930721271751C_OFFSET UNITYSDK_OFFSET(0x12B27440)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_F95D99A423AF7DE4_OFFSET UNITYSDK_OFFSET(0x12B25820)
#define CLASS_1_F6160A8B4F4A1F27_SET_EQUIPMENTMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0x12B27710)
#define CLASS_1_F6160A8B4F4A1F27_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x12B24C40)
#define CLASS_1_F6160A8B4F4A1F27__CTOR_OFFSET UNITYSDK_OFFSET(0x12B24C50)

inline static constexpr unsigned int Class_1_F6160A8B4F4A1F27_TypeDefinitionIndex = 69304;

class Class_1_F6160A8B4F4A1F27 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>* Field_1_3; // 0x10
	::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::SpecialEquip*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_679CF71AD3A781CD*>* Field_1_0; // 0x28
	::Class_2_D794DA1F69CB56FF* _EquipmentModifierSource_k__BackingField; // 0x30
	::System::UInt32 _Version_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::SpecialEquip*>* Method_1_723BFF523C6621C8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::SpecialEquip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_723BFF523C6621C8_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* Method_1_965981A2CB523A1E()
	{
		return ((::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_965981A2CB523A1E_OFFSET))(this);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_GET_VERSION_OFFSET))(this);
	}

	::System::Void set_Version(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_SET_VERSION_OFFSET))(this, value);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_9AC6CF729C0A70E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_9AC6CF729C0A70E0_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Method_1_CEB65F3424915749()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_CEB65F3424915749_OFFSET))(this);
	}

	::System::Void Method_1_34A46B830830A440(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_34A46B830830A440_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_9A7B1D406C8D78E8(::Class_1_A0F414D2CF643E56* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0F414D2CF643E56*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_9A7B1D406C8D78E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5D41B5FA4BF8615(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_A5D41B5FA4BF8615_OFFSET))(this, a1);
	}

	::System::Void Method_1_F95D99A423AF7DE4(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_F95D99A423AF7DE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C003798538D9C03(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_4C003798538D9C03_OFFSET))(this, a1);
	}

	::System::Void Method_1_98F5AAA93BF786AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_98F5AAA93BF786AA_OFFSET))(this);
	}

	::System::Void Method_1_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>* Method_1_17D0F97F4BDE47AD()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_17D0F97F4BDE47AD_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::SpecialEquip* Method_1_823E6D31E51BAFA4(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_823E6D31E51BAFA4_OFFSET))(this, a1);
	}

	::System::Void Method_1_403A1837F105DC0D(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_403A1837F105DC0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_A7961B4083CB4E20(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_A7961B4083CB4E20_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E876EE9E5D4C0FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_7E876EE9E5D4C0FD_OFFSET))(this);
	}

	::System::Boolean Method_1_0F9BA4683D398D7A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_0F9BA4683D398D7A_OFFSET))(this);
	}

	::System::Boolean Method_1_7F4C788D70BCF2F3(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_7F4C788D70BCF2F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_A6AAAB7E68EED38C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_A6AAAB7E68EED38C_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* Method_1_8730278F3C146E79(::System::UInt32 a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_8730278F3C146E79_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityIdleLive::SlotUiData Method_1_357A86492DF425BD(::System::UInt32 a1)
	{
		return ((::RPG::Client::ActivityIdleLive::SlotUiData(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_357A86492DF425BD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpSlotUiData*>* Method_1_5F4806034EC2B439(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpSlotUiData*>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_5F4806034EC2B439_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_014C66952F2D60FA*>* Method_1_C09DDBC9865CB462(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_014C66952F2D60FA*>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_C09DDBC9865CB462_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Method_1_C47C096674E34F09(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_C47C096674E34F09_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Method_1_92FFF23E51EB305F(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_92FFF23E51EB305F_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Method_1_DAA930721271751C(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_DAA930721271751C_OFFSET))(this, a1);
	}

	::Class_2_D794DA1F69CB56FF* get_EquipmentModifierSource()
	{
		return ((::Class_2_D794DA1F69CB56FF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_GET_EQUIPMENTMODIFIERSOURCE_OFFSET))(this);
	}

	::System::Void set_EquipmentModifierSource(::Class_2_D794DA1F69CB56FF* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D794DA1F69CB56FF*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_SET_EQUIPMENTMODIFIERSOURCE_OFFSET))(this, value);
	}
};
