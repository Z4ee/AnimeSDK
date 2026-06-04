#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/EAIState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_0272D5A0C4F089B0;
class Class_1_0E117AC86D8E5BCA;
class Class_1_70B630442ADDBF4A;
class Class_1_71E81E0EEBC490C0;
class Class_1_72E419617CCAA151;
class Class_1_82297B6AFFE49354;
class Class_1_855E018881074DD2;
class Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5;
class Class_1_D2DA75CD29265F7F;
class Class_2_3616FDE8A71D0590_1;
class Class_2_AEE59ED8DADEC1A1;
class Class_4_38B51614211CBC7D;
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18A1F230)
#define CLASS_1_C16931E567A100F1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18A1EC10)
#define CLASS_1_C16931E567A100F1_METHOD_1_0B7C3CE1C2B0FEA2_OFFSET UNITYSDK_OFFSET(0x18A29BA0)
#define CLASS_1_C16931E567A100F1_METHOD_1_22D0ADB352880F38_OFFSET UNITYSDK_OFFSET(0x18A28EF0)
#define CLASS_1_C16931E567A100F1_METHOD_1_2368DFE07F28F7DA_OFFSET UNITYSDK_OFFSET(0x18A28DD0)
#define CLASS_1_C16931E567A100F1_METHOD_1_241E05522154DA3F_OFFSET UNITYSDK_OFFSET(0x18A26980)
#define CLASS_1_C16931E567A100F1_METHOD_1_28477BC0940AC0A8_OFFSET UNITYSDK_OFFSET(0x18A26B30)
#define CLASS_1_C16931E567A100F1_METHOD_1_2858CC98E795D643_OFFSET UNITYSDK_OFFSET(0x18A281B0)
#define CLASS_1_C16931E567A100F1_METHOD_1_2B7C743F7DDCD5F5_OFFSET UNITYSDK_OFFSET(0x18A2C620)
#define CLASS_1_C16931E567A100F1_METHOD_1_33D2733A1285B960_OFFSET UNITYSDK_OFFSET(0x18A20860)
#define CLASS_1_C16931E567A100F1_METHOD_1_3B525AF5C816533C_OFFSET UNITYSDK_OFFSET(0x18A245A0)
#define CLASS_1_C16931E567A100F1_METHOD_1_3DE23685AE148311_OFFSET UNITYSDK_OFFSET(0x18A2C560)
#define CLASS_1_C16931E567A100F1_METHOD_1_4DE47933053A6E15_OFFSET UNITYSDK_OFFSET(0x18A21DD0)
#define CLASS_1_C16931E567A100F1_METHOD_1_550C32FDB31FBD0D_OFFSET UNITYSDK_OFFSET(0x18A2B4A0)
#define CLASS_1_C16931E567A100F1_METHOD_1_5A03FE5CA9C1ACF5_OFFSET UNITYSDK_OFFSET(0x18A294F0)
#define CLASS_1_C16931E567A100F1_METHOD_1_5A1A7EA3438944E3_OFFSET UNITYSDK_OFFSET(0x18A276A0)
#define CLASS_1_C16931E567A100F1_METHOD_1_63F586678CC0C964_OFFSET UNITYSDK_OFFSET(0x18A273F0)
#define CLASS_1_C16931E567A100F1_METHOD_1_72BFCFBB7E38A983_OFFSET UNITYSDK_OFFSET(0x18A27C80)
#define CLASS_1_C16931E567A100F1_METHOD_1_734F347EA184E6F8_1_OFFSET UNITYSDK_OFFSET(0x18A28D10)
#define CLASS_1_C16931E567A100F1_METHOD_1_734F347EA184E6F8_2_OFFSET UNITYSDK_OFFSET(0x18A28D70)
#define CLASS_1_C16931E567A100F1_METHOD_1_734F347EA184E6F8_OFFSET UNITYSDK_OFFSET(0x18A28CB0)
#define CLASS_1_C16931E567A100F1_METHOD_1_799AE31E74D7CDAF_OFFSET UNITYSDK_OFFSET(0x18A2B3C0)
#define CLASS_1_C16931E567A100F1_METHOD_1_8175863F552EA4F8_OFFSET UNITYSDK_OFFSET(0x18A28BE0)
#define CLASS_1_C16931E567A100F1_METHOD_1_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0x18A28E70)
#define CLASS_1_C16931E567A100F1_METHOD_1_883458DF9D296814_OFFSET UNITYSDK_OFFSET(0x18A1EC50)
#define CLASS_1_C16931E567A100F1_METHOD_1_8F15C64E2B326F8B_OFFSET UNITYSDK_OFFSET(0x18A1F590)
#define CLASS_1_C16931E567A100F1_METHOD_1_A0519699E41782DF_OFFSET UNITYSDK_OFFSET(0x18A23CE0)
#define CLASS_1_C16931E567A100F1_METHOD_1_A309CA5D63263D65_OFFSET UNITYSDK_OFFSET(0x18A2B5B0)
#define CLASS_1_C16931E567A100F1_METHOD_1_B582DF9E419857F2_OFFSET UNITYSDK_OFFSET(0x18A267C0)
#define CLASS_1_C16931E567A100F1_METHOD_1_B900C7E8513B8C44_OFFSET UNITYSDK_OFFSET(0x18A238D0)
#define CLASS_1_C16931E567A100F1_METHOD_1_C3AD4166D687C104_OFFSET UNITYSDK_OFFSET(0x18A25180)
#define CLASS_1_C16931E567A100F1_METHOD_1_C4485AC50EE09E33_OFFSET UNITYSDK_OFFSET(0x18A2A800)
#define CLASS_1_C16931E567A100F1_METHOD_1_C7CC2AC3AE39727D_OFFSET UNITYSDK_OFFSET(0x18A21110)
#define CLASS_1_C16931E567A100F1_METHOD_1_CA99028638214CFF_OFFSET UNITYSDK_OFFSET(0x18A24FE0)
#define CLASS_1_C16931E567A100F1_METHOD_1_CB90D463EEA11F23_OFFSET UNITYSDK_OFFSET(0x18A1F400)
#define CLASS_1_C16931E567A100F1_METHOD_1_D1D0F46BEC544F6E_OFFSET UNITYSDK_OFFSET(0x18A2AA60)
#define CLASS_1_C16931E567A100F1_METHOD_1_DBF7B3B41259DD38_OFFSET UNITYSDK_OFFSET(0x18A21630)
#define CLASS_1_C16931E567A100F1_METHOD_1_DE12F16E897AFCE4_OFFSET UNITYSDK_OFFSET(0x18A210B0)
#define CLASS_1_C16931E567A100F1_METHOD_1_DE2090B5571A9853_1_OFFSET UNITYSDK_OFFSET(0x18A1FDB0)
#define CLASS_1_C16931E567A100F1_METHOD_1_DE2090B5571A9853_OFFSET UNITYSDK_OFFSET(0x18A1F870)
#define CLASS_1_C16931E567A100F1_METHOD_1_DE5CF0058746B7E4_OFFSET UNITYSDK_OFFSET(0x18A240C0)
#define CLASS_1_C16931E567A100F1_METHOD_1_E484F5B01BE94568_OFFSET UNITYSDK_OFFSET(0x18A202F0)
#define CLASS_1_C16931E567A100F1_METHOD_1_E5BDA68FE2E73023_OFFSET UNITYSDK_OFFSET(0x18A22500)
#define CLASS_1_C16931E567A100F1_METHOD_1_EB8E3A7F518C413E_OFFSET UNITYSDK_OFFSET(0x18A25540)
#define CLASS_1_C16931E567A100F1_METHOD_1_F369D2D2836D4EFA_OFFSET UNITYSDK_OFFSET(0x18A27F10)
#define CLASS_1_C16931E567A100F1_METHOD_1_F4886580B4A39730_OFFSET UNITYSDK_OFFSET(0x18A2A9C0)
#define CLASS_1_C16931E567A100F1_METHOD_1_F71FCF743BB85761_OFFSET UNITYSDK_OFFSET(0x18A23670)
#define CLASS_1_C16931E567A100F1_METHOD_1_FEAE331D52E92FE1_OFFSET UNITYSDK_OFFSET(0x18A26450)
#define CLASS_1_C16931E567A100F1__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1EB60)

inline static constexpr unsigned int Class_1_C16931E567A100F1_TypeDefinitionIndex = 34477;

class Class_1_C16931E567A100F1 : public ::System::Object
{
public:
	::Class_4_38B51614211CBC7D* Field_1_0; // 0x10
	::Class_2_3616FDE8A71D0590_1* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_71E81E0EEBC490C0*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_3616FDE8A71D0590_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_3616FDE8A71D0590_1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_883458DF9D296814(::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_883458DF9D296814_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_CB90D463EEA11F23(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_CB90D463EEA11F23_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E5BDA68FE2E73023(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_E5BDA68FE2E73023_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C3AD4166D687C104(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_C3AD4166D687C104_OFFSET))(this, a1);
	}

	::System::Void Method_1_FEAE331D52E92FE1(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_FEAE331D52E92FE1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F15C64E2B326F8B(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_8F15C64E2B326F8B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>* Method_1_28477BC0940AC0A8(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Single a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_28477BC0940AC0A8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_63F586678CC0C964(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_63F586678CC0C964_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE2090B5571A9853(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_DE2090B5571A9853_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE2090B5571A9853_1(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_DE2090B5571A9853_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE12F16E897AFCE4(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_DE12F16E897AFCE4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_5A1A7EA3438944E3(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_5A1A7EA3438944E3_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_241E05522154DA3F(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_241E05522154DA3F_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_F71FCF743BB85761(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Int32 a4)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_F71FCF743BB85761_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E484F5B01BE94568(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_E484F5B01BE94568_OFFSET))(this, a1);
	}

	::System::Void Method_1_33D2733A1285B960(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_33D2733A1285B960_OFFSET))(this, a1);
	}

	::System::Void Method_1_8175863F552EA4F8(::Class_2_AEE59ED8DADEC1A1* a1, ::RPG::LittleGameShare::DiceCombatCore::EAIState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::RPG::LittleGameShare::DiceCombatCore::EAIState))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_8175863F552EA4F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_734F347EA184E6F8(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_734F347EA184E6F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_734F347EA184E6F8_1(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_734F347EA184E6F8_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_734F347EA184E6F8_2(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_734F347EA184E6F8_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_2368DFE07F28F7DA(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_2368DFE07F28F7DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7CC2AC3AE39727D(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_C7CC2AC3AE39727D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DBF7B3B41259DD38(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_DBF7B3B41259DD38_OFFSET))(this, a1);
	}

	::System::Void Method_1_4DE47933053A6E15(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_4DE47933053A6E15_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4886580B4A39730(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_F4886580B4A39730_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::Class_1_0E117AC86D8E5BCA*, ::Class_1_0E117AC86D8E5BCA*>* Method_1_C4485AC50EE09E33(::Class_2_AEE59ED8DADEC1A1* a1, ::Class_1_71E81E0EEBC490C0* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::Class_1_0E117AC86D8E5BCA*, ::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::Class_1_71E81E0EEBC490C0*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_C4485AC50EE09E33_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::Class_1_0E117AC86D8E5BCA*, ::Class_1_0E117AC86D8E5BCA*>* Method_1_D1D0F46BEC544F6E(::Class_2_AEE59ED8DADEC1A1* a1, ::Class_1_71E81E0EEBC490C0* a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::Dictionary_2<::Class_1_0E117AC86D8E5BCA*, ::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::Class_1_71E81E0EEBC490C0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_D1D0F46BEC544F6E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5A03FE5CA9C1ACF5(::Class_2_AEE59ED8DADEC1A1* a1, ::Class_1_71E81E0EEBC490C0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::Class_1_71E81E0EEBC490C0*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_5A03FE5CA9C1ACF5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0B7C3CE1C2B0FEA2(::Class_2_AEE59ED8DADEC1A1* a1, ::Class_2_AEE59ED8DADEC1A1* a2, ::Class_1_71E81E0EEBC490C0* a3, ::System::Single a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::Class_2_AEE59ED8DADEC1A1*, ::Class_1_71E81E0EEBC490C0*, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_0B7C3CE1C2B0FEA2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::ValueTuple_3<::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_EB8E3A7F518C413E(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_EB8E3A7F518C413E_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_3B525AF5C816533C(::Class_1_D2DA75CD29265F7F* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::BitArray* a3)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_D2DA75CD29265F7F*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_3B525AF5C816533C_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_2858CC98E795D643(::Class_1_855E018881074DD2* a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::Class_1_855E018881074DD2*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_2858CC98E795D643_OFFSET))(this, a1);
	}

	::Class_1_70B630442ADDBF4A* Method_1_A309CA5D63263D65(::Class_1_72E419617CCAA151* a1)
	{
		return ((::Class_1_70B630442ADDBF4A*(*)(::PVOID, ::Class_1_72E419617CCAA151*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_A309CA5D63263D65_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_72BFCFBB7E38A983(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_72BFCFBB7E38A983_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_F369D2D2836D4EFA(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_F369D2D2836D4EFA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*>* Method_1_A0519699E41782DF(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_A0519699E41782DF_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_B900C7E8513B8C44(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_B900C7E8513B8C44_OFFSET))(this, a1);
	}

	::Class_1_0272D5A0C4F089B0* Method_1_DE5CF0058746B7E4(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::Class_1_0272D5A0C4F089B0*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_DE5CF0058746B7E4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_B582DF9E419857F2(::Class_2_AEE59ED8DADEC1A1* a1, ::RPG::LittleGameShare::DiceCombatCore::EAIState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::RPG::LittleGameShare::DiceCombatCore::EAIState))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_B582DF9E419857F2_OFFSET))(this, a1, a2);
	}

	::Class_1_71E81E0EEBC490C0* Method_1_CA99028638214CFF(::System::UInt32 a1)
	{
		return ((::Class_1_71E81E0EEBC490C0*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_CA99028638214CFF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8723A000853037DA(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_8723A000853037DA_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_22D0ADB352880F38(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_22D0ADB352880F38_OFFSET))(this, a1, a2);
	}

	static ::System::Collections::Generic::IEnumerable_1<::Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5*>* Method_1_3DE23685AE148311(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5*>*(*)(::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_3DE23685AE148311_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_799AE31E74D7CDAF(::System::Int32 a1, ::System::Int32 a2, ::System::Action_1<::System::UInt64>* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Action_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_799AE31E74D7CDAF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2B7C743F7DDCD5F5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::UInt64 a5, ::System::Action_1<::System::UInt64>* a6)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt64, ::System::Action_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_2B7C743F7DDCD5F5_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_550C32FDB31FBD0D(::System::UInt64 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::UInt64, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_550C32FDB31FBD0D_OFFSET))(a1, a2, a3);
	}
};
