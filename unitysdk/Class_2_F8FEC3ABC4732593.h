#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F8FEC3ABC4732593_Struct_2_46A3F15720DA5D2E.h"
#include "unitysdk/Enum_3_0277FE49450CA4D5.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/Enum_3_DE516C6CF47482AF.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_FC34C7AD15A42B48.h"

class Class_1_2214FEECE03C0878;
class Class_1_545352D1BF1C6114;
class Class_1_5FC8ED5FF3A573AF;
class Class_1_621786FDD3002399;
class Class_1_8525B118F1311FA4;
class Class_1_C307CE4961698540;
class Class_1_D091CC614BEA65CF;
class Class_1_D9BAE726F869C3AC;
class Class_1_E237981F46A3942F;
class Class_1_EAC6D5497D42EBB7;
class Class_1_FA793AB1D49D0132;
class Class_2_17EF7F195EE14706;
class Class_2_69DAA12DBAB4BAB6;
class Class_2_69DAA12DBAB4BAB6_1;
class Class_2_98EE7E9B2CE0B1EF;
class Class_2_F8FEC3ABC4732593_Class_1_53C4A549F094DEF6;
class Class_2_F8FEC3ABC4732593_Class_1_5F2AF534298BD49E;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicShowTipsPopWindowController; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIStreamingGamePageController; }
namespace MoleMole { class UIWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F8FEC3ABC4732593_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14402EA0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_05D70E6F4DA30E6F_OFFSET UNITYSDK_OFFSET(0x144061D0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_05F53CC077D9F409_OFFSET UNITYSDK_OFFSET(0x14405610)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_080D5667375425D8_OFFSET UNITYSDK_OFFSET(0x144078C0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_0D025125E9AE757D_OFFSET UNITYSDK_OFFSET(0x14408110)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_0F745A4B55A2F5E9_OFFSET UNITYSDK_OFFSET(0x144044A0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_1D1311D7097AB21C_1_OFFSET UNITYSDK_OFFSET(0x1440AF20)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_1D1311D7097AB21C_OFFSET UNITYSDK_OFFSET(0x144049C0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14408890)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_1FA80F8BF37F7D95_OFFSET UNITYSDK_OFFSET(0x14405AC0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x14406DF0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x14407080)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x14409AD0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_24748FC20F375725_4_OFFSET UNITYSDK_OFFSET(0x1440A5F0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_24748FC20F375725_5_OFFSET UNITYSDK_OFFSET(0x1440A6A0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x14406980)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_25880B0543965A10_OFFSET UNITYSDK_OFFSET(0x14406A80)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_297F286CF1AECDBC_OFFSET UNITYSDK_OFFSET(0x1440B0D0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_2A887DFC7A5BB2CB_1_OFFSET UNITYSDK_OFFSET(0x1440ADC0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0x1440A870)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_2CBD4A976D858C2A_OFFSET UNITYSDK_OFFSET(0x14409F90)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1440C1F0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_31CAC8883DF82F64_OFFSET UNITYSDK_OFFSET(0x14409080)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14407460)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_344D5D047452A8A0_OFFSET UNITYSDK_OFFSET(0x14408CB0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1440A600)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_3C8529ADE3C415DA_OFFSET UNITYSDK_OFFSET(0x14408F00)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_3DEC281D50A248F0_OFFSET UNITYSDK_OFFSET(0x14406D20)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_3FB3D01F50FC6D4E_OFFSET UNITYSDK_OFFSET(0x14404E20)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_430905B2CC88FFE9_OFFSET UNITYSDK_OFFSET(0x14407DB0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x144071E0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_46AA38BC8FBD2E62_OFFSET UNITYSDK_OFFSET(0x144039A0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x14407090)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0x14409AE0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_585E2EA201FDE7ED_OFFSET UNITYSDK_OFFSET(0x14404280)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_5AA5DDE71678F8D4_OFFSET UNITYSDK_OFFSET(0x1440A340)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0x14408AB0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_69C3E41B97DE974B_1_OFFSET UNITYSDK_OFFSET(0x14405BD0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_69C3E41B97DE974B_2_OFFSET UNITYSDK_OFFSET(0x14408E40)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_69C3E41B97DE974B_OFFSET UNITYSDK_OFFSET(0x14405B20)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_743C0505E07FA68E_1_OFFSET UNITYSDK_OFFSET(0x1440AB80)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_743C0505E07FA68E_OFFSET UNITYSDK_OFFSET(0x14406430)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_74FE0F242303E029_OFFSET UNITYSDK_OFFSET(0x14407F90)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_7A7ED566A4835CA7_OFFSET UNITYSDK_OFFSET(0x14404EE0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_7C34BD5B0A8B215F_OFFSET UNITYSDK_OFFSET(0x1440AC30)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_7DB1FC609898B197_OFFSET UNITYSDK_OFFSET(0x14403EB0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_814FF93E6C55D6E7_OFFSET UNITYSDK_OFFSET(0x144095C0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_83D4CC38C9EC5B68_OFFSET UNITYSDK_OFFSET(0x14404B70)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_88D1173390B5F0F0_OFFSET UNITYSDK_OFFSET(0x14406E00)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_88F7E813F08FAE9E_OFFSET UNITYSDK_OFFSET(0x14405F50)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x14406420)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_8C8AA8363D35B04E_OFFSET UNITYSDK_OFFSET(0x1440BB20)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_92E70BF14C1F70A4_OFFSET UNITYSDK_OFFSET(0x14403D30)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14404E80)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_96C2479AFFD2B600_OFFSET UNITYSDK_OFFSET(0x144082C0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_9BE575F778E25FF2_OFFSET UNITYSDK_OFFSET(0x144064E0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_AD2C7CA0E7084276_OFFSET UNITYSDK_OFFSET(0x14404BE0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x14403950)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x14407D00)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14406F40)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_B72B880278342E39_OFFSET UNITYSDK_OFFSET(0x14407520)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_BCB087DFB7399B96_OFFSET UNITYSDK_OFFSET(0x14404890)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_BD5CA65D295B69A9_OFFSET UNITYSDK_OFFSET(0x14408830)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_BDEBD5E1E766ABDE_OFFSET UNITYSDK_OFFSET(0x14406FF0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_BF17C9008346C3AC_OFFSET UNITYSDK_OFFSET(0x14409020)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_BF638AB06F098B75_OFFSET UNITYSDK_OFFSET(0x14408DE0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x1440BCD0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_C47A61DDA4747C86_OFFSET UNITYSDK_OFFSET(0x14408B60)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_C85996579CFA0C7E_OFFSET UNITYSDK_OFFSET(0x14404090)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_CF79D3FA475639E5_OFFSET UNITYSDK_OFFSET(0x1440B140)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x14408270)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_D4F050F618658593_OFFSET UNITYSDK_OFFSET(0x14405C80)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_D94E828E9DA8A315_OFFSET UNITYSDK_OFFSET(0x14406990)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_D9ABCC262D89A636_OFFSET UNITYSDK_OFFSET(0x14409120)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_DA64D40A107DBE32_OFFSET UNITYSDK_OFFSET(0x14405260)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_DA9901C9DA4B4E2F_OFFSET UNITYSDK_OFFSET(0x14409D90)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_DC0E0FB56645A69E_OFFSET UNITYSDK_OFFSET(0x14403890)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x144069E0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_DEFF4C28402EA06F_OFFSET UNITYSDK_OFFSET(0x1440A9D0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_E55523803A1F4584_OFFSET UNITYSDK_OFFSET(0x1440A6B0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_E7E1B6DBFFBAA7F0_OFFSET UNITYSDK_OFFSET(0x14407230)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1440C1E0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x14409100)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x14403900)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_F3CE1CA9D3DB0CDE_OFFSET UNITYSDK_OFFSET(0x1440B820)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_FBA323045B18E661_OFFSET UNITYSDK_OFFSET(0x144088F0)
#define CLASS_2_F8FEC3ABC4732593_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x14408D90)
#define CLASS_2_F8FEC3ABC4732593_ONCREATE_OFFSET UNITYSDK_OFFSET(0x144030E0)
#define CLASS_2_F8FEC3ABC4732593__CTOR_OFFSET UNITYSDK_OFFSET(0x14403580)

inline static constexpr unsigned int Class_2_F8FEC3ABC4732593_TypeDefinitionIndex = 79609;

class Class_2_F8FEC3ABC4732593 : public ::Foundation::SingletonDisposable_1<::Class_2_F8FEC3ABC4732593*>
{
public:
	::Class_2_F8FEC3ABC4732593_Class_1_53C4A549F094DEF6* Field_2_23; // 0x10
	::Class_1_8525B118F1311FA4* Field_2_9; // 0x18
	::Class_2_69DAA12DBAB4BAB6* Field_2_5; // 0x20
	::Class_1_EAC6D5497D42EBB7* Field_2_1; // 0x28
	::MoleMole::UIBaseController* Field_2_12; // 0x30
	::Class_2_98EE7E9B2CE0B1EF* Field_2_11; // 0x38
	::Class_1_2214FEECE03C0878* Field_2_8; // 0x40
	::System::Collections::Generic::List_1<::Class_1_545352D1BF1C6114*>* Field_2_6; // 0x48
	::Class_1_621786FDD3002399* Field_2_16; // 0x50
	::Class_1_5FC8ED5FF3A573AF* Field_2_15; // 0x58
	::Class_2_69DAA12DBAB4BAB6_1* Field_2_4; // 0x60
	::MoleMole::UIBaseController* Field_2_19; // 0x68
	::Class_1_C307CE4961698540* Field_2_10; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* Field_2_17; // 0x78
	::System::Collections::Generic::List_1<::Class_2_F8FEC3ABC4732593_Class_1_5F2AF534298BD49E*>* Field_2_7; // 0x80
	::Class_1_E237981F46A3942F* Field_2_0; // 0x88
	::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* Field_2_18; // 0x90
	::System::Boolean Field_2_13; // 0x98
	::System::Boolean Field_2_2; // 0x99
	::System::Boolean Field_2_14; // 0x9A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_ONCREATE_OFFSET))(this);
	}

	::System::UInt32 Method_2_DC0E0FB56645A69E(::MoleMole::UIBaseController* a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::MoleMole::UIBaseController*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_DC0E0FB56645A69E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_46AA38BC8FBD2E62(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_46AA38BC8FBD2E62_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_92E70BF14C1F70A4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_92E70BF14C1F70A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB1FC609898B197(::Enum_3_DBF2701137F18AA6 a1, ::MoleMole::UIWidgetController* a2, ::UnityEngine::Transform* a3, ::MoleMole::UIControllerContextBase* a4, ::Class_1_FA793AB1D49D0132* a5, ::Class_2_17EF7F195EE14706* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DBF2701137F18AA6, ::MoleMole::UIWidgetController*, ::UnityEngine::Transform*, ::MoleMole::UIControllerContextBase*, ::Class_1_FA793AB1D49D0132*, ::Class_2_17EF7F195EE14706*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_7DB1FC609898B197_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_585E2EA201FDE7ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_585E2EA201FDE7ED_OFFSET))(this);
	}

	::System::Void Method_2_0F745A4B55A2F5E9(::System::Boolean a1, ::System::Predicate_1<::MoleMole::UIBaseController*>* a2, ::System::Action_1<::MoleMole::UIBaseController*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Predicate_1<::MoleMole::UIBaseController*>*, ::System::Action_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_0F745A4B55A2F5E9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1D1311D7097AB21C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_1D1311D7097AB21C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AD2C7CA0E7084276(::Enum_3_DBF2701137F18AA6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_DBF2701137F18AA6))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_AD2C7CA0E7084276_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FB3D01F50FC6D4E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_3FB3D01F50FC6D4E_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_7A7ED566A4835CA7(::Enum_3_DBF2701137F18AA6 a1, ::MoleMole::UIWindowController* a2, ::Class_2_17EF7F195EE14706* a3, ::Class_1_FA793AB1D49D0132* a4, ::MoleMole::UIControllerContextBase* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DBF2701137F18AA6, ::MoleMole::UIWindowController*, ::Class_2_17EF7F195EE14706*, ::Class_1_FA793AB1D49D0132*, ::MoleMole::UIControllerContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_7A7ED566A4835CA7_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_D091CC614BEA65CF* Method_2_1FA80F8BF37F7D95(::System::Int32 a1)
	{
		return ((::Class_1_D091CC614BEA65CF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_1FA80F8BF37F7D95_OFFSET))(this, a1);
	}

	::System::Void Method_2_69C3E41B97DE974B(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_69C3E41B97DE974B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_69C3E41B97DE974B_1(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_69C3E41B97DE974B_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D4F050F618658593(::System::Boolean a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_D4F050F618658593_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DA64D40A107DBE32(::Class_2_17EF7F195EE14706* a1, ::System::Boolean a2, ::MoleMole::UIControllerContextBase* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_17EF7F195EE14706*, ::System::Boolean, ::MoleMole::UIControllerContextBase*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_DA64D40A107DBE32_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_88F7E813F08FAE9E(::MoleMole::UIWindowController* a1, ::MoleMole::UIWindowController* a2, ::UnityEngine::Transform* a3, ::Class_1_FA793AB1D49D0132* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_88F7E813F08FAE9E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_621786FDD3002399* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_621786FDD3002399*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_D091CC614BEA65CF* Method_2_743C0505E07FA68E(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::Class_1_D091CC614BEA65CF*(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_743C0505E07FA68E_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::UIStreamingGamePageController* Method_2_9BE575F778E25FF2(::System::Boolean a1)
	{
		return ((::MoleMole::UIStreamingGamePageController*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_9BE575F778E25FF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_83D4CC38C9EC5B68(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_83D4CC38C9EC5B68_OFFSET))(this, a1, a2);
	}

	::Class_1_E237981F46A3942F* Method_2_24748FC20F375725()
	{
		return ((::Class_1_E237981F46A3942F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_05D70E6F4DA30E6F(::MoleMole::UIWindowController* a1, ::Class_1_FA793AB1D49D0132* a2, ::UnityEngine::Transform*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::Class_1_FA793AB1D49D0132*, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_05D70E6F4DA30E6F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_D94E828E9DA8A315()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_D94E828E9DA8A315_OFFSET))(this);
	}

	::System::Boolean Method_2_DE45EA3A177BC33B(::Class_1_FA793AB1D49D0132*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA793AB1D49D0132*&))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_25880B0543965A10(::System::Boolean& a1, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* a2, ::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* a3)
	{
		return ((::System::Void(*)(::System::Boolean&, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*, ::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_25880B0543965A10_OFFSET))(a1, a2, a3);
	}

	::Class_1_C307CE4961698540* Method_2_24748FC20F375725_1()
	{
		return ((::Class_1_C307CE4961698540*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_2_C85996579CFA0C7E(::MoleMole::UIBaseController* a1, ::MoleMole::UIBaseController* a2, ::Class_1_FA793AB1D49D0132* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::MoleMole::UIBaseController*, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_C85996579CFA0C7E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_88D1173390B5F0F0(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_88D1173390B5F0F0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_BDEBD5E1E766ABDE(::System::Boolean a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_BDEBD5E1E766ABDE_OFFSET))(this, a1, a2);
	}

	::Class_1_8525B118F1311FA4* Method_2_24748FC20F375725_2()
	{
		return ((::Class_1_8525B118F1311FA4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* Method_2_E7E1B6DBFFBAA7F0()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_E7E1B6DBFFBAA7F0_OFFSET))(this);
	}

	::System::Void Method_2_B72B880278342E39(::Enum_3_DBF2701137F18AA6 a1, ::MoleMole::UIWindowController* a2, ::MoleMole::UIControllerContextBase* a3, ::Class_1_FA793AB1D49D0132* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DBF2701137F18AA6, ::MoleMole::UIWindowController*, ::MoleMole::UIControllerContextBase*, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_B72B880278342E39_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_080D5667375425D8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_080D5667375425D8_OFFSET))(this);
	}

	::System::Void Method_2_BCB087DFB7399B96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_BCB087DFB7399B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_2_430905B2CC88FFE9(::Enum_3_DBF2701137F18AA6 a1, ::MoleMole::UIWidgetController* a2, ::Class_1_FA793AB1D49D0132* a3, ::Class_2_17EF7F195EE14706* a4, ::UnityEngine::Transform* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DBF2701137F18AA6, ::MoleMole::UIWidgetController*, ::Class_1_FA793AB1D49D0132*, ::Class_2_17EF7F195EE14706*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_430905B2CC88FFE9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_74FE0F242303E029(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_74FE0F242303E029_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D025125E9AE757D(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_0D025125E9AE757D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::UIWindowController*, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*>* Method_2_96C2479AFFD2B600()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::UIWindowController*, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_96C2479AFFD2B600_OFFSET))(this);
	}

	::System::Void Method_2_BD5CA65D295B69A9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_BD5CA65D295B69A9_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_3DEC281D50A248F0(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_3DEC281D50A248F0_OFFSET))(a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_FBA323045B18E661(::MoleMole::UIBaseController* a1, ::MoleMole::UIBaseController* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_FBA323045B18E661_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void Method_2_C47A61DDA4747C86(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_C47A61DDA4747C86_OFFSET))(this, a1);
	}

	::System::Void Method_2_344D5D047452A8A0(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_344D5D047452A8A0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_2_BF638AB06F098B75(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_BF638AB06F098B75_OFFSET))(this, a1);
	}

	::System::Void Method_2_69C3E41B97DE974B_2(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_69C3E41B97DE974B_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_3C8529ADE3C415DA(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_3C8529ADE3C415DA_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF17C9008346C3AC(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_BF17C9008346C3AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_31CAC8883DF82F64(::MoleMole::UIWindowController* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_31CAC8883DF82F64_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_D9ABCC262D89A636(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_D9ABCC262D89A636_OFFSET))(this, a1);
	}

	::System::Void Method_2_814FF93E6C55D6E7(::MoleMole::UIWindowController* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_814FF93E6C55D6E7_OFFSET))(this, a1, a2);
	}

	::Class_1_621786FDD3002399* Method_2_24748FC20F375725_3()
	{
		return ((::Class_1_621786FDD3002399*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_2_05F53CC077D9F409(::MoleMole::UIBaseController* a1, ::MoleMole::UIControllerContextBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_05F53CC077D9F409_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52C18C0DA8AC23E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_52C18C0DA8AC23E5_OFFSET))(this);
	}

	::System::Void Method_2_DA9901C9DA4B4E2F(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_DA9901C9DA4B4E2F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2CBD4A976D858C2A(::Enum_3_DBF2701137F18AA6 a1, ::Class_1_FA793AB1D49D0132* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_DBF2701137F18AA6, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_2CBD4A976D858C2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5AA5DDE71678F8D4(::MoleMole::EUILayoutPlatform a1, ::MoleMole::EUILayoutPlatform a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EUILayoutPlatform, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_5AA5DDE71678F8D4_OFFSET))(this, a1, a2);
	}

	::Class_1_5FC8ED5FF3A573AF* Method_2_24748FC20F375725_4()
	{
		return ((::Class_1_5FC8ED5FF3A573AF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_24748FC20F375725_4_OFFSET))(this);
	}

	::Class_1_FA793AB1D49D0132* Method_2_358A144584A5DBFC()
	{
		return ((::Class_1_FA793AB1D49D0132*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_358A144584A5DBFC_OFFSET))(this);
	}

	::Class_1_EAC6D5497D42EBB7* Method_2_24748FC20F375725_5()
	{
		return ((::Class_1_EAC6D5497D42EBB7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_24748FC20F375725_5_OFFSET))(this);
	}

	::System::Void Method_2_E55523803A1F4584(::MoleMole::UIWindowController* a1, ::MoleMole::UIWindowController* a2, ::UnityEngine::Transform* a3, ::MoleMole::UIControllerContextBase* a4, ::Class_1_FA793AB1D49D0132* a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::MoleMole::UIControllerContextBase*, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_E55523803A1F4584_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_2A887DFC7A5BB2CB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_2A887DFC7A5BB2CB_OFFSET))(this);
	}

	::System::Void Method_2_DEFF4C28402EA06F(::Struct_2_FC34C7AD15A42B48 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FC34C7AD15A42B48, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_DEFF4C28402EA06F_OFFSET))(this, a1, a2);
	}

	::Class_1_D091CC614BEA65CF* Method_2_743C0505E07FA68E_1(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::Class_1_D091CC614BEA65CF*(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_743C0505E07FA68E_1_OFFSET))(this, a1, a2, a3);
	}

	::Enum_3_0277FE49450CA4D5 Method_2_7C34BD5B0A8B215F()
	{
		return ((::Enum_3_0277FE49450CA4D5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_7C34BD5B0A8B215F_OFFSET))(this);
	}

	::System::Boolean Method_2_2A887DFC7A5BB2CB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_2A887DFC7A5BB2CB_1_OFFSET))(this);
	}

	::System::Void Method_2_1D1311D7097AB21C_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_1D1311D7097AB21C_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_297F286CF1AECDBC(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2, ::MoleMole::UIControllerContextBase* a3, ::Class_1_FA793AB1D49D0132* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::MoleMole::UIControllerContextBase*, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_297F286CF1AECDBC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CF79D3FA475639E5(::MoleMole::UIWindowController* a1, ::Enum_3_DBF2701137F18AA6 a2, ::Class_2_17EF7F195EE14706* a3, ::Class_1_FA793AB1D49D0132* a4, ::MoleMole::UIControllerContextBase* a5, ::System::Boolean a6, ::MoleMole::UIWindowController* a7, ::UnityEngine::Transform* a8)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::Enum_3_DBF2701137F18AA6, ::Class_2_17EF7F195EE14706*, ::Class_1_FA793AB1D49D0132*, ::MoleMole::UIControllerContextBase*, ::System::Boolean, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_CF79D3FA475639E5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::UIWindowController*, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*>* Method_2_F3CE1CA9D3DB0CDE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::UIWindowController*, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_F3CE1CA9D3DB0CDE_OFFSET))(this);
	}

	::System::Void Method_2_8C8AA8363D35B04E(::MoleMole::UIWidgetController* a1, ::MoleMole::UIBaseController* a2, ::Class_1_FA793AB1D49D0132* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*, ::MoleMole::UIBaseController*, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_8C8AA8363D35B04E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_BFB00779E460D7A3_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}
};
