#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_TargetCatType.h"
#include "unitysdk/RPG/GameCore/CakeRaceAbilityName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_45BB92167AED63A0_39;
class Class_1_5B567C8A01BAEDFE_131;
class Class_1_92B0B8C84327961B;
class Class_1_963E317C37FB5E9A_33;
class Class_1_9CED2ED5D733E7A4;
class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
class Class_3_07018709FCD48E07;
namespace RPG::GameCore { class CakeRaceAbilityConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_92BF2EC1F75CF80D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C5AABC0)
#define CLASS_1_92BF2EC1F75CF80D_GET_CURABILITY_OFFSET UNITYSDK_OFFSET(0x1C5ACDF0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1C5AC4A0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1C5AC450)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_0F8D6364B34C7195_OFFSET UNITYSDK_OFFSET(0x1C5ABC60)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_1378B444FA07BE87_OFFSET UNITYSDK_OFFSET(0x1C5AB110)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_20A193958CD38A4D_OFFSET UNITYSDK_OFFSET(0x1C5AC170)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_20EECD3CB6E3F4E7_OFFSET UNITYSDK_OFFSET(0x1C5AB400)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_3F68DF90C0893975_OFFSET UNITYSDK_OFFSET(0x1C5AB310)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_46D79C223C10A615_OFFSET UNITYSDK_OFFSET(0x1C5AAC00)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_4AD40A385BC29831_OFFSET UNITYSDK_OFFSET(0x1C5AA850)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_5FFF477DE12718CC_OFFSET UNITYSDK_OFFSET(0x1C5AC1E0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_622F78E871526932_OFFSET UNITYSDK_OFFSET(0x1C5ABB60)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_64D0E9B25AC2D69E_OFFSET UNITYSDK_OFFSET(0x1C5AC540)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_6AEE3908086A586D_OFFSET UNITYSDK_OFFSET(0x1C5AB470)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_6EFF7E1A23E85631_OFFSET UNITYSDK_OFFSET(0x1C5ABCF0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_990C937A7EFED2E0_OFFSET UNITYSDK_OFFSET(0x1C5AA860)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x1C5ACB10)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_CB3EE60CB90D2A3B_OFFSET UNITYSDK_OFFSET(0x1C5AC4F0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_D8B7084BEDD7124A_OFFSET UNITYSDK_OFFSET(0x1C5AAAB0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_DE9D28F7BFC866AF_OFFSET UNITYSDK_OFFSET(0x1C5AC590)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_DFE3CCA7A956482A_OFFSET UNITYSDK_OFFSET(0x1C5AB220)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_E2E35095C865A084_OFFSET UNITYSDK_OFFSET(0x1C5ABE50)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_EACE7F1B501DC701_OFFSET UNITYSDK_OFFSET(0x1C5ACA10)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_F22E917EA16961A8_OFFSET UNITYSDK_OFFSET(0x1C5AAEC0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x1C5AC2C0)
#define CLASS_1_92BF2EC1F75CF80D_SET_CURABILITY_OFFSET UNITYSDK_OFFSET(0x1C5ACE00)
#define CLASS_1_92BF2EC1F75CF80D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AA8E0)

inline static constexpr unsigned int Class_1_92BF2EC1F75CF80D_TypeDefinitionIndex = 37282;

class Class_1_92BF2EC1F75CF80D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* MMCPPLPCGJH; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* KOMAFKMBEDH; // 0x18
	::Class_2_F3C45F1FC7349B6E* PDENFEFCAGN; // 0x20
	::System::Collections::Generic::List_1<::Class_1_92B0B8C84327961B*>* LBFDCDHJKMD; // 0x28
	::Class_1_92B0B8C84327961B* _CurAbility_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::Class_3_07018709FCD48E07*>* JEBMLLJFKPE; // 0x38
	::System::Boolean KBKJMKKAOBA; // 0x40

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_92B0B8C84327961B*>* Method_1_4AD40A385BC29831()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_92B0B8C84327961B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_4AD40A385BC29831_OFFSET))(this);
	}

	static ::Class_1_92BF2EC1F75CF80D* Method_1_990C937A7EFED2E0(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::Class_1_92BF2EC1F75CF80D*(*)(::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_990C937A7EFED2E0_OFFSET))(a1);
	}

	::Class_1_92B0B8C84327961B* Method_1_D8B7084BEDD7124A(::System::Int32 a1, ::RPG::GameCore::CakeRaceAbilityName a2)
	{
		return ((::Class_1_92B0B8C84327961B*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceAbilityName))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_D8B7084BEDD7124A_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_46D79C223C10A615(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_46D79C223C10A615_OFFSET))(this, a1);
	}

	::System::Void Method_1_F22E917EA16961A8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_F22E917EA16961A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_1378B444FA07BE87(::Class_2_21AD365C113DC484* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::Class_1_9CED2ED5D733E7A4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::Class_1_9CED2ED5D733E7A4*))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_1378B444FA07BE87_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_92B0B8C84327961B* Method_1_DFE3CCA7A956482A(::Class_2_21AD365C113DC484* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::Class_1_9CED2ED5D733E7A4* a3)
	{
		return ((::Class_1_92B0B8C84327961B*(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::Class_1_9CED2ED5D733E7A4*))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_DFE3CCA7A956482A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3F68DF90C0893975(::Class_2_21AD365C113DC484* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::Class_1_9CED2ED5D733E7A4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::Class_1_9CED2ED5D733E7A4*))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_3F68DF90C0893975_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_20EECD3CB6E3F4E7(::RPG::GameCore::CakeRaceAbilityConfig* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_20EECD3CB6E3F4E7_OFFSET))(a1);
	}

	::RPG::Client::LittleGameShare::MsgRetcode Method_1_6AEE3908086A586D(::System::UInt32 a1, ::Class_1_963E317C37FB5E9A_33*& a2, ::Class_1_5B567C8A01BAEDFE_131*& a3)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::Class_1_963E317C37FB5E9A_33*&, ::Class_1_5B567C8A01BAEDFE_131*&))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_6AEE3908086A586D_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_0F8D6364B34C7195(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_0F8D6364B34C7195_OFFSET))(this, a1);
	}

	::Class_2_21AD365C113DC484* Method_1_6EFF7E1A23E85631(::RPG::Client::LittleGameShare::ST_TargetCatType a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Class_2_21AD365C113DC484*(*)(::PVOID, ::RPG::Client::LittleGameShare::ST_TargetCatType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_6EFF7E1A23E85631_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_45BB92167AED63A0_39* Method_1_E2E35095C865A084(::System::UInt32 a1)
	{
		return ((::Class_1_45BB92167AED63A0_39*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_E2E35095C865A084_OFFSET))(this, a1);
	}

	::System::Void Method_1_20A193958CD38A4D(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_20A193958CD38A4D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_622F78E871526932(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_622F78E871526932_OFFSET))(this, a1);
	}

	::System::Void Method_1_5FFF477DE12718CC(::Class_3_07018709FCD48E07* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07018709FCD48E07*))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_5FFF477DE12718CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_FD647A48096EB173_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB3EE60CB90D2A3B(::Il2CppArray<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_CB3EE60CB90D2A3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_64D0E9B25AC2D69E(::Il2CppArray<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_64D0E9B25AC2D69E_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE9D28F7BFC866AF(::Il2CppArray<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_DE9D28F7BFC866AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_EACE7F1B501DC701(::Il2CppArray<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_EACE7F1B501DC701_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_AB88190D695EBEA9_OFFSET))(this);
	}

	::Class_1_92B0B8C84327961B* get_CurAbility()
	{
		return ((::Class_1_92B0B8C84327961B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_GET_CURABILITY_OFFSET))(this);
	}

	::System::Void set_CurAbility(::Class_1_92B0B8C84327961B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_92B0B8C84327961B*))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_SET_CURABILITY_OFFSET))(this, a1);
	}
};
