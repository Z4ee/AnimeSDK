#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1389;
class Class_0_16E4307DCC419505_1390;
class Class_1_45BB92167AED63A0_17;
class Class_1_52DE58AEA447C9CD;
class Class_1_963E317C37FB5E9A_5;
class Class_1_B1410BF5E86A477D;
class Class_1_C9DFE5EE7107C629_5;
class Class_1_CBED1C81B576764D;
class Class_1_D17272E82AE804C2_183;
class Class_1_D17272E82AE804C2_185;
class Class_1_DFB5A9B3A6CD66C9;
class Class_1_F0E9DD085BA6740E_1;
class Class_1_F963C9FA5FC80637;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_06E38C65842C3B24_ADD_ONBESTRECORDCHANGED_OFFSET UNITYSDK_OFFSET(0xD7E70C0)
#define CLASS_1_06E38C65842C3B24_ADD_ONCURRENTSESSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xD7E6DE0)
#define CLASS_1_06E38C65842C3B24_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD7E6D20)
#define CLASS_1_06E38C65842C3B24_GET_HASOBTAINEDBADGE_OFFSET UNITYSDK_OFFSET(0xD7E7180)
#define CLASS_1_06E38C65842C3B24_GET_HASTAKENSPECIALREWARD_OFFSET UNITYSDK_OFFSET(0xD7E71A0)
#define CLASS_1_06E38C65842C3B24_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0xD7E6EA0)
#define CLASS_1_06E38C65842C3B24_METHOD_1_09AF3AC8D03ADBD4_OFFSET UNITYSDK_OFFSET(0xD7E7590)
#define CLASS_1_06E38C65842C3B24_METHOD_1_09CF68F01BA66B28_OFFSET UNITYSDK_OFFSET(0xD7E76C0)
#define CLASS_1_06E38C65842C3B24_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0xD7E6D70)
#define CLASS_1_06E38C65842C3B24_METHOD_1_11D5322717FDFD9D_OFFSET UNITYSDK_OFFSET(0xD7E7290)
#define CLASS_1_06E38C65842C3B24_METHOD_1_129210A1EA004483_OFFSET UNITYSDK_OFFSET(0xD7E8500)
#define CLASS_1_06E38C65842C3B24_METHOD_1_13FE76C7C96BEC2E_OFFSET UNITYSDK_OFFSET(0xD7E7010)
#define CLASS_1_06E38C65842C3B24_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xD7E7800)
#define CLASS_1_06E38C65842C3B24_METHOD_1_5A087A5D69501C87_OFFSET UNITYSDK_OFFSET(0xD7E7F00)
#define CLASS_1_06E38C65842C3B24_METHOD_1_5F1CE4B44626D198_OFFSET UNITYSDK_OFFSET(0xD7E7050)
#define CLASS_1_06E38C65842C3B24_METHOD_1_70437D85C11C5222_1_OFFSET UNITYSDK_OFFSET(0xD7E8260)
#define CLASS_1_06E38C65842C3B24_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0xD7E7E30)
#define CLASS_1_06E38C65842C3B24_METHOD_1_97A64ACA8FAAEEAE_OFFSET UNITYSDK_OFFSET(0xD7E7850)
#define CLASS_1_06E38C65842C3B24_METHOD_1_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0xD7E6F00)
#define CLASS_1_06E38C65842C3B24_METHOD_1_B6BC1AB86061A135_1_OFFSET UNITYSDK_OFFSET(0xD7E6FD0)
#define CLASS_1_06E38C65842C3B24_METHOD_1_B6BC1AB86061A135_OFFSET UNITYSDK_OFFSET(0xD7E6EC0)
#define CLASS_1_06E38C65842C3B24_METHOD_1_C893A4E557146E6C_OFFSET UNITYSDK_OFFSET(0xD7E8340)
#define CLASS_1_06E38C65842C3B24_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD7E86C0)
#define CLASS_1_06E38C65842C3B24_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD7E8680)
#define CLASS_1_06E38C65842C3B24_METHOD_1_F291FAB047B4807E_OFFSET UNITYSDK_OFFSET(0xD7E8040)
#define CLASS_1_06E38C65842C3B24_METHOD_1_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0xD7E8620)
#define CLASS_1_06E38C65842C3B24_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xD7E6D30)
#define CLASS_1_06E38C65842C3B24_REMOVE_ONBESTRECORDCHANGED_OFFSET UNITYSDK_OFFSET(0xD7E7120)
#define CLASS_1_06E38C65842C3B24_REMOVE_ONCURRENTSESSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xD7E6E40)
#define CLASS_1_06E38C65842C3B24_SET_HASOBTAINEDBADGE_OFFSET UNITYSDK_OFFSET(0xD7E7190)
#define CLASS_1_06E38C65842C3B24_SET_HASTAKENSPECIALREWARD_OFFSET UNITYSDK_OFFSET(0xD7E71B0)
#define CLASS_1_06E38C65842C3B24_SET_ISPASSED_OFFSET UNITYSDK_OFFSET(0xD7E6EB0)
#define CLASS_1_06E38C65842C3B24__CTOR_OFFSET UNITYSDK_OFFSET(0xD7E71C0)
#define CLASS_1_06E38C65842C3B24__STARTNEWENGAGEMENTFROMSTAGE_B__50_0_OFFSET UNITYSDK_OFFSET(0xD7E8700)

inline static constexpr unsigned int Class_1_06E38C65842C3B24_TypeDefinitionIndex = 80112;

class Class_1_06E38C65842C3B24 : public ::System::Object
{
public:
	::System::Action* OnCurrentSessionChanged; // 0x10
	::Class_0_16E4307DCC419505_1389* ECKBBFILCDB; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* CAJOJHLABPB; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* JJJBHNOICLH; // 0x28
	::Class_1_52DE58AEA447C9CD* _Config_k__BackingField; // 0x30
	::Class_0_16E4307DCC419505_1390* EMPNNNAFGFO; // 0x38
	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* HDAJGJBJNOM; // 0x40
	::System::Action* OnBestRecordChanged; // 0x48
	::Class_1_DFB5A9B3A6CD66C9* NCIINDGLMFI; // 0x50
	::System::Boolean _HasTakenSpecialReward_k__BackingField; // 0x58
	::System::Boolean _HasObtainedBadge_k__BackingField; // 0x59
	::System::Boolean _IsPassed_k__BackingField; // 0x5A

	::System::Void _ctor(::Class_1_52DE58AEA447C9CD* a1, ::Class_0_16E4307DCC419505_1389* a2, ::Class_0_16E4307DCC419505_1390* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52DE58AEA447C9CD*, ::Class_0_16E4307DCC419505_1389*, ::Class_0_16E4307DCC419505_1390*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_52DE58AEA447C9CD* get_Config()
	{
		return ((::Class_1_52DE58AEA447C9CD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_GET_CONFIG_OFFSET))(this);
	}

	::Class_1_DFB5A9B3A6CD66C9* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_DFB5A9B3A6CD66C9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_DFB5A9B3A6CD66C9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DFB5A9B3A6CD66C9*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
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

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_B6BC1AB86061A135()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_B6BC1AB86061A135_OFFSET))(this);
	}

	::System::Boolean Method_1_A871253BFD471C99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_A871253BFD471C99_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_B6BC1AB86061A135_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_B6BC1AB86061A135_1_OFFSET))(this);
	}

	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* Method_1_13FE76C7C96BEC2E()
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_13FE76C7C96BEC2E_OFFSET))(this);
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

	::System::Void Method_1_11D5322717FDFD9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_11D5322717FDFD9D_OFFSET))(this);
	}

	::System::Void Method_1_09AF3AC8D03ADBD4(::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_185*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_185*>*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_09AF3AC8D03ADBD4_OFFSET))(this, a1);
	}

	::System::Void Method_1_09CF68F01BA66B28(::System::Collections::Generic::IEnumerable_1<::Class_1_F0E9DD085BA6740E_1*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C9DFE5EE7107C629_5*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_F0E9DD085BA6740E_1*>*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C9DFE5EE7107C629_5*>*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_09CF68F01BA66B28_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_97A64ACA8FAAEEAE(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_97A64ACA8FAAEEAE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_70437D85C11C5222(::Class_1_D17272E82AE804C2_183* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_183*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A087A5D69501C87(::Class_1_B1410BF5E86A477D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1410BF5E86A477D*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_5A087A5D69501C87_OFFSET))(this, a1);
	}

	::System::Void Method_1_F291FAB047B4807E(::Class_1_CBED1C81B576764D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CBED1C81B576764D*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_F291FAB047B4807E_OFFSET))(this, a1);
	}

	::System::Void Method_1_70437D85C11C5222_1(::Class_1_45BB92167AED63A0_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_17*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24_METHOD_1_70437D85C11C5222_1_OFFSET))(this, a1);
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

	::System::Void _StartNewEngagementFromStage_b__50_0(::Class_1_963E317C37FB5E9A_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_5*))((::PBYTE)hIl2Cpp + CLASS_1_06E38C65842C3B24__STARTNEWENGAGEMENTFROMSTAGE_B__50_0_OFFSET))(this, a1);
	}
};
