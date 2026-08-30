#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/SlotUiData.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_014C66952F2D60FA;
class Class_1_679CF71AD3A781CD;
class Class_1_A0F414D2CF643E56_4;
class Class_2_D794DA1F69CB56FF;
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveQuestTreeItemData; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }
namespace RPG::Client::ActivityIdleLive { class SpSlotUiData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F6160A8B4F4A1F27_GET_EQUIPMENTMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0xBB9B010)
#define CLASS_1_F6160A8B4F4A1F27_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xBB982D0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_0D0BAC0EC206E602_OFFSET UNITYSDK_OFFSET(0xBB98290)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_2D9DA0AA9007102D_OFFSET UNITYSDK_OFFSET(0xBB99950)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_34A46B830830A440_OFFSET UNITYSDK_OFFSET(0xBB98DC0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_5B953F213CC29182_OFFSET UNITYSDK_OFFSET(0xBB99C10)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_5E48FEF4451ABC8E_OFFSET UNITYSDK_OFFSET(0xBB9A010)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_608FCF142EBCCE43_OFFSET UNITYSDK_OFFSET(0xBB98C00)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_62E835CFAD475AF2_OFFSET UNITYSDK_OFFSET(0xBB999F0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_6F737F2791C1E1D8_OFFSET UNITYSDK_OFFSET(0xBB99620)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_7CD370EBF2903CA5_OFFSET UNITYSDK_OFFSET(0xBB9AD40)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_8730278F3C146E79_OFFSET UNITYSDK_OFFSET(0xBB99DC0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_8FBB86B755BAC359_OFFSET UNITYSDK_OFFSET(0xBB99BC0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_9A7B1D406C8D78E8_OFFSET UNITYSDK_OFFSET(0xBB98F40)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_9A82FD9583DEA794_OFFSET UNITYSDK_OFFSET(0xBB99B70)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_A0727F544AFBB0C5_OFFSET UNITYSDK_OFFSET(0xBB99370)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_A5D41B5FA4BF8615_OFFSET UNITYSDK_OFFSET(0xBB992C0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_A6AAAB7E68EED38C_OFFSET UNITYSDK_OFFSET(0xBB99CE0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_A7961B4083CB4E20_OFFSET UNITYSDK_OFFSET(0xBB99B00)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xBB987E0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_AAEAB5B03FCA31DC_OFFSET UNITYSDK_OFFSET(0xBB9A750)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0xBB993D0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_C47C096674E34F09_OFFSET UNITYSDK_OFFSET(0xBB9A5C0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBB98F00)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_CAD276473FCD623E_OFFSET UNITYSDK_OFFSET(0xBB99EF0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xBB984B0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_E69B54D037A35897_OFFSET UNITYSDK_OFFSET(0xBB99090)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_E91A414D8077BE04_OFFSET UNITYSDK_OFFSET(0xBB99FB0)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_F95D99A423AF7DE4_OFFSET UNITYSDK_OFFSET(0xBB99030)
#define CLASS_1_F6160A8B4F4A1F27_METHOD_1_FD898CAFBEB1084C_OFFSET UNITYSDK_OFFSET(0xBB98250)
#define CLASS_1_F6160A8B4F4A1F27_SET_EQUIPMENTMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0xBB9B020)
#define CLASS_1_F6160A8B4F4A1F27_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xBB982E0)
#define CLASS_1_F6160A8B4F4A1F27__CTOR_OFFSET UNITYSDK_OFFSET(0xBB982F0)

inline static constexpr unsigned int Class_1_F6160A8B4F4A1F27_TypeDefinitionIndex = 74946;

class Class_1_F6160A8B4F4A1F27 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>* EMCJHKHAJNK; // 0x10
	::System::Collections::Generic::List_1<::Class_1_679CF71AD3A781CD*>* MFGEADHPLHO; // 0x18
	::Class_2_D794DA1F69CB56FF* _EquipmentModifierSource_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::SpecialEquip*>* OGGJIFMKLIC; // 0x28
	::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* KIHNNLDEOOM; // 0x30
	::System::UInt32 _Version_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::SpecialEquip*>* Method_1_FD898CAFBEB1084C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::SpecialEquip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_FD898CAFBEB1084C_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* Method_1_0D0BAC0EC206E602()
	{
		return ((::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_0D0BAC0EC206E602_OFFSET))(this);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_GET_VERSION_OFFSET))(this);
	}

	::System::Void set_Version(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_SET_VERSION_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_1_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Method_1_608FCF142EBCCE43()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_608FCF142EBCCE43_OFFSET))(this);
	}

	::System::Void Method_1_34A46B830830A440(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_34A46B830830A440_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_9A7B1D406C8D78E8(::Class_1_A0F414D2CF643E56_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0F414D2CF643E56_4*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_9A7B1D406C8D78E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5D41B5FA4BF8615(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_A5D41B5FA4BF8615_OFFSET))(this, a1);
	}

	::System::Void Method_1_F95D99A423AF7DE4(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_F95D99A423AF7DE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_E69B54D037A35897(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_E69B54D037A35897_OFFSET))(this, a1);
	}

	::System::Void Method_1_A0727F544AFBB0C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_A0727F544AFBB0C5_OFFSET))(this);
	}

	::System::Void Method_1_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>* Method_1_6F737F2791C1E1D8()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_6F737F2791C1E1D8_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::SpecialEquip* Method_1_2D9DA0AA9007102D(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_2D9DA0AA9007102D_OFFSET))(this, a1);
	}

	::System::Void Method_1_62E835CFAD475AF2(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_62E835CFAD475AF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_A7961B4083CB4E20(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_A7961B4083CB4E20_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A82FD9583DEA794()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_9A82FD9583DEA794_OFFSET))(this);
	}

	::System::Boolean Method_1_8FBB86B755BAC359()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_8FBB86B755BAC359_OFFSET))(this);
	}

	::System::Boolean Method_1_5B953F213CC29182(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_5B953F213CC29182_OFFSET))(this, a1);
	}

	::System::Void Method_1_A6AAAB7E68EED38C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_A6AAAB7E68EED38C_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* Method_1_8730278F3C146E79(::System::UInt32 a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_8730278F3C146E79_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityIdleLive::SlotUiData Method_1_CAD276473FCD623E(::System::UInt32 a1)
	{
		return ((::RPG::Client::ActivityIdleLive::SlotUiData(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_CAD276473FCD623E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpSlotUiData*>* Method_1_E91A414D8077BE04(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpSlotUiData*>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_E91A414D8077BE04_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_014C66952F2D60FA*>* Method_1_5E48FEF4451ABC8E(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_014C66952F2D60FA*>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_5E48FEF4451ABC8E_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Method_1_C47C096674E34F09(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_C47C096674E34F09_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Method_1_AAEAB5B03FCA31DC(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_AAEAB5B03FCA31DC_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Method_1_7CD370EBF2903CA5(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_METHOD_1_7CD370EBF2903CA5_OFFSET))(this, a1);
	}

	::Class_2_D794DA1F69CB56FF* get_EquipmentModifierSource()
	{
		return ((::Class_2_D794DA1F69CB56FF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_GET_EQUIPMENTMODIFIERSOURCE_OFFSET))(this);
	}

	::System::Void set_EquipmentModifierSource(::Class_2_D794DA1F69CB56FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D794DA1F69CB56FF*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27_SET_EQUIPMENTMODIFIERSOURCE_OFFSET))(this, a1);
	}
};
