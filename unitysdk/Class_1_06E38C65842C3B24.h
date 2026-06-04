#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1214;
class Class_0_16E4307DCC419505_1215;
class Class_1_3AD2528CD53B1639_3;
class Class_1_45BB92167AED63A0_15;
class Class_1_52DE58AEA447C9CD;
class Class_1_608D5748B6FB2DB7;
class Class_1_70D2E0F3216AAE0C_4;
class Class_1_7F6A638FBAAEC90B;
class Class_1_A16A135FC5A0DDB9;
class Class_1_B1410BF5E86A477D;
class Class_1_D17272E82AE804C2_159;
class Class_1_D17272E82AE804C2_161;
class Class_1_F963C9FA5FC80637;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_06E38C65842C3B24_ADD_ONBESTRECORDCHANGED_OFFSET UNITYSDK_OFFSET(0xBF71680)
#define CLASS_1_06E38C65842C3B24_ADD_ONCURRENTSESSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xBF71430)
#define CLASS_1_06E38C65842C3B24_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBF713A0)
#define CLASS_1_06E38C65842C3B24_GET_HASOBTAINEDBADGE_OFFSET UNITYSDK_OFFSET(0xBF71740)
#define CLASS_1_06E38C65842C3B24_GET_HASTAKENSPECIALREWARD_OFFSET UNITYSDK_OFFSET(0xBF71760)
#define CLASS_1_06E38C65842C3B24_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0xBF714F0)
#define CLASS_1_06E38C65842C3B24_METHOD_1_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0xBF71840)
#define CLASS_1_06E38C65842C3B24_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0xBF713C0)
#define CLASS_1_06E38C65842C3B24_METHOD_1_114781D79D91EA39_1_OFFSET UNITYSDK_OFFSET(0xBF715F0)
#define CLASS_1_06E38C65842C3B24_METHOD_1_114781D79D91EA39_OFFSET UNITYSDK_OFFSET(0xBF71510)
#define CLASS_1_06E38C65842C3B24_METHOD_1_129210A1EA004483_OFFSET UNITYSDK_OFFSET(0xC1CA0E0)
#define CLASS_1_06E38C65842C3B24_METHOD_1_13F68F21231161ED_OFFSET UNITYSDK_OFFSET(0xBF71B60)
#define CLASS_1_06E38C65842C3B24_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xBF713B0)
#define CLASS_1_06E38C65842C3B24_METHOD_1_2DFFCEC5BAFFBDEA_OFFSET UNITYSDK_OFFSET(0xBF71600)
#define CLASS_1_06E38C65842C3B24_METHOD_1_364C696688C525C0_OFFSET UNITYSDK_OFFSET(0xBF71CB0)
#define CLASS_1_06E38C65842C3B24_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xBF71C60)
#define CLASS_1_06E38C65842C3B24_METHOD_1_5F1CE4B44626D198_OFFSET UNITYSDK_OFFSET(0xBF71610)
#define CLASS_1_06E38C65842C3B24_METHOD_1_617F2795F0D73EAD_OFFSET UNITYSDK_OFFSET(0xC1C9CA0)
#define CLASS_1_06E38C65842C3B24_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0xBF720F0)
#define CLASS_1_06E38C65842C3B24_METHOD_1_822031E522673D19_OFFSET UNITYSDK_OFFSET(0xBF721C0)
#define CLASS_1_06E38C65842C3B24_METHOD_1_87984A3AD7457DDD_OFFSET UNITYSDK_OFFSET(0xBF71A70)
#define CLASS_1_06E38C65842C3B24_METHOD_1_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0xBF71520)
#define CLASS_1_06E38C65842C3B24_METHOD_1_C893A4E557146E6C_OFFSET UNITYSDK_OFFSET(0xC1C9F20)
#define CLASS_1_06E38C65842C3B24_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xC1CA2A0)
#define CLASS_1_06E38C65842C3B24_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC1CA260)
#define CLASS_1_06E38C65842C3B24_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xC1C9E70)
#define CLASS_1_06E38C65842C3B24_METHOD_1_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0xC1CA200)
#define CLASS_1_06E38C65842C3B24_REMOVE_ONBESTRECORDCHANGED_OFFSET UNITYSDK_OFFSET(0xBF716E0)
#define CLASS_1_06E38C65842C3B24_REMOVE_ONCURRENTSESSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xBF71490)
#define CLASS_1_06E38C65842C3B24_SET_HASOBTAINEDBADGE_OFFSET UNITYSDK_OFFSET(0xBF71750)
#define CLASS_1_06E38C65842C3B24_SET_HASTAKENSPECIALREWARD_OFFSET UNITYSDK_OFFSET(0xBF71770)
#define CLASS_1_06E38C65842C3B24_SET_ISPASSED_OFFSET UNITYSDK_OFFSET(0xBF71500)
#define CLASS_1_06E38C65842C3B24__CTOR_OFFSET UNITYSDK_OFFSET(0xBF71780)
#define CLASS_1_06E38C65842C3B24__STARTNEWENGAGEMENTFROMSTAGE_B__50_0_OFFSET UNITYSDK_OFFSET(0xC1CA2E0)

inline static constexpr unsigned int Class_1_06E38C65842C3B24_TypeDefinitionIndex = 74095;

class Class_1_06E38C65842C3B24 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Action* OnBestRecordChanged; // 0x18
	::Class_1_52DE58AEA447C9CD* _Config_k__BackingField; // 0x20
	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* Field_1_3; // 0x28
	::Class_0_16E4307DCC419505_1214* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x38
	::Class_0_16E4307DCC419505_1215* Field_1_6; // 0x40
	::Class_1_608D5748B6FB2DB7* Field_1_7; // 0x48
	::System::Action* OnCurrentSessionChanged; // 0x50
	::System::Boolean _HasObtainedBadge_k__BackingField; // 0x58
	::System::Boolean _HasTakenSpecialReward_k__BackingField; // 0x59
	::System::Boolean _IsPassed_k__BackingField; // 0x5A

	::System::Void _ctor(::Class_1_52DE58AEA447C9CD* a1, ::Class_0_16E4307DCC419505_1214* a2, ::Class_0_16E4307DCC419505_1215* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52DE58AEA447C9CD*, ::Class_0_16E4307DCC419505_1214*, ::Class_0_16E4307DCC419505_1215*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_52DE58AEA447C9CD* get_Config()
	{
		return ((::Class_1_52DE58AEA447C9CD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_GET_CONFIG_OFFSET))(this);
	}

	::Class_1_608D5748B6FB2DB7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_608D5748B6FB2DB7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_608D5748B6FB2DB7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_608D5748B6FB2DB7*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void add_OnCurrentSessionChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_ADD_ONCURRENTSESSIONCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnCurrentSessionChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_REMOVE_ONCURRENTSESSIONCHANGED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPassed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_GET_ISPASSED_OFFSET))(this);
	}

	::System::Void set_IsPassed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_SET_ISPASSED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_114781D79D91EA39()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_114781D79D91EA39_OFFSET))(this);
	}

	::System::Boolean Method_1_A871253BFD471C99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_A871253BFD471C99_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_114781D79D91EA39_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_114781D79D91EA39_1_OFFSET))(this);
	}

	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* Method_1_2DFFCEC5BAFFBDEA()
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_2DFFCEC5BAFFBDEA_OFFSET))(this);
	}

	::System::Void Method_1_5F1CE4B44626D198(::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_5F1CE4B44626D198_OFFSET))(this, a1);
	}

	::System::Void add_OnBestRecordChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_ADD_ONBESTRECORDCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnBestRecordChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_REMOVE_ONBESTRECORDCHANGED_OFFSET))(this, a1);
	}

	::System::Boolean get_HasObtainedBadge()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_GET_HASOBTAINEDBADGE_OFFSET))(this);
	}

	::System::Void set_HasObtainedBadge(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_SET_HASOBTAINEDBADGE_OFFSET))(this, a1);
	}

	::System::Boolean get_HasTakenSpecialReward()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_GET_HASTAKENSPECIALREWARD_OFFSET))(this);
	}

	::System::Void set_HasTakenSpecialReward(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_SET_HASTAKENSPECIALREWARD_OFFSET))(this, a1);
	}

	::System::Void Method_1_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_03BFDB1C3240A55A_OFFSET))(this);
	}

	::System::Void Method_1_87984A3AD7457DDD(::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_161*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_161*>*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_87984A3AD7457DDD_OFFSET))(this, a1);
	}

	::System::Void Method_1_13F68F21231161ED(::System::Collections::Generic::IEnumerable_1<::Class_1_7F6A638FBAAEC90B*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_A16A135FC5A0DDB9*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_7F6A638FBAAEC90B*>*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_A16A135FC5A0DDB9*>*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_13F68F21231161ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_364C696688C525C0(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_364C696688C525C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_70437D85C11C5222(::Class_1_D17272E82AE804C2_159* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_159*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_1_822031E522673D19(::Class_1_B1410BF5E86A477D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1410BF5E86A477D*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_822031E522673D19_OFFSET))(this, a1);
	}

	::System::Void Method_1_617F2795F0D73EAD(::Class_1_3AD2528CD53B1639_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_3*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_617F2795F0D73EAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_45BB92167AED63A0_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_15*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_C893A4E557146E6C(::Class_1_F963C9FA5FC80637* a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_F963C9FA5FC80637*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_C893A4E557146E6C_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_129210A1EA004483(::System::Int32 a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_129210A1EA004483_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void _StartNewEngagementFromStage_b__50_0(::Class_1_70D2E0F3216AAE0C_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70D2E0F3216AAE0C_4*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24__STARTNEWENGAGEMENTFROMSTAGE_B__50_0_OFFSET))(this, a1);
	}
};
