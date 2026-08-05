#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C836D00248E6EFFE.h"
#include "unitysdk/Class_2_56DF98B04B6E5137_Struct_2_04EA0A3341441B4F_1.h"
#include "unitysdk/Class_2_56DF98B04B6E5137_Struct_2_413C98E7F0821DC8_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class Class_2_0F138252A5783001;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_7A7D21CAFA515142_1;
class Class_3_F33F9DC5F4112336;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace Unity::Collections { template <typename T> class ManagedBlockQueue_1; }

#define CLASS_2_56DF98B04B6E5137_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x12CBDD50)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_09732CB72EAAFC26_OFFSET UNITYSDK_OFFSET(0x12CBED20)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_106289055FB804CE_OFFSET UNITYSDK_OFFSET(0x12CBD960)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_125126BF7ACBDD51_OFFSET UNITYSDK_OFFSET(0x12CBF7C0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12CBF150)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_160ACEB60FD370E3_OFFSET UNITYSDK_OFFSET(0x12CBEA90)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x12CC06E0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_297D816C07BD409D_OFFSET UNITYSDK_OFFSET(0x12CBB3E0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_33AEFB041A71ABC5_OFFSET UNITYSDK_OFFSET(0x12CBED10)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_33B1098CBCE7AEF5_OFFSET UNITYSDK_OFFSET(0x12CBD0E0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x12CBC0F0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x12CBF2B0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x12CBFB20)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x12CC03E0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_58D68FEBA7B5A778_OFFSET UNITYSDK_OFFSET(0x12CBCCB0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_5C3041258D35BA87_OFFSET UNITYSDK_OFFSET(0x12CBD490)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x12CBCA70)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_6EC720D218E06CA5_OFFSET UNITYSDK_OFFSET(0x12CBD3F0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x12CBBBC0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_74A99B49B01C79D7_OFFSET UNITYSDK_OFFSET(0x12CBC400)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0x12CC02B0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x12CBBCE0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_8E89BE9866A768ED_OFFSET UNITYSDK_OFFSET(0x12CBE060)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12CBBE60)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_97BE07E876064FAC_OFFSET UNITYSDK_OFFSET(0x12CBE8E0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_9B1F2653496E5C47_OFFSET UNITYSDK_OFFSET(0x12CBC800)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_A0F41BA786B4129D_OFFSET UNITYSDK_OFFSET(0x12CBD7A0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x12CBBF60)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_BD0EF31BAC562515_OFFSET UNITYSDK_OFFSET(0x12CBDF60)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_C87A2530700F1868_OFFSET UNITYSDK_OFFSET(0x12CBF620)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12CBBB50)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x12CC0D20)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x12CC0DB0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x12CC0E40)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12CC0240)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x12CBF250)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x12CBC700)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_DC8D90ABF4B0D623_OFFSET UNITYSDK_OFFSET(0x12CBFC40)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x12CBCDD0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12CBD8D0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x12CC0780)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x12CBD8E0)
#define CLASS_2_56DF98B04B6E5137_METHOD_2_F7E4906784B9935A_OFFSET UNITYSDK_OFFSET(0x12CBE720)
#define CLASS_2_56DF98B04B6E5137__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CBD180)
#define CLASS_2_56DF98B04B6E5137__CTOR_OFFSET UNITYSDK_OFFSET(0x12CBD170)

inline static constexpr unsigned int Class_2_56DF98B04B6E5137_TypeDefinitionIndex = 51762;

class Class_2_56DF98B04B6E5137 : public ::Class_1_C836D00248E6EFFE
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_2_56DF98B04B6E5137*>*>** StaticGet_Field_2_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_2_56DF98B04B6E5137*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_56DF98B04B6E5137_TypeDefinitionIndex)->GetStaticField(0x495F0);
	}
	static ::System::Collections::Generic::List_1<::Class_2_56DF98B04B6E5137*>** StaticGet_Field_2_7()
	{
		return (::System::Collections::Generic::List_1<::Class_2_56DF98B04B6E5137*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_56DF98B04B6E5137_TypeDefinitionIndex)->GetStaticField(0x495F8);
	}
	static ::System::Collections::Generic::List_1<::Class_2_56DF98B04B6E5137_Struct_2_413C98E7F0821DC8_1>** StaticGet_Field_2_5()
	{
		return (::System::Collections::Generic::List_1<::Class_2_56DF98B04B6E5137_Struct_2_413C98E7F0821DC8_1>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_56DF98B04B6E5137_TypeDefinitionIndex)->GetStaticField(0x49600);
	}
	static ::Unity::Collections::ManagedBlockQueue_1<::Class_2_56DF98B04B6E5137_Struct_2_04EA0A3341441B4F_1>** StaticGet_Field_2_11()
	{
		return (::Unity::Collections::ManagedBlockQueue_1<::Class_2_56DF98B04B6E5137_Struct_2_04EA0A3341441B4F_1>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_56DF98B04B6E5137_TypeDefinitionIndex)->GetStaticField(0x49608);
	}
	static ::System::Collections::Generic::List_1<::Class_2_56DF98B04B6E5137*>** StaticGet_Field_2_6()
	{
		return (::System::Collections::Generic::List_1<::Class_2_56DF98B04B6E5137*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_56DF98B04B6E5137_TypeDefinitionIndex)->GetStaticField(0x49610);
	}
	static ::System::Boolean* StaticGet_Field_2_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_56DF98B04B6E5137_TypeDefinitionIndex)->GetStaticField(0x10E80);
	}
	static ::System::Boolean* StaticGet_Field_2_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_56DF98B04B6E5137_TypeDefinitionIndex)->GetStaticField(0x10E81);
	}
	static ::System::Boolean* StaticGet_Field_2_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_56DF98B04B6E5137_TypeDefinitionIndex)->GetStaticField(0x10E82);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_56DF98B04B6E5137_TypeDefinitionIndex)->GetStaticField(0x10E83);
	}
	static ::System::Boolean* StaticGet_Field_2_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_56DF98B04B6E5137_TypeDefinitionIndex)->GetStaticField(0x10E84);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_2_9()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_2_56DF98B04B6E5137_TypeDefinitionIndex)->GetStaticField(0x10E88);
	}
	// static const ::System::Int32 Field_2_27 = 0xFFFFFFFF; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_21; // 0x50
	::Class_3_F33F9DC5F4112336* Field_2_16; // 0x58
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_20; // 0x60
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_22; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* Field_2_23; // 0x70
	::Class_3_7A7D21CAFA515142_1* Field_2_17; // 0x78
	::System::Boolean Field_2_31; // 0x80
	::System::Boolean Field_2_18; // 0x81
	::System::Boolean Field_2_19; // 0x82
	::System::Int32 Field_2_25; // 0x84
	::System::Int32 Field_2_26; // 0x88
	::System::Int32 Field_2_24; // 0x8C
	::System::Int32 Field_2_13; // 0x90
	::System::UInt32 Field_2_12; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137__CCTOR_OFFSET))();
	}

	::System::Void Method_2_297D816C07BD409D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_297D816C07BD409D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_2_58D68FEBA7B5A778(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_58D68FEBA7B5A778_OFFSET))(this, a1);
	}

	::System::Void Method_2_33B1098CBCE7AEF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_33B1098CBCE7AEF5_OFFSET))(this);
	}

	static ::System::Void Method_2_6EC720D218E06CA5(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_6EC720D218E06CA5_OFFSET))(a1);
	}

	static ::System::Void Method_2_A0F41BA786B4129D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_A0F41BA786B4129D_OFFSET))();
	}

	static ::System::Void Method_2_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_F730968E2645E14B_OFFSET))();
	}

	::System::Void Method_2_106289055FB804CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_106289055FB804CE_OFFSET))(this);
	}

	static ::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_0868EF727040C390_OFFSET))();
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::System::Void Method_2_BD0EF31BAC562515(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_BD0EF31BAC562515_OFFSET))(a1);
	}

	::System::Void Method_2_F7E4906784B9935A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_F7E4906784B9935A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_97BE07E876064FAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_97BE07E876064FAC_OFFSET))(this);
	}

	::System::Void Method_2_33AEFB041A71ABC5(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_33AEFB041A71ABC5_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_2_09732CB72EAAFC26(::Class_2_56DF98B04B6E5137* a1)
	{
		return ((::System::Void(*)(::Class_2_56DF98B04B6E5137*))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_09732CB72EAAFC26_OFFSET))(a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_66F42CE2EDA79734_OFFSET))(this);
	}

	static ::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_CE34EA208837238D_OFFSET))();
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	static ::System::Boolean Method_2_C87A2530700F1868(::Class_2_56DF98B04B6E5137* a1)
	{
		return ((::System::Boolean(*)(::Class_2_56DF98B04B6E5137*))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_C87A2530700F1868_OFFSET))(a1);
	}

	static ::System::Void Method_2_9B1F2653496E5C47()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_9B1F2653496E5C47_OFFSET))();
	}

	static ::System::Void Method_2_74A99B49B01C79D7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_74A99B49B01C79D7_OFFSET))(a1);
	}

	::System::Boolean Method_2_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_DD1EE3A48E307831_OFFSET))(this);
	}

	::System::Boolean Method_2_DC8D90ABF4B0D623()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_DC8D90ABF4B0D623_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_763B70E1B527E566()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_763B70E1B527E566_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}

	static ::System::Void Method_2_8E89BE9866A768ED()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_8E89BE9866A768ED_OFFSET))();
	}

	::System::Void Method_2_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_464B80C09A37526F_OFFSET))(this);
	}

	::System::Boolean Method_2_160ACEB60FD370E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_160ACEB60FD370E3_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	static ::System::Void Method_2_125126BF7ACBDD51(::Class_2_56DF98B04B6E5137* a1)
	{
		return ((::System::Void(*)(::Class_2_56DF98B04B6E5137*))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_125126BF7ACBDD51_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_CA373AA1C7054598_4_OFFSET))(this);
	}

	static ::System::Void Method_2_5C3041258D35BA87(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_5C3041258D35BA87_OFFSET))(a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56DF98B04B6E5137_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}
};
