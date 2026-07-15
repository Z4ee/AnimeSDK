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
class Class_2_3616FDE8A71D0590;
class Class_2_AEE59ED8DADEC1A1;
class Class_4_38B51614211CBC7D;
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17BAD730)
#define CLASS_1_C16931E567A100F1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17BAD110)
#define CLASS_1_C16931E567A100F1_METHOD_1_02B403F788CA0BC9_OFFSET UNITYSDK_OFFSET(0x17BB2D10)
#define CLASS_1_C16931E567A100F1_METHOD_1_0B7C3CE1C2B0FEA2_OFFSET UNITYSDK_OFFSET(0x17BB7C60)
#define CLASS_1_C16931E567A100F1_METHOD_1_206089DE0398443A_OFFSET UNITYSDK_OFFSET(0x17BB6210)
#define CLASS_1_C16931E567A100F1_METHOD_1_2368DFE07F28F7DA_OFFSET UNITYSDK_OFFSET(0x17BB7400)
#define CLASS_1_C16931E567A100F1_METHOD_1_241E05522154DA3F_OFFSET UNITYSDK_OFFSET(0x17BB5280)
#define CLASS_1_C16931E567A100F1_METHOD_1_28477BC0940AC0A8_OFFSET UNITYSDK_OFFSET(0x17BB5430)
#define CLASS_1_C16931E567A100F1_METHOD_1_2858CC98E795D643_OFFSET UNITYSDK_OFFSET(0x17BB67A0)
#define CLASS_1_C16931E567A100F1_METHOD_1_2B7C743F7DDCD5F5_OFFSET UNITYSDK_OFFSET(0x17BBA740)
#define CLASS_1_C16931E567A100F1_METHOD_1_33D2733A1285B960_OFFSET UNITYSDK_OFFSET(0x17BAED60)
#define CLASS_1_C16931E567A100F1_METHOD_1_3DE23685AE148311_OFFSET UNITYSDK_OFFSET(0x17BBA680)
#define CLASS_1_C16931E567A100F1_METHOD_1_4386DAA2BE78BFE2_OFFSET UNITYSDK_OFFSET(0x17BB7630)
#define CLASS_1_C16931E567A100F1_METHOD_1_48D10C1E3CA96A16_OFFSET UNITYSDK_OFFSET(0x17BAF640)
#define CLASS_1_C16931E567A100F1_METHOD_1_4CFC5F9F40A751DF_OFFSET UNITYSDK_OFFSET(0x17BB4D00)
#define CLASS_1_C16931E567A100F1_METHOD_1_4DE47933053A6E15_OFFSET UNITYSDK_OFFSET(0x17BB02E0)
#define CLASS_1_C16931E567A100F1_METHOD_1_4DF2B91FD8FC14C9_OFFSET UNITYSDK_OFFSET(0x17BB3DA0)
#define CLASS_1_C16931E567A100F1_METHOD_1_550C32FDB31FBD0D_OFFSET UNITYSDK_OFFSET(0x17BB95B0)
#define CLASS_1_C16931E567A100F1_METHOD_1_5A1A7EA3438944E3_OFFSET UNITYSDK_OFFSET(0x17B7C240)
#define CLASS_1_C16931E567A100F1_METHOD_1_63F586678CC0C964_OFFSET UNITYSDK_OFFSET(0x17BB5F50)
#define CLASS_1_C16931E567A100F1_METHOD_1_734F347EA184E6F8_1_OFFSET UNITYSDK_OFFSET(0x17BB7340)
#define CLASS_1_C16931E567A100F1_METHOD_1_734F347EA184E6F8_2_OFFSET UNITYSDK_OFFSET(0x17BB73A0)
#define CLASS_1_C16931E567A100F1_METHOD_1_734F347EA184E6F8_OFFSET UNITYSDK_OFFSET(0x17BB72E0)
#define CLASS_1_C16931E567A100F1_METHOD_1_799AE31E74D7CDAF_OFFSET UNITYSDK_OFFSET(0x17BB94D0)
#define CLASS_1_C16931E567A100F1_METHOD_1_8175863F552EA4F8_OFFSET UNITYSDK_OFFSET(0x17BB7210)
#define CLASS_1_C16931E567A100F1_METHOD_1_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0x17BB74A0)
#define CLASS_1_C16931E567A100F1_METHOD_1_883458DF9D296814_OFFSET UNITYSDK_OFFSET(0x17BAD150)
#define CLASS_1_C16931E567A100F1_METHOD_1_8F15C64E2B326F8B_OFFSET UNITYSDK_OFFSET(0x17BADA90)
#define CLASS_1_C16931E567A100F1_METHOD_1_92D4C2068556D90D_OFFSET UNITYSDK_OFFSET(0x17BB50A0)
#define CLASS_1_C16931E567A100F1_METHOD_1_9EE14B65DF134800_OFFSET UNITYSDK_OFFSET(0x17BB7520)
#define CLASS_1_C16931E567A100F1_METHOD_1_A0519699E41782DF_OFFSET UNITYSDK_OFFSET(0x17BB2430)
#define CLASS_1_C16931E567A100F1_METHOD_1_A309CA5D63263D65_OFFSET UNITYSDK_OFFSET(0x17BB96D0)
#define CLASS_1_C16931E567A100F1_METHOD_1_B900C7E8513B8C44_OFFSET UNITYSDK_OFFSET(0x17BB2010)
#define CLASS_1_C16931E567A100F1_METHOD_1_C3AD4166D687C104_OFFSET UNITYSDK_OFFSET(0x17BB39F0)
#define CLASS_1_C16931E567A100F1_METHOD_1_C4485AC50EE09E33_OFFSET UNITYSDK_OFFSET(0x17BB8950)
#define CLASS_1_C16931E567A100F1_METHOD_1_CA99028638214CFF_OFFSET UNITYSDK_OFFSET(0x17BB3850)
#define CLASS_1_C16931E567A100F1_METHOD_1_CB90D463EEA11F23_OFFSET UNITYSDK_OFFSET(0x17BAD900)
#define CLASS_1_C16931E567A100F1_METHOD_1_D1D0F46BEC544F6E_OFFSET UNITYSDK_OFFSET(0x17BB8B10)
#define CLASS_1_C16931E567A100F1_METHOD_1_DBF7B3B41259DD38_OFFSET UNITYSDK_OFFSET(0x17BAFB60)
#define CLASS_1_C16931E567A100F1_METHOD_1_DE2090B5571A9853_1_OFFSET UNITYSDK_OFFSET(0x17BAE2B0)
#define CLASS_1_C16931E567A100F1_METHOD_1_DE2090B5571A9853_OFFSET UNITYSDK_OFFSET(0x17BADD70)
#define CLASS_1_C16931E567A100F1_METHOD_1_DE5CF0058746B7E4_OFFSET UNITYSDK_OFFSET(0x17BB2830)
#define CLASS_1_C16931E567A100F1_METHOD_1_DFE2F213AF3F696D_OFFSET UNITYSDK_OFFSET(0x17BAF5E0)
#define CLASS_1_C16931E567A100F1_METHOD_1_E484F5B01BE94568_OFFSET UNITYSDK_OFFSET(0x17BAE7F0)
#define CLASS_1_C16931E567A100F1_METHOD_1_E5BDA68FE2E73023_OFFSET UNITYSDK_OFFSET(0x17BB0A70)
#define CLASS_1_C16931E567A100F1_METHOD_1_F369D2D2836D4EFA_OFFSET UNITYSDK_OFFSET(0x17BB6500)
#define CLASS_1_C16931E567A100F1_METHOD_1_F4886580B4A39730_OFFSET UNITYSDK_OFFSET(0x17B7C840)
#define CLASS_1_C16931E567A100F1_METHOD_1_F71FCF743BB85761_OFFSET UNITYSDK_OFFSET(0x17BB1DA0)
#define CLASS_1_C16931E567A100F1__CTOR_OFFSET UNITYSDK_OFFSET(0x17BAD060)

inline static constexpr unsigned int Class_1_C16931E567A100F1_TypeDefinitionIndex = 34859;

class Class_1_C16931E567A100F1 : public ::System::Object
{
public:
	::Class_2_3616FDE8A71D0590* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_71E81E0EEBC490C0*>* Field_1_1; // 0x18
	::Class_4_38B51614211CBC7D* Field_1_2; // 0x20

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_3616FDE8A71D0590* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_3616FDE8A71D0590*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_4CFC5F9F40A751DF(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_4CFC5F9F40A751DF_OFFSET))(this, a1);
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

	::System::Void Method_1_DFE2F213AF3F696D(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_DFE2F213AF3F696D_OFFSET))(this, a1);
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

	::System::Void Method_1_48D10C1E3CA96A16(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_48D10C1E3CA96A16_OFFSET))(this, a1);
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

	::System::Void Method_1_4386DAA2BE78BFE2(::Class_2_AEE59ED8DADEC1A1* a1, ::Class_1_71E81E0EEBC490C0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::Class_1_71E81E0EEBC490C0*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_4386DAA2BE78BFE2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0B7C3CE1C2B0FEA2(::Class_2_AEE59ED8DADEC1A1* a1, ::Class_2_AEE59ED8DADEC1A1* a2, ::Class_1_71E81E0EEBC490C0* a3, ::System::Single a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::Class_2_AEE59ED8DADEC1A1*, ::Class_1_71E81E0EEBC490C0*, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_0B7C3CE1C2B0FEA2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::ValueTuple_3<::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_4DF2B91FD8FC14C9(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_4DF2B91FD8FC14C9_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_02B403F788CA0BC9(::Class_1_D2DA75CD29265F7F* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::BitArray* a3)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_D2DA75CD29265F7F*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_02B403F788CA0BC9_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_2858CC98E795D643(::Class_1_855E018881074DD2* a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::Class_1_855E018881074DD2*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_2858CC98E795D643_OFFSET))(this, a1);
	}

	::Class_1_70B630442ADDBF4A* Method_1_A309CA5D63263D65(::Class_1_72E419617CCAA151* a1)
	{
		return ((::Class_1_70B630442ADDBF4A*(*)(::PVOID, ::Class_1_72E419617CCAA151*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_A309CA5D63263D65_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_206089DE0398443A(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_206089DE0398443A_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_92D4C2068556D90D(::Class_2_AEE59ED8DADEC1A1* a1, ::RPG::LittleGameShare::DiceCombatCore::EAIState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::RPG::LittleGameShare::DiceCombatCore::EAIState))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_92D4C2068556D90D_OFFSET))(this, a1, a2);
	}

	::Class_1_71E81E0EEBC490C0* Method_1_CA99028638214CFF(::System::UInt32 a1)
	{
		return ((::Class_1_71E81E0EEBC490C0*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_CA99028638214CFF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8723A000853037DA(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_8723A000853037DA_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_9EE14B65DF134800(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_9EE14B65DF134800_OFFSET))(this, a1, a2);
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
