#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8BA26F44C7FAFF0E_RF_PlayerSkillComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/PendingSkillEffectType.h"
#include "unitysdk/Struct_2_489E6A99C498E05E.h"
#include "unitysdk/Struct_2_A5BBDAD85E6CC6A3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_33;
class Class_0_16E4307DCC419505_34;
class Class_0_16E4307DCC419505_69;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_12587C362742E5AB_OFFSET UNITYSDK_OFFSET(0x1AAFE500)
#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_1424D21DF27B367C_OFFSET UNITYSDK_OFFSET(0x1AAFE130)
#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_2F78F9B245348F43_OFFSET UNITYSDK_OFFSET(0x1AAFDD50)
#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_3912C80D994F69F3_1_OFFSET UNITYSDK_OFFSET(0x1AAFDF90)
#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_3912C80D994F69F3_2_OFFSET UNITYSDK_OFFSET(0x1AAFE040)
#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_3912C80D994F69F3_3_OFFSET UNITYSDK_OFFSET(0x1AAFE080)
#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_3912C80D994F69F3_OFFSET UNITYSDK_OFFSET(0x1AAFDF50)
#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1AAFE550)
#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_A78B34F2E0416E2F_OFFSET UNITYSDK_OFFSET(0x1AAFE4A0)
#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_B248AA2483A0E270_OFFSET UNITYSDK_OFFSET(0x1AAFE300)
#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_C4630D35339CC3FE_1_OFFSET UNITYSDK_OFFSET(0x1AAFE0D0)
#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_C4630D35339CC3FE_OFFSET UNITYSDK_OFFSET(0x1AAFDFE0)
#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_C7E2E5456B916A29_OFFSET UNITYSDK_OFFSET(0x1AAFDBC0)
#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AAFDF10)
#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_E43AC747CA4F40E5_OFFSET UNITYSDK_OFFSET(0x1AAFDE40)
#define CLASS_1_8BA26F44C7FAFF0E_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AAFDF00)
#define CLASS_1_8BA26F44C7FAFF0E__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAFE5A0)

inline static constexpr unsigned int Class_1_8BA26F44C7FAFF0E_TypeDefinitionIndex = 36405;

class Class_1_8BA26F44C7FAFF0E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>* KBEGLJGNFIG; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>* HOOGJHJHNCM; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_489E6A99C498E05E>* AKIIMNDIIJB; // 0x20
	::Class_1_8BA26F44C7FAFF0E_RF_PlayerSkillComponent HFKLFHBEDEM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C7E2E5456B916A29(::RPG::Client::LittleGameShare::TeamTowersCore::PendingSkillEffectType a1, ::Class_0_16E4307DCC419505_69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::PendingSkillEffectType, ::Class_0_16E4307DCC419505_69*))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_C7E2E5456B916A29_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2F78F9B245348F43(::RPG::Client::LittleGameShare::TeamTowersCore::PendingSkillEffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::PendingSkillEffectType))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_2F78F9B245348F43_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E43AC747CA4F40E5(::RPG::Client::LittleGameShare::TeamTowersCore::PendingSkillEffectType a1, ::Struct_2_489E6A99C498E05E& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::PendingSkillEffectType, ::Struct_2_489E6A99C498E05E&))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_E43AC747CA4F40E5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>* Method_1_3912C80D994F69F3()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_3912C80D994F69F3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>* Method_1_3912C80D994F69F3_1()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_3912C80D994F69F3_1_OFFSET))(this);
	}

	::System::Void Method_1_C4630D35339CC3FE(::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>*))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_C4630D35339CC3FE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>* Method_1_3912C80D994F69F3_2()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_3912C80D994F69F3_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>* Method_1_3912C80D994F69F3_3()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_3912C80D994F69F3_3_OFFSET))(this);
	}

	::System::Void Method_1_C4630D35339CC3FE_1(::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>*))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_C4630D35339CC3FE_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_1424D21DF27B367C(::Class_0_16E4307DCC419505_33* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_33*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_1424D21DF27B367C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B248AA2483A0E270(::Class_0_16E4307DCC419505_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_34*))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_B248AA2483A0E270_OFFSET))(this, a1);
	}

	::System::Void Method_1_A78B34F2E0416E2F(::Class_0_16E4307DCC419505_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_34*))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_A78B34F2E0416E2F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_12587C362742E5AB(::Class_1_8BA26F44C7FAFF0E_RF_PlayerSkillComponent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8BA26F44C7FAFF0E_RF_PlayerSkillComponent))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_12587C362742E5AB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BA26F44C7FAFF0E_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
