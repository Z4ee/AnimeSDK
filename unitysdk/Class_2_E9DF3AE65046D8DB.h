#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/LoginLoadType.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Foundation { class IEnumeratorLoader; }
namespace Foundation { class IEnumeratorLoaderNode; }
namespace Foundation { class ILoader; }
namespace MoleMole { class NewAutoConfigMetaConfig; }
namespace MoleMole { class NewConfigMetaConfig; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_2_E9DF3AE65046D8DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DCA790)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_086F92BA8A47E6D0_OFFSET UNITYSDK_OFFSET(0x11DD0CF0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0x11DD2700)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_20D6605E17B95057_OFFSET UNITYSDK_OFFSET(0x11DD09D0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_2449FEA34439A117_OFFSET UNITYSDK_OFFSET(0x11DD1160)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x11DCC030)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x11DD1720)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x11DD0850)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x11DD1D90)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11DCD730)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_5E494C8777EF1D9A_OFFSET UNITYSDK_OFFSET(0x11DCA6C0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_609F7DD397B94978_OFFSET UNITYSDK_OFFSET(0x11DD1250)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_75CB4980FED2E377_OFFSET UNITYSDK_OFFSET(0x11DCC540)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_79E682FACD4FC49F_OFFSET UNITYSDK_OFFSET(0x11DCD520)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_85B4C71C1FFFFA63_OFFSET UNITYSDK_OFFSET(0x11DD0AC0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x11DD1730)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_8891042993F02C3D_OFFSET UNITYSDK_OFFSET(0x11DCD240)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_1_OFFSET UNITYSDK_OFFSET(0x11DD0950)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_2_OFFSET UNITYSDK_OFFSET(0x11DD25F0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_3_OFFSET UNITYSDK_OFFSET(0x11DD2670)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_4_OFFSET UNITYSDK_OFFSET(0x11DD2760)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_OFFSET UNITYSDK_OFFSET(0x11DD07D0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x11DD1DD0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11DCA5A0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_97368F8170B9AF84_1_OFFSET UNITYSDK_OFFSET(0x11DD1E60)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_97368F8170B9AF84_OFFSET UNITYSDK_OFFSET(0x11DCD770)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_97531026950BAE0D_OFFSET UNITYSDK_OFFSET(0x11DD21A0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_9F2E2B246015406C_OFFSET UNITYSDK_OFFSET(0x11DD2310)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_B12F645A576BB7A1_OFFSET UNITYSDK_OFFSET(0x11DD27E0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x11DCAF30)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_B7A43C06FD78D78B_OFFSET UNITYSDK_OFFSET(0x11DD1100)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x11DCC0D0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_BC5B668148D964CC_OFFSET UNITYSDK_OFFSET(0x11DCAA60)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_BCB2842DA683C01F_OFFSET UNITYSDK_OFFSET(0x11DCCBA0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_BDBE58599E9AD74D_OFFSET UNITYSDK_OFFSET(0x11DD0890)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x11DD19A0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_1_OFFSET UNITYSDK_OFFSET(0x11DD0FC0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_2_OFFSET UNITYSDK_OFFSET(0x11DD24B0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0x11DD0BB0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_C9E88B5700FC07AC_OFFSET UNITYSDK_OFFSET(0x11DCA630)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11DCC090)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11DCBFF0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x11DD0770)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_E006F30F38C951FF_OFFSET UNITYSDK_OFFSET(0x11DD0E60)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x11DD0BA0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0x11DD0B20)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_EEA082F774806CCC_OFFSET UNITYSDK_OFFSET(0x11DD1B70)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11DD26F0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_F15E2703830306E1_OFFSET UNITYSDK_OFFSET(0x11DD16C0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_F7F8016EAE618A49_OFFSET UNITYSDK_OFFSET(0x11DCCB00)
#define CLASS_2_E9DF3AE65046D8DB_ONCREATE_OFFSET UNITYSDK_OFFSET(0x11DCA560)
#define CLASS_2_E9DF3AE65046D8DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DCA8E0)
#define CLASS_2_E9DF3AE65046D8DB__CTOR_OFFSET UNITYSDK_OFFSET(0x11DCA7E0)

inline static constexpr unsigned int Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex = 66017;

class Class_2_E9DF3AE65046D8DB : public ::Foundation::SingletonDisposable_1<::Class_2_E9DF3AE65046D8DB*>
{
public:
	static ::Foundation::AssetPath* StaticGet_Field_2_36()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0x302D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_2_8()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0x302E0);
	}
	static ::Foundation::AssetPath* StaticGet_Field_2_37()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0x302E8);
	}
	static ::System::Action_1<::System::Single>** StaticGet_Field_2_11()
	{
		return (::System::Action_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0x302F8);
	}
	static ::System::Single* StaticGet_Field_2_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA70);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA74);
	}
	static ::System::Int32* StaticGet_Field_2_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA78);
	}
	static ::System::Int32* StaticGet_Field_2_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA7C);
	}
	static ::System::Boolean* StaticGet_Field_2_16()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA80);
	}
	static ::System::Boolean* StaticGet_Field_2_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA81);
	}
	static ::System::Boolean* StaticGet_Field_2_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA82);
	}
	static ::System::Int32* StaticGet_Field_2_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA84);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA88);
	}
	static ::System::Single* StaticGet_Field_2_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA8C);
	}
	static ::System::Single* StaticGet_Field_2_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA90);
	}
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA94);
	}
	static ::System::Boolean* StaticGet_Field_2_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA98);
	}
	static ::Foundation::LoginLoadType* StaticGet_Field_2_13()
	{
		return (::Foundation::LoginLoadType*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA99);
	}
	static ::System::Boolean* StaticGet_Field_2_45()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA9A);
	}
	static ::System::Boolean* StaticGet_Field_2_44()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA9B);
	}
	static ::System::Boolean* StaticGet_Field_2_42()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA9C);
	}
	static ::System::Boolean* StaticGet_Field_2_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA9D);
	}
	static ::System::Boolean* StaticGet_Field_2_41()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA9E);
	}
	static ::System::Boolean* StaticGet_Field_2_43()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBA9F);
	}
	static ::System::Int32* StaticGet_Field_2_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBAA0);
	}
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xBAA4);
	}
	// static const ::System::Single Field_2_19; // 0x0
	// static const ::System::Single Field_2_20; // 0x0
	// static const ::System::Single Field_2_21; // 0x0
	// static const ::System::Single Field_2_22; // 0x0
	::System::Collections::Generic::Stack_1<::System::ValueTuple_2<::Foundation::AssetRequestHandle, ::System::Action_1<::Foundation::AssetRequestHandle>*>>* Field_2_34; // 0x10
	::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestHandle>* Field_2_35; // 0x18
	::MoleMole::NewConfigMetaConfig* Field_2_38; // 0x20
	::System::Collections::Generic::Stack_1<::System::ValueTuple_2<::Foundation::AssetPath, ::System::Func_2<::Foundation::AssetPath, ::Foundation::AssetRequestHandle>*>>* Field_2_33; // 0x28
	::Foundation::ILoader* Field_2_32; // 0x30
	::MoleMole::NewAutoConfigMetaConfig* Field_2_39; // 0x38
	::System::Int32 Field_2_28; // 0x40
	::System::Int32 Field_2_30; // 0x44
	::System::Int32 Field_2_26; // 0x48
	::System::Int32 Field_2_29; // 0x4C
	::System::Int32 Field_2_25; // 0x50
	::System::Int32 Field_2_31; // 0x54
	::System::Boolean Field_2_46; // 0x58
	::System::Boolean Field_2_40; // 0x59
	::System::Int32 Field_2_24; // 0x5C
	::System::Single Field_2_23; // 0x60
	::System::Int32 Field_2_27; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_C9E88B5700FC07AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_C9E88B5700FC07AC_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_BC5B668148D964CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_BC5B668148D964CC_OFFSET))(this);
	}

	::System::Void Method_2_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Single Method_2_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_3150507749BCEAEC_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_BA1BB49741CFDFE1_OFFSET))(this);
	}

	static ::System::Void Method_2_75CB4980FED2E377(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_75CB4980FED2E377_OFFSET))(a1, a2);
	}

	::System::Collections::IEnumerator* Method_2_F7F8016EAE618A49(::System::Action_1<::System::Single>* a1, ::System::Single a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_F7F8016EAE618A49_OFFSET))(this, a1, a2);
	}

	::Foundation::ILoader* Method_2_BCB2842DA683C01F(::System::Action_1<::System::Single>* a1, ::System::Single a2, ::System::Action_1<::System::Collections::Generic::List_1<::System::Exception*>*>* a3)
	{
		return ((::Foundation::ILoader*(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Single, ::System::Action_1<::System::Collections::Generic::List_1<::System::Exception*>*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_BCB2842DA683C01F_OFFSET))(this, a1, a2, a3);
	}

	::Foundation::IEnumeratorLoaderNode* Method_2_79E682FACD4FC49F(::Foundation::IEnumeratorLoader* a1, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* a2)
	{
		return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::Foundation::IEnumeratorLoader*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_79E682FACD4FC49F_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_OFFSET))();
	}

	::Foundation::IEnumeratorLoaderNode* Method_2_97368F8170B9AF84(::Foundation::IEnumeratorLoader* a1, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* a2)
	{
		return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::Foundation::IEnumeratorLoader*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_97368F8170B9AF84_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_CE34EA208837238D_OFFSET))();
	}

	static ::System::Collections::IEnumerator* Method_2_92C6D4C022363DAC(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_OFFSET))(a1);
	}

	static ::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_1_OFFSET))();
	}

	::System::Collections::IEnumerator* Method_2_BDBE58599E9AD74D(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_BDBE58599E9AD74D_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Collections::IEnumerator* Method_2_92C6D4C022363DAC_1(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_20D6605E17B95057(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_20D6605E17B95057_OFFSET))(a1);
	}

	static ::Foundation::LoginLoadType Method_2_85B4C71C1FFFFA63()
	{
		return ((::Foundation::LoginLoadType(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_85B4C71C1FFFFA63_OFFSET))();
	}

	::System::Void Method_2_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_ED79705457B92B5C_OFFSET))(this);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::String* Method_2_C101CD8C5CF89A5A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_OFFSET))(this);
	}

	static ::System::Void Method_2_086F92BA8A47E6D0(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_086F92BA8A47E6D0_OFFSET))(a1);
	}

	::System::Void Method_2_E006F30F38C951FF(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_E006F30F38C951FF_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_C101CD8C5CF89A5A_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_1_OFFSET))(this);
	}

	::System::Void Method_2_B7A43C06FD78D78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_B7A43C06FD78D78B_OFFSET))(this);
	}

	static ::System::Void Method_2_2449FEA34439A117(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_2449FEA34439A117_OFFSET))(a1);
	}

	static ::System::Void Method_2_609F7DD397B94978(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>*& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_609F7DD397B94978_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_F15E2703830306E1(::Foundation::LoginLoadType a1)
	{
		return ((::System::Void(*)(::Foundation::LoginLoadType))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_F15E2703830306E1_OFFSET))(a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	static ::System::Void Method_2_EEA082F774806CCC(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_EEA082F774806CCC_OFFSET))(a1);
	}

	static ::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_2_OFFSET))();
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::Foundation::ILoader* Method_2_8891042993F02C3D()
	{
		return ((::Foundation::ILoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_8891042993F02C3D_OFFSET))(this);
	}

	::System::String* Method_2_9F2E2B246015406C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_9F2E2B246015406C_OFFSET))(this);
	}

	::System::String* Method_2_C101CD8C5CF89A5A_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_2_OFFSET))(this);
	}

	::Foundation::IEnumeratorLoaderNode* Method_2_97531026950BAE0D(::Foundation::IEnumeratorLoader* a1, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* a2)
	{
		return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::Foundation::IEnumeratorLoader*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_97531026950BAE0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5E494C8777EF1D9A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_5E494C8777EF1D9A_OFFSET))(this);
	}

	static ::System::Collections::IEnumerator* Method_2_92C6D4C022363DAC_2(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_2_OFFSET))(a1);
	}

	static ::System::Collections::IEnumerator* Method_2_92C6D4C022363DAC_3(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_3_OFFSET))(a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::System::Void Method_2_1DA89DF9585853CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_1DA89DF9585853CF_OFFSET))(a1);
	}

	static ::System::Collections::IEnumerator* Method_2_92C6D4C022363DAC_4(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_4_OFFSET))(a1);
	}

	::System::String* Method_2_B12F645A576BB7A1(::System::Boolean& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_B12F645A576BB7A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::Foundation::IEnumeratorLoaderNode* Method_2_97368F8170B9AF84_1(::Foundation::IEnumeratorLoader* a1, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* a2)
	{
		return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::Foundation::IEnumeratorLoader*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_97368F8170B9AF84_1_OFFSET))(this, a1, a2);
	}
};
