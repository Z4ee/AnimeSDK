#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/EAIState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_0272D5A0C4F089B0;
class Class_1_38C460910E5AC181;
class Class_1_72E419617CCAA151;
class Class_1_82297B6AFFE49354;
class Class_1_855E018881074DD2;
class Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5;
class Class_1_D2DA75CD29265F7F;
class Class_1_F4C56DD6B0F25B41;
class Class_2_099B78418029B3B1_1;
class Class_2_569DE47525C5FD32;
class Class_4_25476C0ECCF1BB17;
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x166A5550)
#define CLASS_1_C16931E567A100F1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x166A5190)
#define CLASS_1_C16931E567A100F1_METHOD_1_106A27B044BAA19B_OFFSET UNITYSDK_OFFSET(0x166A6330)
#define CLASS_1_C16931E567A100F1_METHOD_1_15A11EB4EAAB3892_OFFSET UNITYSDK_OFFSET(0x166A6800)
#define CLASS_1_C16931E567A100F1_METHOD_1_28477BC0940AC0A8_OFFSET UNITYSDK_OFFSET(0x166AB250)
#define CLASS_1_C16931E567A100F1_METHOD_1_2B7C743F7DDCD5F5_OFFSET UNITYSDK_OFFSET(0x166AE230)
#define CLASS_1_C16931E567A100F1_METHOD_1_3D95B20C736F08DA_OFFSET UNITYSDK_OFFSET(0x166A6860)
#define CLASS_1_C16931E567A100F1_METHOD_1_3DE23685AE148311_OFFSET UNITYSDK_OFFSET(0x166AE170)
#define CLASS_1_C16931E567A100F1_METHOD_1_44200E88ECF1468A_OFFSET UNITYSDK_OFFSET(0x166A81E0)
#define CLASS_1_C16931E567A100F1_METHOD_1_492DBD8F821AC273_OFFSET UNITYSDK_OFFSET(0x166A5EB0)
#define CLASS_1_C16931E567A100F1_METHOD_1_4DF2B91FD8FC14C9_OFFSET UNITYSDK_OFFSET(0x166A93F0)
#define CLASS_1_C16931E567A100F1_METHOD_1_505ECD9C15AD38F6_OFFSET UNITYSDK_OFFSET(0x166A7DF0)
#define CLASS_1_C16931E567A100F1_METHOD_1_66072E2AF1BBDD70_1_OFFSET UNITYSDK_OFFSET(0x166A5C00)
#define CLASS_1_C16931E567A100F1_METHOD_1_66072E2AF1BBDD70_OFFSET UNITYSDK_OFFSET(0x166A5950)
#define CLASS_1_C16931E567A100F1_METHOD_1_6BB8D786B6E2D153_OFFSET UNITYSDK_OFFSET(0x166AD750)
#define CLASS_1_C16931E567A100F1_METHOD_1_72BFCFBB7E38A983_OFFSET UNITYSDK_OFFSET(0x166ABC40)
#define CLASS_1_C16931E567A100F1_METHOD_1_7787508A974C9616_OFFSET UNITYSDK_OFFSET(0x166AD650)
#define CLASS_1_C16931E567A100F1_METHOD_1_7921AFB5F70359D4_OFFSET UNITYSDK_OFFSET(0x166AAB30)
#define CLASS_1_C16931E567A100F1_METHOD_1_799AE31E74D7CDAF_OFFSET UNITYSDK_OFFSET(0x166AD570)
#define CLASS_1_C16931E567A100F1_METHOD_1_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0x166ACC90)
#define CLASS_1_C16931E567A100F1_METHOD_1_8AE76CF1E5145F51_OFFSET UNITYSDK_OFFSET(0x166AA300)
#define CLASS_1_C16931E567A100F1_METHOD_1_C07FF5380C515368_OFFSET UNITYSDK_OFFSET(0x166ABEE0)
#define CLASS_1_C16931E567A100F1_METHOD_1_C4297EFF013E4E78_OFFSET UNITYSDK_OFFSET(0x166A7C80)
#define CLASS_1_C16931E567A100F1_METHOD_1_CA76614151F4BA13_OFFSET UNITYSDK_OFFSET(0x166AA870)
#define CLASS_1_C16931E567A100F1_METHOD_1_CB90D463EEA11F23_1_OFFSET UNITYSDK_OFFSET(0x166A5880)
#define CLASS_1_C16931E567A100F1_METHOD_1_CB90D463EEA11F23_OFFSET UNITYSDK_OFFSET(0x166A5730)
#define CLASS_1_C16931E567A100F1_METHOD_1_E83F80B98E762C85_OFFSET UNITYSDK_OFFSET(0x166AC130)
#define CLASS_1_C16931E567A100F1_METHOD_1_EBF4D3FAD6A368C6_OFFSET UNITYSDK_OFFSET(0x166AB980)
#define CLASS_1_C16931E567A100F1_METHOD_1_F350F657FD42665A_OFFSET UNITYSDK_OFFSET(0x166ACA60)
#define CLASS_1_C16931E567A100F1_METHOD_1_F71FCF743BB85761_OFFSET UNITYSDK_OFFSET(0x166A7A20)
#define CLASS_1_C16931E567A100F1_METHOD_1_FB662B1693E45D85_OFFSET UNITYSDK_OFFSET(0x166A8660)
#define CLASS_1_C16931E567A100F1_METHOD_1_FF816DC3F260E91A_OFFSET UNITYSDK_OFFSET(0x166A8FC0)
#define CLASS_1_C16931E567A100F1__CTOR_OFFSET UNITYSDK_OFFSET(0x166A50E0)

inline static constexpr unsigned int Class_1_C16931E567A100F1_TypeDefinitionIndex = 28512;

class Class_1_C16931E567A100F1 : public ::System::Object
{
public:
	::Class_2_099B78418029B3B1_1* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F4C56DD6B0F25B41*>* Field_1_2; // 0x18
	::Class_4_25476C0ECCF1BB17* Field_1_0; // 0x20

	::System::Void _ctor(::Class_4_25476C0ECCF1BB17* a1, ::Class_2_099B78418029B3B1_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_25476C0ECCF1BB17*, ::Class_2_099B78418029B3B1_1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_CB90D463EEA11F23(::Class_2_569DE47525C5FD32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_CB90D463EEA11F23_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3D95B20C736F08DA(::Class_2_569DE47525C5FD32* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_3D95B20C736F08DA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FF816DC3F260E91A(::Class_2_569DE47525C5FD32* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_FF816DC3F260E91A_OFFSET))(this, a1);
	}

	::System::Void Method_1_8AE76CF1E5145F51(::Class_2_569DE47525C5FD32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_8AE76CF1E5145F51_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB90D463EEA11F23_1(::Class_2_569DE47525C5FD32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_CB90D463EEA11F23_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>* Method_1_28477BC0940AC0A8(::Class_2_569DE47525C5FD32* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Single a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>*(*)(::PVOID, ::Class_2_569DE47525C5FD32*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_28477BC0940AC0A8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_EBF4D3FAD6A368C6(::Class_2_569DE47525C5FD32* a1, ::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_569DE47525C5FD32*, ::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_EBF4D3FAD6A368C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_66072E2AF1BBDD70(::Class_2_569DE47525C5FD32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_66072E2AF1BBDD70_OFFSET))(this, a1);
	}

	::System::Void Method_1_66072E2AF1BBDD70_1(::Class_2_569DE47525C5FD32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_66072E2AF1BBDD70_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_15A11EB4EAAB3892(::Class_2_569DE47525C5FD32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_15A11EB4EAAB3892_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_7921AFB5F70359D4(::Class_2_569DE47525C5FD32* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_7921AFB5F70359D4_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_F71FCF743BB85761(::Class_2_569DE47525C5FD32* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Int32 a4)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::Class_2_569DE47525C5FD32*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_F71FCF743BB85761_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_492DBD8F821AC273(::Class_2_569DE47525C5FD32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_492DBD8F821AC273_OFFSET))(this, a1);
	}

	::System::Void Method_1_106A27B044BAA19B(::Class_2_569DE47525C5FD32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_106A27B044BAA19B_OFFSET))(this, a1);
	}

	::System::Void Method_1_F350F657FD42665A(::Class_2_569DE47525C5FD32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_F350F657FD42665A_OFFSET))(this, a1);
	}

	::System::ValueTuple_3<::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_4DF2B91FD8FC14C9(::Class_2_569DE47525C5FD32* a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::Class_2_569DE47525C5FD32*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_4DF2B91FD8FC14C9_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FB662B1693E45D85(::Class_1_D2DA75CD29265F7F* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::BitArray* a3)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_D2DA75CD29265F7F*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_FB662B1693E45D85_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_E83F80B98E762C85(::Class_1_855E018881074DD2* a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::Class_1_855E018881074DD2*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_E83F80B98E762C85_OFFSET))(this, a1);
	}

	::Class_1_38C460910E5AC181* Method_1_6BB8D786B6E2D153(::Class_1_72E419617CCAA151* a1)
	{
		return ((::Class_1_38C460910E5AC181*(*)(::PVOID, ::Class_1_72E419617CCAA151*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_6BB8D786B6E2D153_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_72BFCFBB7E38A983(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_72BFCFBB7E38A983_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_C07FF5380C515368(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_C07FF5380C515368_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*>* Method_1_505ECD9C15AD38F6(::Class_2_569DE47525C5FD32* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*>*(*)(::PVOID, ::Class_2_569DE47525C5FD32*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_505ECD9C15AD38F6_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C4297EFF013E4E78(::Class_2_569DE47525C5FD32* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_C4297EFF013E4E78_OFFSET))(this, a1);
	}

	::Class_1_0272D5A0C4F089B0* Method_1_44200E88ECF1468A(::Class_2_569DE47525C5FD32* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::Class_1_0272D5A0C4F089B0*(*)(::PVOID, ::Class_2_569DE47525C5FD32*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_44200E88ECF1468A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CA76614151F4BA13(::Class_2_569DE47525C5FD32* a1, ::RPG::LittleGameShare::DiceCombatCore::EAIState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_569DE47525C5FD32*, ::RPG::LittleGameShare::DiceCombatCore::EAIState))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_CA76614151F4BA13_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8723A000853037DA(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_8723A000853037DA_OFFSET))(this, a1, a2);
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

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_7787508A974C9616(::System::UInt64 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::UInt64, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_7787508A974C9616_OFFSET))(a1, a2, a3);
	}
};
