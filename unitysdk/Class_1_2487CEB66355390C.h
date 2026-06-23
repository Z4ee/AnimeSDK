#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4D9CF89F354D176D.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/BubbleGraphStruct.h"
#include "unitysdk/MoleMole/BubbleSpeakerPair.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/Struct_2_9A57456E759DE2E2.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/Struct_2_B76C9DBDAECC6C19.h"
#include "unitysdk/Struct_2_E89D96144D6E93F8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_291;
class Class_1_1BDCF298D6EFEE00;
class Class_1_DD623DBDE484C8A1;
class Class_3_24D8B6D1AB5590E1;
class Class_3_631700BC8A8FBE1D;
namespace MoleMole { class BubbleGroupPlayGraphContent; }
namespace MoleMole::Config { class InputEnableInfo; }
namespace MoleMole::FlowCanvas::Nodes { class LDSetInLevelStateGroup_StateGroupKeyValue; }
namespace SimpleJSON { class JSONData; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2487CEB66355390C_METHOD_1_02110AFACD46321D_OFFSET UNITYSDK_OFFSET(0xE7FEC30)
#define CLASS_1_2487CEB66355390C_METHOD_1_03304FC2C74D87BF_OFFSET UNITYSDK_OFFSET(0xE802C60)
#define CLASS_1_2487CEB66355390C_METHOD_1_03A3B1B64B738321_OFFSET UNITYSDK_OFFSET(0xE807600)
#define CLASS_1_2487CEB66355390C_METHOD_1_04D7CB89AE1BD8CC_OFFSET UNITYSDK_OFFSET(0xE804450)
#define CLASS_1_2487CEB66355390C_METHOD_1_0738DF955F916A03_OFFSET UNITYSDK_OFFSET(0xE80C0C0)
#define CLASS_1_2487CEB66355390C_METHOD_1_0C6BD67C00219930_OFFSET UNITYSDK_OFFSET(0xE7FFCB0)
#define CLASS_1_2487CEB66355390C_METHOD_1_147680E6F710B12B_OFFSET UNITYSDK_OFFSET(0xE805A30)
#define CLASS_1_2487CEB66355390C_METHOD_1_1CABB44054C418CA_OFFSET UNITYSDK_OFFSET(0xE806B30)
#define CLASS_1_2487CEB66355390C_METHOD_1_1D66C318E9C03DAF_OFFSET UNITYSDK_OFFSET(0xE80C410)
#define CLASS_1_2487CEB66355390C_METHOD_1_1DCD62256B637F28_OFFSET UNITYSDK_OFFSET(0xE807900)
#define CLASS_1_2487CEB66355390C_METHOD_1_1FC7B5882DD76A99_OFFSET UNITYSDK_OFFSET(0xE8061D0)
#define CLASS_1_2487CEB66355390C_METHOD_1_218051E040BA4A9A_OFFSET UNITYSDK_OFFSET(0xE804510)
#define CLASS_1_2487CEB66355390C_METHOD_1_277FF8C3F08388DF_OFFSET UNITYSDK_OFFSET(0xE80E2A0)
#define CLASS_1_2487CEB66355390C_METHOD_1_2B04A2E92B310EB5_OFFSET UNITYSDK_OFFSET(0xE808C70)
#define CLASS_1_2487CEB66355390C_METHOD_1_2CA9F428243CCD7F_OFFSET UNITYSDK_OFFSET(0xE808AB0)
#define CLASS_1_2487CEB66355390C_METHOD_1_2D4B91B5A52C2AAF_OFFSET UNITYSDK_OFFSET(0xE80D560)
#define CLASS_1_2487CEB66355390C_METHOD_1_3070509B5468E6BA_OFFSET UNITYSDK_OFFSET(0xE801680)
#define CLASS_1_2487CEB66355390C_METHOD_1_33B8E33B5E87C0D0_OFFSET UNITYSDK_OFFSET(0xE8031C0)
#define CLASS_1_2487CEB66355390C_METHOD_1_35DB148240DECE0B_OFFSET UNITYSDK_OFFSET(0xE80EA50)
#define CLASS_1_2487CEB66355390C_METHOD_1_3780E249ADC9941B_OFFSET UNITYSDK_OFFSET(0xE8024C0)
#define CLASS_1_2487CEB66355390C_METHOD_1_389C52835F83E3DE_OFFSET UNITYSDK_OFFSET(0xE808B90)
#define CLASS_1_2487CEB66355390C_METHOD_1_3B7875C93242C562_OFFSET UNITYSDK_OFFSET(0xE8014E0)
#define CLASS_1_2487CEB66355390C_METHOD_1_3C67675E31A9C0ED_OFFSET UNITYSDK_OFFSET(0xE8082B0)
#define CLASS_1_2487CEB66355390C_METHOD_1_46FC2E8A0B3CB849_OFFSET UNITYSDK_OFFSET(0xE80A1A0)
#define CLASS_1_2487CEB66355390C_METHOD_1_4A7494391FDCA1BE_OFFSET UNITYSDK_OFFSET(0xE7FFE50)
#define CLASS_1_2487CEB66355390C_METHOD_1_4ACD85466CC967E2_OFFSET UNITYSDK_OFFSET(0xE800C30)
#define CLASS_1_2487CEB66355390C_METHOD_1_4B17253C5AF11F8C_OFFSET UNITYSDK_OFFSET(0xE80FAB0)
#define CLASS_1_2487CEB66355390C_METHOD_1_4FBF339EA02B05CE_OFFSET UNITYSDK_OFFSET(0xE808110)
#define CLASS_1_2487CEB66355390C_METHOD_1_546D870155BF59DD_OFFSET UNITYSDK_OFFSET(0xE80C980)
#define CLASS_1_2487CEB66355390C_METHOD_1_55C2C9FBEB29026F_OFFSET UNITYSDK_OFFSET(0xE80FE10)
#define CLASS_1_2487CEB66355390C_METHOD_1_561C7E7087EE3C02_OFFSET UNITYSDK_OFFSET(0xE805BD0)
#define CLASS_1_2487CEB66355390C_METHOD_1_57C58B395A98747D_OFFSET UNITYSDK_OFFSET(0xE804E10)
#define CLASS_1_2487CEB66355390C_METHOD_1_5BDB884892E56CA0_OFFSET UNITYSDK_OFFSET(0xE7FF800)
#define CLASS_1_2487CEB66355390C_METHOD_1_5C350D1C5088D904_OFFSET UNITYSDK_OFFSET(0xE80B2F0)
#define CLASS_1_2487CEB66355390C_METHOD_1_64AF35DB7FDE4265_OFFSET UNITYSDK_OFFSET(0xE8065C0)
#define CLASS_1_2487CEB66355390C_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0xE7FD180)
#define CLASS_1_2487CEB66355390C_METHOD_1_6B571472790A9B28_OFFSET UNITYSDK_OFFSET(0xE80DC30)
#define CLASS_1_2487CEB66355390C_METHOD_1_6B8F563AB1F7F850_OFFSET UNITYSDK_OFFSET(0xE809BA0)
#define CLASS_1_2487CEB66355390C_METHOD_1_6D6590940D4DA123_OFFSET UNITYSDK_OFFSET(0xE805420)
#define CLASS_1_2487CEB66355390C_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0xE7FEA10)
#define CLASS_1_2487CEB66355390C_METHOD_1_701F9AE565AE99A6_OFFSET UNITYSDK_OFFSET(0xE802E00)
#define CLASS_1_2487CEB66355390C_METHOD_1_7048E5EA5F158616_OFFSET UNITYSDK_OFFSET(0xE80A9D0)
#define CLASS_1_2487CEB66355390C_METHOD_1_716BC2CA2C63CC0A_OFFSET UNITYSDK_OFFSET(0xE808B20)
#define CLASS_1_2487CEB66355390C_METHOD_1_71D8E2262DA17A58_OFFSET UNITYSDK_OFFSET(0xE807110)
#define CLASS_1_2487CEB66355390C_METHOD_1_7ABFF71D1B01EA77_OFFSET UNITYSDK_OFFSET(0xE800FE0)
#define CLASS_1_2487CEB66355390C_METHOD_1_7AC9491C2B164C79_OFFSET UNITYSDK_OFFSET(0xE807760)
#define CLASS_1_2487CEB66355390C_METHOD_1_7C9CB9AF2A4AE15E_OFFSET UNITYSDK_OFFSET(0xE802050)
#define CLASS_1_2487CEB66355390C_METHOD_1_7DEEC1C65426CFD0_OFFSET UNITYSDK_OFFSET(0xE80BE70)
#define CLASS_1_2487CEB66355390C_METHOD_1_7E784DFA9FE5A41A_OFFSET UNITYSDK_OFFSET(0xE803910)
#define CLASS_1_2487CEB66355390C_METHOD_1_812A050D90C66C24_OFFSET UNITYSDK_OFFSET(0xE806030)
#define CLASS_1_2487CEB66355390C_METHOD_1_83D14FA0321BAF87_OFFSET UNITYSDK_OFFSET(0xE802920)
#define CLASS_1_2487CEB66355390C_METHOD_1_84BDC4F5F556517C_OFFSET UNITYSDK_OFFSET(0xE806870)
#define CLASS_1_2487CEB66355390C_METHOD_1_872CD1A5CB9A1725_OFFSET UNITYSDK_OFFSET(0xE800B50)
#define CLASS_1_2487CEB66355390C_METHOD_1_87ED7F56741CDD02_OFFSET UNITYSDK_OFFSET(0xE80CFD0)
#define CLASS_1_2487CEB66355390C_METHOD_1_8DCF754A880D10F7_OFFSET UNITYSDK_OFFSET(0xE80F130)
#define CLASS_1_2487CEB66355390C_METHOD_1_8EFB965D878EA4F4_OFFSET UNITYSDK_OFFSET(0xE808C00)
#define CLASS_1_2487CEB66355390C_METHOD_1_92F4870BA9C97216_OFFSET UNITYSDK_OFFSET(0xE802FA0)
#define CLASS_1_2487CEB66355390C_METHOD_1_93FB63C127F41D88_OFFSET UNITYSDK_OFFSET(0xE8080A0)
#define CLASS_1_2487CEB66355390C_METHOD_1_95336045EE7C398B_1_OFFSET UNITYSDK_OFFSET(0xE80D880)
#define CLASS_1_2487CEB66355390C_METHOD_1_95336045EE7C398B_OFFSET UNITYSDK_OFFSET(0xE80B490)
#define CLASS_1_2487CEB66355390C_METHOD_1_959623A55CB1326A_OFFSET UNITYSDK_OFFSET(0xE801EB0)
#define CLASS_1_2487CEB66355390C_METHOD_1_9707F8A02948AAF3_OFFSET UNITYSDK_OFFSET(0xE80FB50)
#define CLASS_1_2487CEB66355390C_METHOD_1_99B21DB65E63EFA1_OFFSET UNITYSDK_OFFSET(0xE80F6C0)
#define CLASS_1_2487CEB66355390C_METHOD_1_9D47D9DA2B53AF4D_OFFSET UNITYSDK_OFFSET(0xE800BC0)
#define CLASS_1_2487CEB66355390C_METHOD_1_9F10886F056C398B_OFFSET UNITYSDK_OFFSET(0xE8043F0)
#define CLASS_1_2487CEB66355390C_METHOD_1_A0368812BC8F26D9_OFFSET UNITYSDK_OFFSET(0xE808A40)
#define CLASS_1_2487CEB66355390C_METHOD_1_A4AF27271F5A41B4_OFFSET UNITYSDK_OFFSET(0xE8041D0)
#define CLASS_1_2487CEB66355390C_METHOD_1_A6AF3E204E322D1A_OFFSET UNITYSDK_OFFSET(0xE7FF220)
#define CLASS_1_2487CEB66355390C_METHOD_1_A9CD42ED0822573D_OFFSET UNITYSDK_OFFSET(0xE805E90)
#define CLASS_1_2487CEB66355390C_METHOD_1_ACF089DE6AECB57D_OFFSET UNITYSDK_OFFSET(0xE8038B0)
#define CLASS_1_2487CEB66355390C_METHOD_1_AF393E26B9AC176B_OFFSET UNITYSDK_OFFSET(0xE808EC0)
#define CLASS_1_2487CEB66355390C_METHOD_1_AF4E23D10E125F1D_OFFSET UNITYSDK_OFFSET(0xE806BE0)
#define CLASS_1_2487CEB66355390C_METHOD_1_B08589E0E35BED8B_OFFSET UNITYSDK_OFFSET(0xE807460)
#define CLASS_1_2487CEB66355390C_METHOD_1_BF52174CD01E7C02_1_OFFSET UNITYSDK_OFFSET(0xE80C7A0)
#define CLASS_1_2487CEB66355390C_METHOD_1_BF52174CD01E7C02_OFFSET UNITYSDK_OFFSET(0xE808CD0)
#define CLASS_1_2487CEB66355390C_METHOD_1_C3BA8131B54102BB_OFFSET UNITYSDK_OFFSET(0xE802AC0)
#define CLASS_1_2487CEB66355390C_METHOD_1_C7B26D69AB391AAB_OFFSET UNITYSDK_OFFSET(0xE80F950)
#define CLASS_1_2487CEB66355390C_METHOD_1_C845B2DCBF9A8522_OFFSET UNITYSDK_OFFSET(0xE80B1C0)
#define CLASS_1_2487CEB66355390C_METHOD_1_CCBE65D96965744F_OFFSET UNITYSDK_OFFSET(0xE80A620)
#define CLASS_1_2487CEB66355390C_METHOD_1_CD388AD2222023D4_OFFSET UNITYSDK_OFFSET(0xE80D1A0)
#define CLASS_1_2487CEB66355390C_METHOD_1_CFF459EF548FDAAB_OFFSET UNITYSDK_OFFSET(0xE806DF0)
#define CLASS_1_2487CEB66355390C_METHOD_1_D0AAF9743091BBD2_OFFSET UNITYSDK_OFFSET(0xE801620)
#define CLASS_1_2487CEB66355390C_METHOD_1_D4316BD167FFFF6B_OFFSET UNITYSDK_OFFSET(0xE7FEB20)
#define CLASS_1_2487CEB66355390C_METHOD_1_D6CC71DD1E0188B7_OFFSET UNITYSDK_OFFSET(0xE80ECC0)
#define CLASS_1_2487CEB66355390C_METHOD_1_D8461854C1F0E2C3_OFFSET UNITYSDK_OFFSET(0xE80D3C0)
#define CLASS_1_2487CEB66355390C_METHOD_1_D8A3BF247A23E17E_OFFSET UNITYSDK_OFFSET(0xE80D870)
#define CLASS_1_2487CEB66355390C_METHOD_1_D985FB088608F2AB_OFFSET UNITYSDK_OFFSET(0xE80DBD0)
#define CLASS_1_2487CEB66355390C_METHOD_1_E4B71FDB7351DF0B_OFFSET UNITYSDK_OFFSET(0xE80AE60)
#define CLASS_1_2487CEB66355390C_METHOD_1_E4E40FA071A1059E_OFFSET UNITYSDK_OFFSET(0xE80EB20)
#define CLASS_1_2487CEB66355390C_METHOD_1_E877393E21A7FC3B_OFFSET UNITYSDK_OFFSET(0xE804580)
#define CLASS_1_2487CEB66355390C_METHOD_1_EAC58158F547DB13_OFFSET UNITYSDK_OFFSET(0xE80EAB0)
#define CLASS_1_2487CEB66355390C_METHOD_1_F1A997CD0DE6BA04_OFFSET UNITYSDK_OFFSET(0xE80B7E0)
#define CLASS_1_2487CEB66355390C_METHOD_1_F4F252764D1611EB_OFFSET UNITYSDK_OFFSET(0xE807960)
#define CLASS_1_2487CEB66355390C_METHOD_1_F51F8ACF3F3B5E9E_OFFSET UNITYSDK_OFFSET(0xE803000)
#define CLASS_1_2487CEB66355390C_METHOD_1_FCA15C7AEB677DB9_OFFSET UNITYSDK_OFFSET(0xE800A60)
#define CLASS_1_2487CEB66355390C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE7FCEE0)
#define CLASS_1_2487CEB66355390C__CTOR_OFFSET UNITYSDK_OFFSET(0xE7FEB10)

inline static constexpr unsigned int Class_1_2487CEB66355390C_TypeDefinitionIndex = 73322;

class Class_1_2487CEB66355390C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2487CEB66355390C_TypeDefinitionIndex)->GetStaticField(0x45D30);
	}
	static ::SimpleJSON::JSONData** StaticGet_Field_1_12()
	{
		return (::SimpleJSON::JSONData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2487CEB66355390C_TypeDefinitionIndex)->GetStaticField(0x45D38);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_4D9CF89F354D176D, ::System::Func_2<::Class_0_16E4307DCC419505_291*, ::SimpleJSON::JSONNode*>*>** StaticGet_Field_1_13()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_4D9CF89F354D176D, ::System::Func_2<::Class_0_16E4307DCC419505_291*, ::SimpleJSON::JSONNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2487CEB66355390C_TypeDefinitionIndex)->GetStaticField(0x45D40);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::Class_0_16E4307DCC419505_291*, ::SimpleJSON::JSONNode*>*>** StaticGet_Field_1_14()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::Class_0_16E4307DCC419505_291*, ::SimpleJSON::JSONNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2487CEB66355390C_TypeDefinitionIndex)->GetStaticField(0x45D48);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C__CTOR_OFFSET))(this);
	}

	static ::SimpleJSON::JSONNode* Method_1_D4316BD167FFFF6B(::System::Collections::IDictionary* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_D4316BD167FFFF6B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5BDB884892E56CA0(::SimpleJSON::JSONNode* a1, ::MoleMole::Config::InputEnableInfo*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::Config::InputEnableInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_5BDB884892E56CA0_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4A7494391FDCA1BE(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_4A7494391FDCA1BE_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_FCA15C7AEB677DB9(::System::String* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_FCA15C7AEB677DB9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_872CD1A5CB9A1725(::SimpleJSON::JSONNode* a1, ::MoleMole::EntityHandle& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_872CD1A5CB9A1725_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_9D47D9DA2B53AF4D(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_9D47D9DA2B53AF4D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4ACD85466CC967E2(::System::String* a1, ::SimpleJSON::JSONNode* a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_4ACD85466CC967E2_OFFSET))(a1, a2, a3);
	}

	static ::SimpleJSON::JSONNode* Method_1_3B7875C93242C562(::Class_1_1BDCF298D6EFEE00* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::Class_1_1BDCF298D6EFEE00*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_3B7875C93242C562_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_D0AAF9743091BBD2(::System::Boolean a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_D0AAF9743091BBD2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0C6BD67C00219930(::SimpleJSON::JSONNode* a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_0C6BD67C00219930_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3070509B5468E6BA(::SimpleJSON::JSONNode* a1, ::Class_1_DD623DBDE484C8A1*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Class_1_DD623DBDE484C8A1*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_3070509B5468E6BA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7C9CB9AF2A4AE15E(::SimpleJSON::JSONNode* a1, ::MoleMole::BubbleGraphStruct& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::BubbleGraphStruct&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_7C9CB9AF2A4AE15E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C3BA8131B54102BB(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Double>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Double>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_C3BA8131B54102BB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_03304FC2C74D87BF(::SimpleJSON::JSONNode* a1, ::System::SByte& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::SByte&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_03304FC2C74D87BF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_701F9AE565AE99A6(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Boolean>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Boolean>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_701F9AE565AE99A6_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_92F4870BA9C97216(::System::Single a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_92F4870BA9C97216_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_F51F8ACF3F3B5E9E(::MoleMole::Config::InputEnableInfo* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::Config::InputEnableInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_F51F8ACF3F3B5E9E_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_ACF089DE6AECB57D(::System::Collections::IList* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IList*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_ACF089DE6AECB57D_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_A4AF27271F5A41B4(::MoleMole::Config::Spline_WayPoint a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::Config::Spline_WayPoint))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_A4AF27271F5A41B4_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_04D7CB89AE1BD8CC(::SimpleJSON::JSONNode* a1, ::System::Object* a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::SimpleJSON::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_04D7CB89AE1BD8CC_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_218051E040BA4A9A(::System::Collections::Generic::List_1<::System::Double>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Double>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_218051E040BA4A9A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E877393E21A7FC3B(::System::String* a1, ::SimpleJSON::JSONNode* a2, ::System::Collections::IList*& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::SimpleJSON::JSONNode*, ::System::Collections::IList*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_E877393E21A7FC3B_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_84BDC4F5F556517C(::SimpleJSON::JSONNode* a1, ::Struct_2_174BD6D3EB04B2EE& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Struct_2_174BD6D3EB04B2EE&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_84BDC4F5F556517C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1CABB44054C418CA(::Struct_2_174BD6D3EB04B2EE& a1, ::SimpleJSON::JSONNode* a2, ::Class_0_16E4307DCC419505_291*& a3)
	{
		return ((::System::Boolean(*)(::Struct_2_174BD6D3EB04B2EE&, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_291*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_1CABB44054C418CA_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_147680E6F710B12B(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Single>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Single>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_147680E6F710B12B_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_33B8E33B5E87C0D0(::System::Type* a1, ::System::Int32 a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_33B8E33B5E87C0D0_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CFF459EF548FDAAB(::SimpleJSON::JSONNode* a1, ::Struct_2_174BD6D3EB04B2EE a2, ::Class_1_1BDCF298D6EFEE00*& a3)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Struct_2_174BD6D3EB04B2EE, ::Class_1_1BDCF298D6EFEE00*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_CFF459EF548FDAAB_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_71D8E2262DA17A58(::SimpleJSON::JSONNode* a1, ::MoleMole::Config::Spline_WayPoint& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::Config::Spline_WayPoint&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_71D8E2262DA17A58_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_03A3B1B64B738321(::Struct_2_B76C9DBDAECC6C19 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::Struct_2_B76C9DBDAECC6C19))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_03A3B1B64B738321_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_812A050D90C66C24(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_812A050D90C66C24_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7AC9491C2B164C79(::SimpleJSON::JSONNode* a1, ::System::Double& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_7AC9491C2B164C79_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_1DCD62256B637F28(::System::Double a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_1DCD62256B637F28_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3780E249ADC9941B(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::MoleMole::BubbleSpeakerPair>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::MoleMole::BubbleSpeakerPair>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_3780E249ADC9941B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F4F252764D1611EB(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::Class_0_16E4307DCC419505_291*, ::SimpleJSON::JSONNode*>*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::Class_0_16E4307DCC419505_291*, ::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_F4F252764D1611EB_OFFSET))(a1);
	}

	static ::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_67D41ACFEF39E84E_OFFSET))();
	}

	static ::SimpleJSON::JSONNode* Method_1_93FB63C127F41D88(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_93FB63C127F41D88_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_64AF35DB7FDE4265(::Struct_2_174BD6D3EB04B2EE& a1, ::SimpleJSON::JSONNode* a2, ::System::Collections::Generic::List_1<::System::Object*>*& a3)
	{
		return ((::System::Boolean(*)(::Struct_2_174BD6D3EB04B2EE&, ::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_64AF35DB7FDE4265_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_4FBF339EA02B05CE(::SimpleJSON::JSONNode* a1, ::System::UInt64& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_4FBF339EA02B05CE_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_3C67675E31A9C0ED(::System::Collections::IList* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_3C67675E31A9C0ED_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_2B04A2E92B310EB5(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_2B04A2E92B310EB5_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_BF52174CD01E7C02(::System::Collections::Generic::List_1<::Struct_2_9A57456E759DE2E2>* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::Struct_2_9A57456E759DE2E2>*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_BF52174CD01E7C02_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_AF393E26B9AC176B(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_AF393E26B9AC176B_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_6B8F563AB1F7F850(::Struct_2_174BD6D3EB04B2EE a1, ::Class_0_16E4307DCC419505_291* a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::Struct_2_174BD6D3EB04B2EE, ::Class_0_16E4307DCC419505_291*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_6B8F563AB1F7F850_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_291* Method_1_46FC2E8A0B3CB849(::Struct_2_174BD6D3EB04B2EE a1, ::System::Object* a2)
	{
		return ((::Class_0_16E4307DCC419505_291*(*)(::Struct_2_174BD6D3EB04B2EE, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_46FC2E8A0B3CB849_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_7E784DFA9FE5A41A(::System::Collections::IList* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IList*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_7E784DFA9FE5A41A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E4B71FDB7351DF0B(::SimpleJSON::JSONNode* a1, ::Struct_2_B76C9DBDAECC6C19& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Struct_2_B76C9DBDAECC6C19&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_E4B71FDB7351DF0B_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_C845B2DCBF9A8522(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_C845B2DCBF9A8522_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7ABFF71D1B01EA77(::SimpleJSON::JSONNode* a1, ::System::Type* a2, ::System::Object*& a3)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_7ABFF71D1B01EA77_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_7048E5EA5F158616(::System::Object* a1)
	{
		return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_7048E5EA5F158616_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5C350D1C5088D904(::SimpleJSON::JSONNode* a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_5C350D1C5088D904_OFFSET))(a1, a2);
	}

	static ::Class_3_24D8B6D1AB5590E1* Method_1_95336045EE7C398B(::System::String* a1)
	{
		return ((::Class_3_24D8B6D1AB5590E1*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_95336045EE7C398B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F1A997CD0DE6BA04(::Struct_2_174BD6D3EB04B2EE& a1, ::SimpleJSON::JSONNode* a2, ::Class_0_16E4307DCC419505_291*& a3)
	{
		return ((::System::Boolean(*)(::Struct_2_174BD6D3EB04B2EE&, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_291*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_F1A997CD0DE6BA04_OFFSET))(a1, a2, a3);
	}

	static ::SimpleJSON::JSONNode* Method_1_716BC2CA2C63CC0A(::System::Collections::Generic::List_1<::System::Single>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Single>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_716BC2CA2C63CC0A_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_9F10886F056C398B(::System::Int32 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_9F10886F056C398B_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_BF52174CD01E7C02_1(::System::Collections::Generic::List_1<::Struct_2_E89D96144D6E93F8>* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::Struct_2_E89D96144D6E93F8>*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_BF52174CD01E7C02_1_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_389C52835F83E3DE(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_389C52835F83E3DE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1D66C318E9C03DAF(::SimpleJSON::JSONNode* a1, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_1D66C318E9C03DAF_OFFSET))(a1, a2);
	}

	static ::Struct_2_A47ACAABA9AAFE92 Method_1_546D870155BF59DD(::System::String* a1, ::Class_0_16E4307DCC419505_291* a2)
	{
		return ((::Struct_2_A47ACAABA9AAFE92(*)(::System::String*, ::Class_0_16E4307DCC419505_291*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_546D870155BF59DD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_959623A55CB1326A(::SimpleJSON::JSONNode* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_959623A55CB1326A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A9CD42ED0822573D(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_A9CD42ED0822573D_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_87ED7F56741CDD02(::MoleMole::BubbleGraphStruct a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::BubbleGraphStruct))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_87ED7F56741CDD02_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_CD388AD2222023D4(::MoleMole::BubbleSpeakerPair a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::BubbleSpeakerPair))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_CD388AD2222023D4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D8461854C1F0E2C3(::SimpleJSON::JSONNode* a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_D8461854C1F0E2C3_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_2D4B91B5A52C2AAF(::Class_1_DD623DBDE484C8A1* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::Class_1_DD623DBDE484C8A1*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_2D4B91B5A52C2AAF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_57C58B395A98747D(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_57C58B395A98747D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D8A3BF247A23E17E(::SimpleJSON::JSONNode* a1, ::Foundation::ViewObject::ViewObjectHandle& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_D8A3BF247A23E17E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_83D14FA0321BAF87(::SimpleJSON::JSONNode* a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_83D14FA0321BAF87_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0738DF955F916A03(::SimpleJSON::JSONNode* a1, ::MoleMole::BubbleSpeakerPair& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::BubbleSpeakerPair&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_0738DF955F916A03_OFFSET))(a1, a2);
	}

	static ::Class_3_631700BC8A8FBE1D* Method_1_95336045EE7C398B_1(::System::String* a1)
	{
		return ((::Class_3_631700BC8A8FBE1D*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_95336045EE7C398B_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B08589E0E35BED8B(::SimpleJSON::JSONNode* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_B08589E0E35BED8B_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_D985FB088608F2AB(::System::UInt64 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_D985FB088608F2AB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6B571472790A9B28(::System::String* a1, ::SimpleJSON::JSONNode* a2, ::Struct_2_A47ACAABA9AAFE92& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::SimpleJSON::JSONNode*, ::Struct_2_A47ACAABA9AAFE92&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_6B571472790A9B28_OFFSET))(a1, a2, a3);
	}

	static ::SimpleJSON::JSONNode* Method_1_A0368812BC8F26D9(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_A0368812BC8F26D9_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_A6AF3E204E322D1A(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_A6AF3E204E322D1A_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_277FF8C3F08388DF(::System::Object* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_277FF8C3F08388DF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E4E40FA071A1059E(::SimpleJSON::JSONNode* a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_E4E40FA071A1059E_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_AF4E23D10E125F1D(::System::String* a1, ::System::Int32 a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_AF4E23D10E125F1D_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_EAC58158F547DB13(::UnityEngine::Vector3 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_EAC58158F547DB13_OFFSET))(a1);
	}

	static ::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_6D93101E4CE10A96_OFFSET))();
	}

	static ::System::Boolean Method_1_1FC7B5882DD76A99(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Object*>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_1FC7B5882DD76A99_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D6CC71DD1E0188B7(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::MoleMole::BubbleGraphStruct>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::MoleMole::BubbleGraphStruct>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_D6CC71DD1E0188B7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6D6590940D4DA123(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Int64>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Int64>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_6D6590940D4DA123_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_8EFB965D878EA4F4(::System::Collections::Generic::List_1<::System::Boolean>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_8EFB965D878EA4F4_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_2CA9F428243CCD7F(::System::Collections::Generic::List_1<::System::Int64>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Int64>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_2CA9F428243CCD7F_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_291* Method_1_8DCF754A880D10F7(::Struct_2_174BD6D3EB04B2EE a1, ::System::Object* a2)
	{
		return ((::Class_0_16E4307DCC419505_291*(*)(::Struct_2_174BD6D3EB04B2EE, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_8DCF754A880D10F7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7DEEC1C65426CFD0(::SimpleJSON::JSONNode* a1, ::MoleMole::BubbleGroupPlayGraphContent*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::BubbleGroupPlayGraphContent*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_7DEEC1C65426CFD0_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_99B21DB65E63EFA1(::System::String* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_99B21DB65E63EFA1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C7B26D69AB391AAB(::Struct_2_174BD6D3EB04B2EE& a1, ::SimpleJSON::JSONNode* a2, ::System::Collections::IList*& a3)
	{
		return ((::System::Boolean(*)(::Struct_2_174BD6D3EB04B2EE&, ::SimpleJSON::JSONNode*, ::System::Collections::IList*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_C7B26D69AB391AAB_OFFSET))(a1, a2, a3);
	}

	static ::SimpleJSON::JSONNode* Method_1_4B17253C5AF11F8C(::MoleMole::BubbleGroupPlayGraphContent* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::BubbleGroupPlayGraphContent*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_4B17253C5AF11F8C_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_35DB148240DECE0B(::UnityEngine::Vector2 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_35DB148240DECE0B_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_9707F8A02948AAF3(::System::Object* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_9707F8A02948AAF3_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_55C2C9FBEB29026F(::System::SByte a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::SByte))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_55C2C9FBEB29026F_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Object*>* Method_1_CCBE65D96965744F(::System::Collections::IList* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_CCBE65D96965744F_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_02110AFACD46321D(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_02110AFACD46321D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_561C7E7087EE3C02(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::String*>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_561C7E7087EE3C02_OFFSET))(a1, a2);
	}
};
