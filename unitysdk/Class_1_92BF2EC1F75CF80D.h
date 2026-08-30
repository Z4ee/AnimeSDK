#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_TargetCatType.h"
#include "unitysdk/RPG/GameCore/CakeRaceAbilityName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_45BB92167AED63A0_38;
class Class_1_5B567C8A01BAEDFE_123;
class Class_1_92B0B8C84327961B;
class Class_1_963E317C37FB5E9A_31;
class Class_1_9CED2ED5D733E7A4;
class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
class Class_3_07018709FCD48E07;
namespace RPG::GameCore { class CakeRaceAbilityConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_92BF2EC1F75CF80D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C088250)
#define CLASS_1_92BF2EC1F75CF80D_GET_CURABILITY_OFFSET UNITYSDK_OFFSET(0x1C08A460)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1C089B20)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1C089AD0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_0F8D6364B34C7195_OFFSET UNITYSDK_OFFSET(0x1C0892E0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_1378B444FA07BE87_OFFSET UNITYSDK_OFFSET(0x1C0887A0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_20A193958CD38A4D_OFFSET UNITYSDK_OFFSET(0x1C0897F0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_20EECD3CB6E3F4E7_OFFSET UNITYSDK_OFFSET(0x1C088A90)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_3F68DF90C0893975_OFFSET UNITYSDK_OFFSET(0x1C0889A0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_46D79C223C10A615_OFFSET UNITYSDK_OFFSET(0x1C088290)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_4AD40A385BC29831_OFFSET UNITYSDK_OFFSET(0x1C087EE0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_5FFF477DE12718CC_OFFSET UNITYSDK_OFFSET(0x1C089860)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_622F78E871526932_OFFSET UNITYSDK_OFFSET(0x1C0891F0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_64D0E9B25AC2D69E_OFFSET UNITYSDK_OFFSET(0x1C089BC0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_6AEE3908086A586D_OFFSET UNITYSDK_OFFSET(0x1C088B00)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_6EFF7E1A23E85631_OFFSET UNITYSDK_OFFSET(0x1C089370)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_990C937A7EFED2E0_OFFSET UNITYSDK_OFFSET(0x1C087EF0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x1C08A180)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_CB3EE60CB90D2A3B_OFFSET UNITYSDK_OFFSET(0x1C089B70)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_D8B7084BEDD7124A_OFFSET UNITYSDK_OFFSET(0x1C088140)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_DE9D28F7BFC866AF_OFFSET UNITYSDK_OFFSET(0x1C089C10)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_DFE3CCA7A956482A_OFFSET UNITYSDK_OFFSET(0x1C0888B0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_E2E35095C865A084_OFFSET UNITYSDK_OFFSET(0x1C0894D0)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_EACE7F1B501DC701_OFFSET UNITYSDK_OFFSET(0x1C08A080)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_F22E917EA16961A8_OFFSET UNITYSDK_OFFSET(0x1C088550)
#define CLASS_1_92BF2EC1F75CF80D_METHOD_1_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x1C089940)
#define CLASS_1_92BF2EC1F75CF80D_SET_CURABILITY_OFFSET UNITYSDK_OFFSET(0x1C08A470)
#define CLASS_1_92BF2EC1F75CF80D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C087F70)

inline static constexpr unsigned int Class_1_92BF2EC1F75CF80D_TypeDefinitionIndex = 36595;

class Class_1_92BF2EC1F75CF80D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_3_07018709FCD48E07*>* JEBMLLJFKPE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* KOMAFKMBEDH; // 0x18
	::Class_2_F3C45F1FC7349B6E* PDENFEFCAGN; // 0x20
	::System::Collections::Generic::List_1<::Class_1_92B0B8C84327961B*>* LBFDCDHJKMD; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* MMCPPLPCGJH; // 0x30
	::Class_1_92B0B8C84327961B* _CurAbility_k__BackingField; // 0x38
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

	::RPG::Client::LittleGameShare::MsgRetcode Method_1_6AEE3908086A586D(::System::UInt32 a1, ::Class_1_963E317C37FB5E9A_31*& a2, ::Class_1_5B567C8A01BAEDFE_123*& a3)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::Class_1_963E317C37FB5E9A_31*&, ::Class_1_5B567C8A01BAEDFE_123*&))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_6AEE3908086A586D_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_0F8D6364B34C7195(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_0F8D6364B34C7195_OFFSET))(this, a1);
	}

	::Class_2_21AD365C113DC484* Method_1_6EFF7E1A23E85631(::RPG::Client::LittleGameShare::ST_TargetCatType a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Class_2_21AD365C113DC484*(*)(::PVOID, ::RPG::Client::LittleGameShare::ST_TargetCatType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_6EFF7E1A23E85631_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_45BB92167AED63A0_38* Method_1_E2E35095C865A084(::System::UInt32 a1)
	{
		return ((::Class_1_45BB92167AED63A0_38*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D_METHOD_1_E2E35095C865A084_OFFSET))(this, a1);
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
