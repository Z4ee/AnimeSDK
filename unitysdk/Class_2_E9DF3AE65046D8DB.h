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

#define CLASS_2_E9DF3AE65046D8DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128693B0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0x1286E4C0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x116B9500)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_0DAB644F7FF30380_OFFSET UNITYSDK_OFFSET(0x1286EFC0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0x1286E640)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_20D6605E17B95057_OFFSET UNITYSDK_OFFSET(0x116B9F50)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_2449FEA34439A117_OFFSET UNITYSDK_OFFSET(0x116B9C30)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x116BA180)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_41146E620D694011_OFFSET UNITYSDK_OFFSET(0x1286DE40)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_46CBB98A48243F6B_OFFSET UNITYSDK_OFFSET(0x116B9D20)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1286DD70)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x116BA9B0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x116BA1E0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_5CE20E37624050E3_OFFSET UNITYSDK_OFFSET(0x116B93F0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_609F7DD397B94978_OFFSET UNITYSDK_OFFSET(0x116B97D0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_672D56D99D734395_OFFSET UNITYSDK_OFFSET(0x116BA4F0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_79E682FACD4FC49F_OFFSET UNITYSDK_OFFSET(0x1286DF10)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_85B4C71C1FFFFA63_OFFSET UNITYSDK_OFFSET(0x116BA490)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x116BA220)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_8891042993F02C3D_OFFSET UNITYSDK_OFFSET(0x116BB820)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x1286E940)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_1_OFFSET UNITYSDK_OFFSET(0x1286E180)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_2_OFFSET UNITYSDK_OFFSET(0x116B9E90)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_3_OFFSET UNITYSDK_OFFSET(0x116BA9F0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_4_OFFSET UNITYSDK_OFFSET(0x116BB7A0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_OFFSET UNITYSDK_OFFSET(0x1286DDC0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92E740BCCB2A12AE_OFFSET UNITYSDK_OFFSET(0x1286EB10)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x116BBCA0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x128692A0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_97368F8170B9AF84_1_OFFSET UNITYSDK_OFFSET(0x116BB450)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_97368F8170B9AF84_OFFSET UNITYSDK_OFFSET(0x128696E0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_97531026950BAE0D_OFFSET UNITYSDK_OFFSET(0x1286DC00)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_9F2E2B246015406C_OFFSET UNITYSDK_OFFSET(0x116BBB00)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_B12F645A576BB7A1_OFFSET UNITYSDK_OFFSET(0x116BAB30)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x1286CA70)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_BDBE58599E9AD74D_OFFSET UNITYSDK_OFFSET(0x116BAA70)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_1_OFFSET UNITYSDK_OFFSET(0x1286E800)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_2_OFFSET UNITYSDK_OFFSET(0x116BA040)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0x1286E500)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x116B9F10)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1286DD80)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1286E120)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_E006F30F38C951FF_OFFSET UNITYSDK_OFFSET(0x1286E6A0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1286DEA0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_EA54EF6EE83094E3_OFFSET UNITYSDK_OFFSET(0x12869320)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0x116BBD30)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x116BBDB0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_F15E2703830306E1_OFFSET UNITYSDK_OFFSET(0x1286DEB0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_F17C9717B6FF6772_OFFSET UNITYSDK_OFFSET(0x116BAD80)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_F7F8016EAE618A49_OFFSET UNITYSDK_OFFSET(0x116BB3B0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_FA0C1E2D751C7A4F_OFFSET UNITYSDK_OFFSET(0x1286E200)
#define CLASS_2_E9DF3AE65046D8DB_ONCREATE_OFFSET UNITYSDK_OFFSET(0x12869260)
#define CLASS_2_E9DF3AE65046D8DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x12869500)
#define CLASS_2_E9DF3AE65046D8DB__CTOR_OFFSET UNITYSDK_OFFSET(0x12869400)

inline static constexpr unsigned int Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex = 77025;

class Class_2_E9DF3AE65046D8DB : public ::Foundation::SingletonDisposable_1<::Class_2_E9DF3AE65046D8DB*>
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_2_15()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0x34510);
	}
	static ::Foundation::AssetPath* StaticGet_Field_2_43()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0x34518);
	}
	static ::System::Action_1<::System::Single>** StaticGet_Field_2_13()
	{
		return (::System::Action_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0x34528);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_2_9()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0x34530);
	}
	static ::Foundation::AssetPath* StaticGet_Field_2_36()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0x34538);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2D0);
	}
	static ::System::Single* StaticGet_Field_2_11()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2D4);
	}
	static ::System::Int32* StaticGet_Field_2_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2D8);
	}
	static ::System::Boolean* StaticGet_Field_2_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2DC);
	}
	static ::System::Boolean* StaticGet_Field_2_47()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2DD);
	}
	static ::System::Boolean* StaticGet_Field_2_51()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2DE);
	}
	static ::System::Int32* StaticGet_Field_2_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2E0);
	}
	static ::System::Int32* StaticGet_Field_2_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2E4);
	}
	static ::System::Boolean* StaticGet_Field_2_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2E8);
	}
	static ::System::Boolean* StaticGet_Field_2_46()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2E9);
	}
	static ::Foundation::LoginLoadType* StaticGet_Field_2_19()
	{
		return (::Foundation::LoginLoadType*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2EA);
	}
	static ::System::Boolean* StaticGet_Field_2_16()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2EB);
	}
	static ::System::Int32* StaticGet_Field_2_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2EC);
	}
	static ::System::Single* StaticGet_Field_2_14()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2F0);
	}
	static ::System::Boolean* StaticGet_Field_2_45()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2F4);
	}
	static ::System::Boolean* StaticGet_Field_2_44()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2F5);
	}
	static ::System::Boolean* StaticGet_Field_2_23()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2F6);
	}
	static ::System::Boolean* StaticGet_Field_2_18()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2F7);
	}
	static ::System::Int32* StaticGet_Field_2_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2F8);
	}
	static ::System::Int32* StaticGet_Field_2_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC2FC);
	}
	static ::System::Single* StaticGet_Field_2_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC300);
	}
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xC304);
	}
	// static const ::System::Single Field_2_21; // 0x0
	// static const ::System::Single Field_2_20; // 0x0
	// static const ::System::Single Field_2_27; // 0x0
	// static const ::System::Single Field_2_26; // 0x0
	::Foundation::ILoader* Field_2_32; // 0x10
	::MoleMole::NewAutoConfigMetaConfig* Field_2_41; // 0x18
	::System::Collections::Generic::Stack_1<::System::ValueTuple_2<::Foundation::AssetPath, ::System::Func_2<::Foundation::AssetPath, ::Foundation::AssetRequestHandle>*>>* Field_2_39; // 0x20
	::MoleMole::NewConfigMetaConfig* Field_2_42; // 0x28
	::System::Collections::Generic::Stack_1<::System::ValueTuple_2<::Foundation::AssetRequestHandle, ::System::Action_1<::Foundation::AssetRequestHandle>*>>* Field_2_38; // 0x30
	::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestHandle>* Field_2_37; // 0x38
	::System::Boolean Field_2_50; // 0x40
	::System::Boolean Field_2_40; // 0x41
	::System::Int32 Field_2_35; // 0x44
	::System::Int32 Field_2_29; // 0x48
	::System::Int32 Field_2_34; // 0x4C
	::System::Int32 Field_2_28; // 0x50
	::System::Int32 Field_2_24; // 0x54
	::System::Int32 Field_2_33; // 0x58
	::System::Int32 Field_2_30; // 0x5C
	::System::Int32 Field_2_31; // 0x60
	::System::Single Field_2_25; // 0x64

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

	::System::Void Method_2_EA54EF6EE83094E3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_EA54EF6EE83094E3_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_DISPOSE_OFFSET))(this);
	}

	::Foundation::IEnumeratorLoaderNode* Method_2_97368F8170B9AF84(::Foundation::IEnumeratorLoader* a1, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* a2)
	{
		return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::Foundation::IEnumeratorLoader*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_97368F8170B9AF84_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_B768DA94E3FD91D9_OFFSET))(this);
	}

	::Foundation::IEnumeratorLoaderNode* Method_2_97531026950BAE0D(::Foundation::IEnumeratorLoader* a1, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* a2)
	{
		return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::Foundation::IEnumeratorLoader*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_97531026950BAE0D_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Collections::IEnumerator* Method_2_92C6D4C022363DAC(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_OFFSET))(a1);
	}

	::System::Void Method_2_41146E620D694011()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_41146E620D694011_OFFSET))(this);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_F15E2703830306E1(::Foundation::LoginLoadType a1)
	{
		return ((::System::Void(*)(::Foundation::LoginLoadType))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_F15E2703830306E1_OFFSET))(a1);
	}

	::Foundation::IEnumeratorLoaderNode* Method_2_79E682FACD4FC49F(::Foundation::IEnumeratorLoader* a1, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* a2)
	{
		return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::Foundation::IEnumeratorLoader*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_79E682FACD4FC49F_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_CE34EA208837238D_OFFSET))();
	}

	static ::System::Collections::IEnumerator* Method_2_92C6D4C022363DAC_1(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_1_OFFSET))(a1);
	}

	static ::System::Void Method_2_FA0C1E2D751C7A4F(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_FA0C1E2D751C7A4F_OFFSET))(a1);
	}

	static ::System::Void Method_2_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_00605CD46BC5ED28_OFFSET))(a1);
	}

	::System::String* Method_2_C101CD8C5CF89A5A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_OFFSET))(this);
	}

	static ::System::Void Method_2_1DA89DF9585853CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_1DA89DF9585853CF_OFFSET))(a1);
	}

	::System::Void Method_2_E006F30F38C951FF(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_E006F30F38C951FF_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_C101CD8C5CF89A5A_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_1_OFFSET))(this);
	}

	::System::Void Method_2_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_907E24F785836BA0_OFFSET))(this);
	}

	static ::System::Void Method_2_92E740BCCB2A12AE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92E740BCCB2A12AE_OFFSET))();
	}

	::Foundation::ILoader* Method_2_0DAB644F7FF30380(::System::Action_1<::System::Single>* a1, ::System::Single a2, ::System::Action_1<::System::Collections::Generic::List_1<::System::Exception*>*>* a3)
	{
		return ((::Foundation::ILoader*(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Single, ::System::Action_1<::System::Collections::Generic::List_1<::System::Exception*>*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_0DAB644F7FF30380_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5CE20E37624050E3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_5CE20E37624050E3_OFFSET))(this);
	}

	static ::System::Void Method_2_609F7DD397B94978(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>*& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_609F7DD397B94978_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_2449FEA34439A117(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_2449FEA34439A117_OFFSET))(a1);
	}

	static ::System::Collections::IEnumerator* Method_2_92C6D4C022363DAC_2(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_2_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Boolean Method_2_20D6605E17B95057(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_20D6605E17B95057_OFFSET))(a1);
	}

	::System::String* Method_2_C101CD8C5CF89A5A_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_2_OFFSET))(this);
	}

	static ::System::Single Method_2_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_3150507749BCEAEC_OFFSET))();
	}

	static ::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_OFFSET))();
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	static ::Foundation::LoginLoadType Method_2_85B4C71C1FFFFA63()
	{
		return ((::Foundation::LoginLoadType(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_85B4C71C1FFFFA63_OFFSET))();
	}

	::System::Void Method_2_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_03C4FFAD29DE0852_OFFSET))(this);
	}

	static ::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_1_OFFSET))();
	}

	static ::System::Collections::IEnumerator* Method_2_92C6D4C022363DAC_3(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_3_OFFSET))(a1);
	}

	::System::Void Method_2_672D56D99D734395()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_672D56D99D734395_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_BDBE58599E9AD74D(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_BDBE58599E9AD74D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_2_B12F645A576BB7A1(::System::Boolean& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_B12F645A576BB7A1_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_F17C9717B6FF6772(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_F17C9717B6FF6772_OFFSET))(a1, a2);
	}

	::System::Collections::IEnumerator* Method_2_F7F8016EAE618A49(::System::Action_1<::System::Single>* a1, ::System::Single a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_F7F8016EAE618A49_OFFSET))(this, a1, a2);
	}

	::Foundation::IEnumeratorLoaderNode* Method_2_97368F8170B9AF84_1(::Foundation::IEnumeratorLoader* a1, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* a2)
	{
		return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::Foundation::IEnumeratorLoader*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_97368F8170B9AF84_1_OFFSET))(this, a1, a2);
	}

	static ::System::Collections::IEnumerator* Method_2_92C6D4C022363DAC_4(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_4_OFFSET))(a1);
	}

	::Foundation::ILoader* Method_2_8891042993F02C3D()
	{
		return ((::Foundation::ILoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_8891042993F02C3D_OFFSET))(this);
	}

	::System::String* Method_2_9F2E2B246015406C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_9F2E2B246015406C_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	static ::System::Void Method_2_46CBB98A48243F6B(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_46CBB98A48243F6B_OFFSET))(a1);
	}

	::System::Void Method_2_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_ED79705457B92B5C_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
