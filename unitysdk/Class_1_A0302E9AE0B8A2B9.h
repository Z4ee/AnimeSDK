#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectPoolInUseState.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/RPG/Client/PoolGameObjectInstantiateStrategy.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_278;
class Class_0_16E4307DCC419505_573;
class Class_1_824B5C4036A7D338;
class Class_1_A067D82B1A7452F6;
class Class_1_B86A322FA0B885AA;
class Class_1_EA7DB942B013E54C;
class Class_1_ED163CCD8716BD10;
class Class_3_F784053AC1963631_1;
namespace RPG { template <typename T> class RingBuffer_1; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A0302E9AE0B8A2B9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE467390)
#define CLASS_1_A0302E9AE0B8A2B9_GET_AUTOSETROOTACTIVE_OFFSET UNITYSDK_OFFSET(0xE46E920)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_02517D419AB99D6F_OFFSET UNITYSDK_OFFSET(0xE467EC0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_1107D58E9DAAA01A_OFFSET UNITYSDK_OFFSET(0xE46B130)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0xE46E6A0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0xE46E840)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xE46E830)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_17B8FCE90C450A51_OFFSET UNITYSDK_OFFSET(0xE46A820)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xE46E4A0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_1B817A008C7D5B52_OFFSET UNITYSDK_OFFSET(0xE467B70)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_1C79FE5B875F532B_OFFSET UNITYSDK_OFFSET(0xE46C690)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xE46E870)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xE46E430)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_1F7FE07FD068BC29_OFFSET UNITYSDK_OFFSET(0xE46E9B0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0xE46E410)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0xE46E9D0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0xE46E9E0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xE46E400)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_26890715802F96E6_OFFSET UNITYSDK_OFFSET(0xE46B380)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_295FB9EEF13411F1_OFFSET UNITYSDK_OFFSET(0xE46CF30)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_303188638B0927E1_OFFSET UNITYSDK_OFFSET(0xE46A1D0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0xE46E740)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0xE46E9A0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0xE469D00)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_51FED5AA8A54AA05_OFFSET UNITYSDK_OFFSET(0xE46A410)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_576EC3A3DFB19F86_OFFSET UNITYSDK_OFFSET(0xE46A160)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0xE469BD0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_5D1EA33A9A853218_OFFSET UNITYSDK_OFFSET(0xE468340)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_5D60A34D156973CF_OFFSET UNITYSDK_OFFSET(0xE469620)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_653DD7F9F04DC8CC_OFFSET UNITYSDK_OFFSET(0xE468D90)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_663E7A0F03579613_OFFSET UNITYSDK_OFFSET(0xE4691B0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_68E2DF01C145CDB8_OFFSET UNITYSDK_OFFSET(0xE467E40)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_6F4A6B5CE800C615_OFFSET UNITYSDK_OFFSET(0xE46E940)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_709E9C02EF9B7181_OFFSET UNITYSDK_OFFSET(0xE46C500)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_72DE97951083FCD8_OFFSET UNITYSDK_OFFSET(0xE46E850)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0xE46D900)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_75A71D68F8E038BC_OFFSET UNITYSDK_OFFSET(0xE46A300)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xE46DE80)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_78E88B7CB3CC1E2A_OFFSET UNITYSDK_OFFSET(0xE467DE0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_7BFA5160C22880CC_OFFSET UNITYSDK_OFFSET(0xE46E3B0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0xE467330)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0xE46D700)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_95780ED94B90ED36_2_OFFSET UNITYSDK_OFFSET(0xE46E600)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_95780ED94B90ED36_3_OFFSET UNITYSDK_OFFSET(0xE46E650)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xE46A7C0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_96225BC9768E9043_OFFSET UNITYSDK_OFFSET(0xE467150)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_977C0B8602816DB8_OFFSET UNITYSDK_OFFSET(0xE4698B0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_9A01B7CD7D956852_OFFSET UNITYSDK_OFFSET(0xE46BDC0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xE4682F0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_9F8F06BADA91EB33_1_OFFSET UNITYSDK_OFFSET(0xE467D80)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_9F8F06BADA91EB33_OFFSET UNITYSDK_OFFSET(0xE467D20)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_A04AF09ED0361CBB_OFFSET UNITYSDK_OFFSET(0xE46E9C0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xE46B290)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_A29349AFA1B1179C_OFFSET UNITYSDK_OFFSET(0xE46D030)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_AB8521C9B927929E_OFFSET UNITYSDK_OFFSET(0xE46D1C0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0xE4689E0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0xE46E500)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_AD7E7C69CDA4B78E_OFFSET UNITYSDK_OFFSET(0xE46D7E0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xE4676A0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xE46C5D0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_BC91AD63E4526E2A_OFFSET UNITYSDK_OFFSET(0xE46A4A0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_BD7630A6DDF48B33_OFFSET UNITYSDK_OFFSET(0xE46DFF0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_C06BE1E2AA0B797F_OFFSET UNITYSDK_OFFSET(0xE46E170)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xE46E5F0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xE46E910)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0xE46D350)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xE467510)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xE467560)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xE46C640)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE4674D0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_CB4E65B6093E4CBE_OFFSET UNITYSDK_OFFSET(0xE46EA60)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_D14D1905029746A4_OFFSET UNITYSDK_OFFSET(0xE469E70)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0xE46E980)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0xE46E960)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xE46D960)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_DF8B0D041E3FE3D7_OFFSET UNITYSDK_OFFSET(0xE46BC10)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_E42BDF5C4CEA29D7_OFFSET UNITYSDK_OFFSET(0xE46DF60)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_E73A89A53EDEB864_OFFSET UNITYSDK_OFFSET(0xE46E9F0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_EA1866246B9F643C_OFFSET UNITYSDK_OFFSET(0xE468240)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xE469BC0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xE46E950)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xE46E420)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0xE46E7C0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_F4ABEEAC4B59110F_OFFSET UNITYSDK_OFFSET(0xE46DFA0)
#define CLASS_1_A0302E9AE0B8A2B9_METHOD_1_FFECB8E56FD1699E_OFFSET UNITYSDK_OFFSET(0xE4675B0)
#define CLASS_1_A0302E9AE0B8A2B9_SET_AUTOSETROOTACTIVE_OFFSET UNITYSDK_OFFSET(0xE46E930)
#define CLASS_1_A0302E9AE0B8A2B9__CCTOR_OFFSET UNITYSDK_OFFSET(0xE46EB10)
#define CLASS_1_A0302E9AE0B8A2B9__CTOR_OFFSET UNITYSDK_OFFSET(0xE466FF0)

inline static constexpr unsigned int Class_1_A0302E9AE0B8A2B9_TypeDefinitionIndex = 55505;

class Class_1_A0302E9AE0B8A2B9 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0302E9AE0B8A2B9_TypeDefinitionIndex)->GetStaticField(0x27D00);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0302E9AE0B8A2B9_TypeDefinitionIndex)->GetStaticField(0x27D08);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_2()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0302E9AE0B8A2B9_TypeDefinitionIndex)->GetStaticField(0x27D10);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_3()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0302E9AE0B8A2B9_TypeDefinitionIndex)->GetStaticField(0x27D18);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_4()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0302E9AE0B8A2B9_TypeDefinitionIndex)->GetStaticField(0x27D20);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_5()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0302E9AE0B8A2B9_TypeDefinitionIndex)->GetStaticField(0x27D28);
	}
	// static const ::System::Single Field_1_6; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Field_1_7; // 0x10
	::RPG::Client::IAssetOperation* Field_1_8; // 0x18
	::System::String* Field_1_9; // 0x20
	::Class_1_B86A322FA0B885AA* Field_1_10; // 0x28
	::Class_1_A0302E9AE0B8A2B9* Field_1_11; // 0x30
	::System::String* Field_1_12; // 0x38
	::Class_1_ED163CCD8716BD10* Field_1_13; // 0x40
	::Class_3_F784053AC1963631_1* Field_1_14; // 0x48
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_1_824B5C4036A7D338*>* Field_1_15; // 0x50
	::UnityEngine::Object* Field_1_16; // 0x58
	::Class_1_A0302E9AE0B8A2B9* Field_1_17; // 0x60
	::Class_1_B86A322FA0B885AA* Field_1_18; // 0x68
	::RPG::Client::IAssetOperation* Field_1_19; // 0x70
	::Class_1_A067D82B1A7452F6* Field_1_20; // 0x78
	::Class_1_EA7DB942B013E54C* Field_1_21; // 0x80
	::UnityEngine::Transform* Field_1_22; // 0x88
	::RPG::RingBuffer_1<::Class_1_824B5C4036A7D338*>* Field_1_23; // 0x90
	::UnityEngine::Quaternion Field_1_24; // 0x98
	::System::Int32 Field_1_25; // 0xA8
	::System::Single Field_1_26; // 0xAC
	::System::Boolean Field_1_27; // 0xB0
	::System::Boolean Field_1_28; // 0xB1
	::System::Boolean Field_1_29; // 0xB2
	::System::Boolean Field_1_30; // 0xB3
	::UnityEngine::Vector3 Field_1_31; // 0xB4
	::System::Int32 Field_1_32; // 0xC0
	::System::Int32 Field_1_33; // 0xC4
	::System::Boolean Field_1_34; // 0xC8
	::RPG::Client::GameObjectPoolInUseState Field_1_35; // 0xC9
	::System::Boolean _AutoSetRootActive_k__BackingField; // 0xCA
	::System::Boolean Field_1_37; // 0xCB
	::System::Int32 Field_1_38; // 0xCC
	::System::Boolean Field_1_39; // 0xD0
	::System::Boolean Field_1_40; // 0xD1
	::System::Boolean Field_1_41; // 0xD2
	::System::Boolean Field_1_42; // 0xD3
	::System::Boolean Field_1_43; // 0xD4
	::System::Boolean Field_1_44; // 0xD5
	::UnityEngine::Vector3 Field_1_45; // 0xD8
	::System::UInt32 Field_1_46; // 0xE4
	::RPG::Client::PoolGameObjectInstantiateStrategy Field_1_47; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9__CCTOR_OFFSET))();
	}

	static ::Class_1_A0302E9AE0B8A2B9* Method_1_96225BC9768E9043(::Class_1_EA7DB942B013E54C* a1, ::Class_1_A067D82B1A7452F6* a2, ::System::String* a3)
	{
		return ((::Class_1_A0302E9AE0B8A2B9*(*)(::Class_1_EA7DB942B013E54C*, ::Class_1_A067D82B1A7452F6*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_96225BC9768E9043_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_FFECB8E56FD1699E(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_FFECB8E56FD1699E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9F8F06BADA91EB33(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_9F8F06BADA91EB33_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F8F06BADA91EB33_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_9F8F06BADA91EB33_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_78E88B7CB3CC1E2A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_78E88B7CB3CC1E2A_OFFSET))(this, a1);
	}

	::System::Void Method_1_68E2DF01C145CDB8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_68E2DF01C145CDB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA1866246B9F643C(::System::Int32 a1, ::Class_3_F784053AC1963631_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_F784053AC1963631_1*))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_EA1866246B9F643C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Boolean Method_1_5D1EA33A9A853218(::Class_1_B86A322FA0B885AA* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B86A322FA0B885AA*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_5D1EA33A9A853218_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_02517D419AB99D6F(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_02517D419AB99D6F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Void Method_1_D14D1905029746A4(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_D14D1905029746A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>* Method_1_576EC3A3DFB19F86()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_576EC3A3DFB19F86_OFFSET))(this);
	}

	static ::System::Boolean Method_1_303188638B0927E1(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_303188638B0927E1_OFFSET))(a1);
	}

	::System::Boolean Method_1_75A71D68F8E038BC(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_75A71D68F8E038BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_51FED5AA8A54AA05(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_51FED5AA8A54AA05_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_BC91AD63E4526E2A(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_BC91AD63E4526E2A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_17B8FCE90C450A51(::Class_0_16E4307DCC419505_573* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_573*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_17B8FCE90C450A51_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1107D58E9DAAA01A(::Class_0_16E4307DCC419505_573* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_573*))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_1107D58E9DAAA01A_OFFSET))(this, a1);
	}

	::System::Void Method_1_26890715802F96E6(::System::Action_1<::UnityEngine::GameObject*>* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_26890715802F96E6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DF8B0D041E3FE3D7(::System::Action_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_DF8B0D041E3FE3D7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9A01B7CD7D956852()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_9A01B7CD7D956852_OFFSET))(this);
	}

	::System::Void Method_1_709E9C02EF9B7181(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_709E9C02EF9B7181_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Boolean Method_1_1C79FE5B875F532B(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_1C79FE5B875F532B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_295FB9EEF13411F1(::System::Boolean& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_295FB9EEF13411F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A29349AFA1B1179C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_A29349AFA1B1179C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AB8521C9B927929E(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_AB8521C9B927929E_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Int32 Method_1_AD7E7C69CDA4B78E(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_AD7E7C69CDA4B78E_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_1B817A008C7D5B52(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_1B817A008C7D5B52_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_1_824B5C4036A7D338*>* Method_1_E42BDF5C4CEA29D7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_1_824B5C4036A7D338*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_E42BDF5C4CEA29D7_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::Class_1_824B5C4036A7D338*>* Method_1_F4ABEEAC4B59110F()
	{
		return ((::System::Collections::Generic::IList_1<::Class_1_824B5C4036A7D338*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_F4ABEEAC4B59110F_OFFSET))(this);
	}

	::Class_1_824B5C4036A7D338* Method_1_BD7630A6DDF48B33(::UnityEngine::GameObject* a1)
	{
		return ((::Class_1_824B5C4036A7D338*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_BD7630A6DDF48B33_OFFSET))(this, a1);
	}

	::Class_1_824B5C4036A7D338* Method_1_663E7A0F03579613(::UnityEngine::Transform* a1)
	{
		return ((::Class_1_824B5C4036A7D338*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_663E7A0F03579613_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_653DD7F9F04DC8CC(::UnityEngine::Transform* a1, ::Class_1_824B5C4036A7D338*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::Class_1_824B5C4036A7D338*&))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_653DD7F9F04DC8CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_977C0B8602816DB8(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3, ::Class_1_824B5C4036A7D338* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::Class_1_824B5C4036A7D338*))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_977C0B8602816DB8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5D60A34D156973CF(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_5D60A34D156973CF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Boolean Method_1_C06BE1E2AA0B797F(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_C06BE1E2AA0B797F_OFFSET))(this, a1);
	}

	::RPG::Client::GameObjectPoolUsage Method_1_7BFA5160C22880CC()
	{
		return ((::RPG::Client::GameObjectPoolUsage(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_7BFA5160C22880CC_OFFSET))(this);
	}

	::Class_1_EA7DB942B013E54C* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EA7DB942B013E54C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Class_1_A067D82B1A7452F6* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_A067D82B1A7452F6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_ABFE6A357B89C69A_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_95780ED94B90ED36_2_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_95780ED94B90ED36_3_OFFSET))(this);
	}

	::System::Single Method_1_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_124E7DAB85EAFECD_OFFSET))(this);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_72DE97951083FCD8()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_72DE97951083FCD8_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean get_AutoSetRootActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_GET_AUTOSETROOTACTIVE_OFFSET))(this);
	}

	::System::Void set_AutoSetRootActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_SET_AUTOSETROOTACTIVE_OFFSET))(this, a1);
	}

	::RPG::Client::IAssetOperation* Method_1_6F4A6B5CE800C615()
	{
		return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_6F4A6B5CE800C615_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_413F493333BF3391_OFFSET))(this);
	}

	::RPG::Client::PoolGameObjectInstantiateStrategy Method_1_1F7FE07FD068BC29()
	{
		return ((::RPG::Client::PoolGameObjectInstantiateStrategy(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_1F7FE07FD068BC29_OFFSET))(this);
	}

	::RPG::Client::GameObjectPoolInUseState Method_1_A04AF09ED0361CBB()
	{
		return ((::RPG::Client::GameObjectPoolInUseState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_A04AF09ED0361CBB_OFFSET))(this);
	}

	::Class_1_A0302E9AE0B8A2B9* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_A0302E9AE0B8A2B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::Class_1_A0302E9AE0B8A2B9* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_A0302E9AE0B8A2B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_1_E73A89A53EDEB864(::Class_1_A0302E9AE0B8A2B9*& a1, ::Class_1_A0302E9AE0B8A2B9*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*&, ::Class_1_A0302E9AE0B8A2B9*&))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_E73A89A53EDEB864_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CB4E65B6093E4CBE(::Class_1_A0302E9AE0B8A2B9*& a1, ::Class_1_A0302E9AE0B8A2B9*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*&, ::Class_1_A0302E9AE0B8A2B9*&))((::PBYTE)hIl2Cpp + CLASS_1_A0302E9AE0B8A2B9_METHOD_1_CB4E65B6093E4CBE_OFFSET))(this, a1, a2);
	}
};
