#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4D9CF89F354D176D.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/BubbleGraphStruct.h"
#include "unitysdk/MoleMole/BubbleSpeakerPair.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/Struct_2_2060BEF305855C48.h"
#include "unitysdk/Struct_2_94A0E3A9A04C3F23.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/Struct_2_B679E4D914A10080_1.h"
#include "unitysdk/Struct_2_B76C9DBDAECC6C19.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_174;
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

#define CLASS_1_2487CEB66355390C_METHOD_1_02110AFACD46321D_OFFSET UNITYSDK_OFFSET(0x17C3FB50)
#define CLASS_1_2487CEB66355390C_METHOD_1_03304FC2C74D87BF_OFFSET UNITYSDK_OFFSET(0x17C429F0)
#define CLASS_1_2487CEB66355390C_METHOD_1_03A3B1B64B738321_OFFSET UNITYSDK_OFFSET(0x17C3F3B0)
#define CLASS_1_2487CEB66355390C_METHOD_1_04D7CB89AE1BD8CC_OFFSET UNITYSDK_OFFSET(0x17C3A6C0)
#define CLASS_1_2487CEB66355390C_METHOD_1_0738DF955F916A03_OFFSET UNITYSDK_OFFSET(0x17C37CA0)
#define CLASS_1_2487CEB66355390C_METHOD_1_09E3EAC71B0F63AE_OFFSET UNITYSDK_OFFSET(0x17C46660)
#define CLASS_1_2487CEB66355390C_METHOD_1_0BFC4DA2CD551DFD_OFFSET UNITYSDK_OFFSET(0x17C46D10)
#define CLASS_1_2487CEB66355390C_METHOD_1_0C6BD67C00219930_OFFSET UNITYSDK_OFFSET(0x17C3B050)
#define CLASS_1_2487CEB66355390C_METHOD_1_1CABB44054C418CA_OFFSET UNITYSDK_OFFSET(0x17C3AC10)
#define CLASS_1_2487CEB66355390C_METHOD_1_1D66C318E9C03DAF_OFFSET UNITYSDK_OFFSET(0x17C39900)
#define CLASS_1_2487CEB66355390C_METHOD_1_1DCD62256B637F28_OFFSET UNITYSDK_OFFSET(0x17C45860)
#define CLASS_1_2487CEB66355390C_METHOD_1_1FC7B5882DD76A99_OFFSET UNITYSDK_OFFSET(0x17C39CF0)
#define CLASS_1_2487CEB66355390C_METHOD_1_22BC63A4A1C0765B_OFFSET UNITYSDK_OFFSET(0x17C42980)
#define CLASS_1_2487CEB66355390C_METHOD_1_277FF8C3F08388DF_OFFSET UNITYSDK_OFFSET(0x17C458C0)
#define CLASS_1_2487CEB66355390C_METHOD_1_2B04A2E92B310EB5_OFFSET UNITYSDK_OFFSET(0x17C402F0)
#define CLASS_1_2487CEB66355390C_METHOD_1_2D4B91B5A52C2AAF_OFFSET UNITYSDK_OFFSET(0x17C3B650)
#define CLASS_1_2487CEB66355390C_METHOD_1_3070509B5468E6BA_OFFSET UNITYSDK_OFFSET(0x17C37FF0)
#define CLASS_1_2487CEB66355390C_METHOD_1_3780E249ADC9941B_OFFSET UNITYSDK_OFFSET(0x17C40C10)
#define CLASS_1_2487CEB66355390C_METHOD_1_3B267850C099B876_OFFSET UNITYSDK_OFFSET(0x17C42B90)
#define CLASS_1_2487CEB66355390C_METHOD_1_3B7875C93242C562_OFFSET UNITYSDK_OFFSET(0x17C3D5A0)
#define CLASS_1_2487CEB66355390C_METHOD_1_3C3F3BA5BA46EAC5_OFFSET UNITYSDK_OFFSET(0x17C46980)
#define CLASS_1_2487CEB66355390C_METHOD_1_3D35591FD3F61C53_OFFSET UNITYSDK_OFFSET(0x17C41660)
#define CLASS_1_2487CEB66355390C_METHOD_1_46FC2E8A0B3CB849_OFFSET UNITYSDK_OFFSET(0x17C43E70)
#define CLASS_1_2487CEB66355390C_METHOD_1_4A7A308D62DB3E86_OFFSET UNITYSDK_OFFSET(0x17C39030)
#define CLASS_1_2487CEB66355390C_METHOD_1_4ACD85466CC967E2_OFFSET UNITYSDK_OFFSET(0x17C3ACC0)
#define CLASS_1_2487CEB66355390C_METHOD_1_4B17253C5AF11F8C_OFFSET UNITYSDK_OFFSET(0x17C3F0F0)
#define CLASS_1_2487CEB66355390C_METHOD_1_4D23B243780C2E3B_OFFSET UNITYSDK_OFFSET(0x17C37A50)
#define CLASS_1_2487CEB66355390C_METHOD_1_4FBF339EA02B05CE_OFFSET UNITYSDK_OFFSET(0x17C36CD0)
#define CLASS_1_2487CEB66355390C_METHOD_1_5181B6BF51A558FA_OFFSET UNITYSDK_OFFSET(0x17C41070)
#define CLASS_1_2487CEB66355390C_METHOD_1_520D34B975006315_OFFSET UNITYSDK_OFFSET(0x17C3B390)
#define CLASS_1_2487CEB66355390C_METHOD_1_546D870155BF59DD_OFFSET UNITYSDK_OFFSET(0x17C3E230)
#define CLASS_1_2487CEB66355390C_METHOD_1_55C2C9FBEB29026F_OFFSET UNITYSDK_OFFSET(0x17C45660)
#define CLASS_1_2487CEB66355390C_METHOD_1_5718BE254853520A_OFFSET UNITYSDK_OFFSET(0x17C471A0)
#define CLASS_1_2487CEB66355390C_METHOD_1_5BDB884892E56CA0_OFFSET UNITYSDK_OFFSET(0x17C38B80)
#define CLASS_1_2487CEB66355390C_METHOD_1_5C350D1C5088D904_OFFSET UNITYSDK_OFFSET(0x17C482C0)
#define CLASS_1_2487CEB66355390C_METHOD_1_6270F8D6143ABB96_OFFSET UNITYSDK_OFFSET(0x17C3FA40)
#define CLASS_1_2487CEB66355390C_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x17C34ED0)
#define CLASS_1_2487CEB66355390C_METHOD_1_693CD6E69B7C4D3E_OFFSET UNITYSDK_OFFSET(0x17C36870)
#define CLASS_1_2487CEB66355390C_METHOD_1_6B8F563AB1F7F850_OFFSET UNITYSDK_OFFSET(0x17C45060)
#define CLASS_1_2487CEB66355390C_METHOD_1_6C29A692BA59196F_OFFSET UNITYSDK_OFFSET(0x17C3B9C0)
#define CLASS_1_2487CEB66355390C_METHOD_1_6CDF9DDEDACAD150_OFFSET UNITYSDK_OFFSET(0x17C3EDB0)
#define CLASS_1_2487CEB66355390C_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x17C36760)
#define CLASS_1_2487CEB66355390C_METHOD_1_7048E5EA5F158616_OFFSET UNITYSDK_OFFSET(0x17C3A780)
#define CLASS_1_2487CEB66355390C_METHOD_1_71D8E2262DA17A58_OFFSET UNITYSDK_OFFSET(0x17C395B0)
#define CLASS_1_2487CEB66355390C_METHOD_1_769B7951114E1AA7_OFFSET UNITYSDK_OFFSET(0x17C42C00)
#define CLASS_1_2487CEB66355390C_METHOD_1_7ABFF71D1B01EA77_OFFSET UNITYSDK_OFFSET(0x17C3DCC0)
#define CLASS_1_2487CEB66355390C_METHOD_1_7AC9491C2B164C79_OFFSET UNITYSDK_OFFSET(0x17C456C0)
#define CLASS_1_2487CEB66355390C_METHOD_1_7C9CB9AF2A4AE15E_OFFSET UNITYSDK_OFFSET(0x17C375E0)
#define CLASS_1_2487CEB66355390C_METHOD_1_7D7805C8DF7FF886_OFFSET UNITYSDK_OFFSET(0x17C45F30)
#define CLASS_1_2487CEB66355390C_METHOD_1_7E1796B0A8B2C17B_OFFSET UNITYSDK_OFFSET(0x17C3F6D0)
#define CLASS_1_2487CEB66355390C_METHOD_1_7E784DFA9FE5A41A_OFFSET UNITYSDK_OFFSET(0x17C40350)
#define CLASS_1_2487CEB66355390C_METHOD_1_8130035D2A910B2D_OFFSET UNITYSDK_OFFSET(0x17C45FF0)
#define CLASS_1_2487CEB66355390C_METHOD_1_83D14FA0321BAF87_OFFSET UNITYSDK_OFFSET(0x17C3B1F0)
#define CLASS_1_2487CEB66355390C_METHOD_1_872CD1A5CB9A1725_OFFSET UNITYSDK_OFFSET(0x17C3E1C0)
#define CLASS_1_2487CEB66355390C_METHOD_1_87ED7F56741CDD02_OFFSET UNITYSDK_OFFSET(0x17C3C270)
#define CLASS_1_2487CEB66355390C_METHOD_1_8DCF754A880D10F7_OFFSET UNITYSDK_OFFSET(0x17C3D6E0)
#define CLASS_1_2487CEB66355390C_METHOD_1_8EFB965D878EA4F4_OFFSET UNITYSDK_OFFSET(0x17C48250)
#define CLASS_1_2487CEB66355390C_METHOD_1_8F514AE7558719AF_OFFSET UNITYSDK_OFFSET(0x17C41D80)
#define CLASS_1_2487CEB66355390C_METHOD_1_92F4870BA9C97216_OFFSET UNITYSDK_OFFSET(0x17C3CBC0)
#define CLASS_1_2487CEB66355390C_METHOD_1_95336045EE7C398B_1_OFFSET UNITYSDK_OFFSET(0x17C47EA0)
#define CLASS_1_2487CEB66355390C_METHOD_1_95336045EE7C398B_OFFSET UNITYSDK_OFFSET(0x17C46DF0)
#define CLASS_1_2487CEB66355390C_METHOD_1_959623A55CB1326A_OFFSET UNITYSDK_OFFSET(0x17C3C0D0)
#define CLASS_1_2487CEB66355390C_METHOD_1_99B21DB65E63EFA1_OFFSET UNITYSDK_OFFSET(0x17C48650)
#define CLASS_1_2487CEB66355390C_METHOD_1_9D47D9DA2B53AF4D_OFFSET UNITYSDK_OFFSET(0x17C43E00)
#define CLASS_1_2487CEB66355390C_METHOD_1_9F10886F056C398B_OFFSET UNITYSDK_OFFSET(0x17C3B960)
#define CLASS_1_2487CEB66355390C_METHOD_1_9F3E928E6ABEB54C_OFFSET UNITYSDK_OFFSET(0x17C46D80)
#define CLASS_1_2487CEB66355390C_METHOD_1_A3D72D3828797811_OFFSET UNITYSDK_OFFSET(0x17C46060)
#define CLASS_1_2487CEB66355390C_METHOD_1_A4AF27271F5A41B4_OFFSET UNITYSDK_OFFSET(0x17C3E940)
#define CLASS_1_2487CEB66355390C_METHOD_1_A4EBE6A70B7EC7C9_OFFSET UNITYSDK_OFFSET(0x17C43200)
#define CLASS_1_2487CEB66355390C_METHOD_1_A6AF3E204E322D1A_OFFSET UNITYSDK_OFFSET(0x17C3A0E0)
#define CLASS_1_2487CEB66355390C_METHOD_1_A728E7812BC43FEF_OFFSET UNITYSDK_OFFSET(0x17C3C440)
#define CLASS_1_2487CEB66355390C_METHOD_1_ACF089DE6AECB57D_OFFSET UNITYSDK_OFFSET(0x17C46CA0)
#define CLASS_1_2487CEB66355390C_METHOD_1_AF4E23D10E125F1D_OFFSET UNITYSDK_OFFSET(0x17C43BF0)
#define CLASS_1_2487CEB66355390C_METHOD_1_B08589E0E35BED8B_OFFSET UNITYSDK_OFFSET(0x17C36B30)
#define CLASS_1_2487CEB66355390C_METHOD_1_BF52174CD01E7C02_1_OFFSET UNITYSDK_OFFSET(0x17C48460)
#define CLASS_1_2487CEB66355390C_METHOD_1_BF52174CD01E7C02_OFFSET UNITYSDK_OFFSET(0x17C3EB60)
#define CLASS_1_2487CEB66355390C_METHOD_1_C845B2DCBF9A8522_OFFSET UNITYSDK_OFFSET(0x17C3F910)
#define CLASS_1_2487CEB66355390C_METHOD_1_C9A676E3F72CE240_OFFSET UNITYSDK_OFFSET(0x17C3ED40)
#define CLASS_1_2487CEB66355390C_METHOD_1_CD388AD2222023D4_OFFSET UNITYSDK_OFFSET(0x17C3F190)
#define CLASS_1_2487CEB66355390C_METHOD_1_CFF459EF548FDAAB_OFFSET UNITYSDK_OFFSET(0x17C44720)
#define CLASS_1_2487CEB66355390C_METHOD_1_D0AAF9743091BBD2_OFFSET UNITYSDK_OFFSET(0x17C3C070)
#define CLASS_1_2487CEB66355390C_METHOD_1_D2B6CBBEFC9739C5_OFFSET UNITYSDK_OFFSET(0x17C45F90)
#define CLASS_1_2487CEB66355390C_METHOD_1_D6CC71DD1E0188B7_OFFSET UNITYSDK_OFFSET(0x17C44BF0)
#define CLASS_1_2487CEB66355390C_METHOD_1_D8461854C1F0E2C3_OFFSET UNITYSDK_OFFSET(0x17C40150)
#define CLASS_1_2487CEB66355390C_METHOD_1_D88E9C5D127436DE_OFFSET UNITYSDK_OFFSET(0x17C41210)
#define CLASS_1_2487CEB66355390C_METHOD_1_D8A3BF247A23E17E_OFFSET UNITYSDK_OFFSET(0x17C46D00)
#define CLASS_1_2487CEB66355390C_METHOD_1_D985FB088608F2AB_OFFSET UNITYSDK_OFFSET(0x17C39C90)
#define CLASS_1_2487CEB66355390C_METHOD_1_E12A1E618FA3CE57_OFFSET UNITYSDK_OFFSET(0x17C46B10)
#define CLASS_1_2487CEB66355390C_METHOD_1_E3E350227DADD49C_OFFSET UNITYSDK_OFFSET(0x17C413A0)
#define CLASS_1_2487CEB66355390C_METHOD_1_E4B71FDB7351DF0B_OFFSET UNITYSDK_OFFSET(0x17C38820)
#define CLASS_1_2487CEB66355390C_METHOD_1_E4E40FA071A1059E_OFFSET UNITYSDK_OFFSET(0x17C44A50)
#define CLASS_1_2487CEB66355390C_METHOD_1_EAC58158F547DB13_OFFSET UNITYSDK_OFFSET(0x17C3CC20)
#define CLASS_1_2487CEB66355390C_METHOD_1_EDFFD5DCF6780B7C_OFFSET UNITYSDK_OFFSET(0x17C44360)
#define CLASS_1_2487CEB66355390C_METHOD_1_EE4DBB9577566A00_OFFSET UNITYSDK_OFFSET(0x17C467F0)
#define CLASS_1_2487CEB66355390C_METHOD_1_F1A997CD0DE6BA04_OFFSET UNITYSDK_OFFSET(0x17C36E70)
#define CLASS_1_2487CEB66355390C_METHOD_1_F4F252764D1611EB_OFFSET UNITYSDK_OFFSET(0x17C3CD80)
#define CLASS_1_2487CEB66355390C_METHOD_1_F51F8ACF3F3B5E9E_OFFSET UNITYSDK_OFFSET(0x17C3F510)
#define CLASS_1_2487CEB66355390C_METHOD_1_FCA15C7AEB677DB9_OFFSET UNITYSDK_OFFSET(0x17C3CC90)
#define CLASS_1_2487CEB66355390C_METHOD_1_FE02455DB6D99052_OFFSET UNITYSDK_OFFSET(0x17C43360)
#define CLASS_1_2487CEB66355390C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C34C30)
#define CLASS_1_2487CEB66355390C__CTOR_OFFSET UNITYSDK_OFFSET(0x17C36860)

inline static constexpr unsigned int Class_1_2487CEB66355390C_TypeDefinitionIndex = 84817;

class Class_1_2487CEB66355390C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_Field_1_13()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2487CEB66355390C_TypeDefinitionIndex)->GetStaticField(0x514B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_4D9CF89F354D176D, ::System::Func_2<::Class_0_16E4307DCC419505_174*, ::SimpleJSON::JSONNode*>*>** StaticGet_Field_1_19()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_4D9CF89F354D176D, ::System::Func_2<::Class_0_16E4307DCC419505_174*, ::SimpleJSON::JSONNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2487CEB66355390C_TypeDefinitionIndex)->GetStaticField(0x514B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::Class_0_16E4307DCC419505_174*, ::SimpleJSON::JSONNode*>*>** StaticGet_Field_1_18()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::Class_0_16E4307DCC419505_174*, ::SimpleJSON::JSONNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2487CEB66355390C_TypeDefinitionIndex)->GetStaticField(0x514C0);
	}
	static ::SimpleJSON::JSONData** StaticGet_Field_1_12()
	{
		return (::SimpleJSON::JSONData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2487CEB66355390C_TypeDefinitionIndex)->GetStaticField(0x514C8);
	}
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_15; // 0x0
	// static const ::System::String* Field_1_14; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_693CD6E69B7C4D3E(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::String*>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_693CD6E69B7C4D3E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4FBF339EA02B05CE(::SimpleJSON::JSONNode* a1, ::System::UInt64& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_4FBF339EA02B05CE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F1A997CD0DE6BA04(::Struct_2_174BD6D3EB04B2EE& a1, ::SimpleJSON::JSONNode* a2, ::Class_0_16E4307DCC419505_174*& a3)
	{
		return ((::System::Boolean(*)(::Struct_2_174BD6D3EB04B2EE&, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_174*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_F1A997CD0DE6BA04_OFFSET))(a1, a2, a3);
	}

	static ::SimpleJSON::JSONNode* Method_1_D985FB088608F2AB(::System::UInt64 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_D985FB088608F2AB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1FC7B5882DD76A99(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Object*>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_1FC7B5882DD76A99_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_A6AF3E204E322D1A(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_A6AF3E204E322D1A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1CABB44054C418CA(::Struct_2_174BD6D3EB04B2EE& a1, ::SimpleJSON::JSONNode* a2, ::Class_0_16E4307DCC419505_174*& a3)
	{
		return ((::System::Boolean(*)(::Struct_2_174BD6D3EB04B2EE&, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_174*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_1CABB44054C418CA_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_E4B71FDB7351DF0B(::SimpleJSON::JSONNode* a1, ::Struct_2_B76C9DBDAECC6C19& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Struct_2_B76C9DBDAECC6C19&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_E4B71FDB7351DF0B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_520D34B975006315(::SimpleJSON::JSONNode* a1, ::Struct_2_174BD6D3EB04B2EE& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Struct_2_174BD6D3EB04B2EE&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_520D34B975006315_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_2D4B91B5A52C2AAF(::Class_1_DD623DBDE484C8A1* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::Class_1_DD623DBDE484C8A1*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_2D4B91B5A52C2AAF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_959623A55CB1326A(::SimpleJSON::JSONNode* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_959623A55CB1326A_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_87ED7F56741CDD02(::MoleMole::BubbleGraphStruct a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::BubbleGraphStruct))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_87ED7F56741CDD02_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_EAC58158F547DB13(::UnityEngine::Vector3 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_EAC58158F547DB13_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_FCA15C7AEB677DB9(::System::String* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_FCA15C7AEB677DB9_OFFSET))(a1);
	}

	static ::System::Void Method_1_F4F252764D1611EB(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::Class_0_16E4307DCC419505_174*, ::SimpleJSON::JSONNode*>*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::Class_0_16E4307DCC419505_174*, ::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_F4F252764D1611EB_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_3B7875C93242C562(::Class_1_1BDCF298D6EFEE00* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::Class_1_1BDCF298D6EFEE00*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_3B7875C93242C562_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_92F4870BA9C97216(::System::Single a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_92F4870BA9C97216_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_174* Method_1_8DCF754A880D10F7(::Struct_2_174BD6D3EB04B2EE a1, ::System::Object* a2)
	{
		return ((::Class_0_16E4307DCC419505_174*(*)(::Struct_2_174BD6D3EB04B2EE, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_8DCF754A880D10F7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_71D8E2262DA17A58(::SimpleJSON::JSONNode* a1, ::MoleMole::Config::Spline_WayPoint& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::Config::Spline_WayPoint&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_71D8E2262DA17A58_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7ABFF71D1B01EA77(::SimpleJSON::JSONNode* a1, ::System::Type* a2, ::System::Object*& a3)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_7ABFF71D1B01EA77_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_872CD1A5CB9A1725(::SimpleJSON::JSONNode* a1, ::MoleMole::EntityHandle& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_872CD1A5CB9A1725_OFFSET))(a1, a2);
	}

	static ::Struct_2_A47ACAABA9AAFE92 Method_1_546D870155BF59DD(::System::String* a1, ::Class_0_16E4307DCC419505_174* a2)
	{
		return ((::Struct_2_A47ACAABA9AAFE92(*)(::System::String*, ::Class_0_16E4307DCC419505_174*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_546D870155BF59DD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3070509B5468E6BA(::SimpleJSON::JSONNode* a1, ::Class_1_DD623DBDE484C8A1*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Class_1_DD623DBDE484C8A1*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_3070509B5468E6BA_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_A4AF27271F5A41B4(::MoleMole::Config::Spline_WayPoint a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::Config::Spline_WayPoint))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_A4AF27271F5A41B4_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_BF52174CD01E7C02(::System::Collections::Generic::List_1<::Struct_2_94A0E3A9A04C3F23>* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::Struct_2_94A0E3A9A04C3F23>*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_BF52174CD01E7C02_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_C9A676E3F72CE240(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_C9A676E3F72CE240_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_6D93101E4CE10A96_OFFSET))();
	}

	static ::SimpleJSON::JSONNode* Method_1_6CDF9DDEDACAD150(::System::Object* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_6CDF9DDEDACAD150_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_6270F8D6143ABB96(::System::Collections::IDictionary* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_6270F8D6143ABB96_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_F51F8ACF3F3B5E9E(::MoleMole::Config::InputEnableInfo* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::Config::InputEnableInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_F51F8ACF3F3B5E9E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D8461854C1F0E2C3(::SimpleJSON::JSONNode* a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_D8461854C1F0E2C3_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_2B04A2E92B310EB5(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_2B04A2E92B310EB5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3780E249ADC9941B(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::MoleMole::BubbleSpeakerPair>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::MoleMole::BubbleSpeakerPair>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_3780E249ADC9941B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B08589E0E35BED8B(::SimpleJSON::JSONNode* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_B08589E0E35BED8B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4A7A308D62DB3E86(::SimpleJSON::JSONNode* a1, ::Struct_2_B679E4D914A10080_1& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Struct_2_B679E4D914A10080_1&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_4A7A308D62DB3E86_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5181B6BF51A558FA(::SimpleJSON::JSONNode* a1, ::System::Int64& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_5181B6BF51A558FA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D88E9C5D127436DE(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Single>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Single>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_D88E9C5D127436DE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5BDB884892E56CA0(::SimpleJSON::JSONNode* a1, ::MoleMole::Config::InputEnableInfo*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::Config::InputEnableInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_5BDB884892E56CA0_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E3E350227DADD49C(::Struct_2_174BD6D3EB04B2EE& a1, ::SimpleJSON::JSONNode* a2, ::System::Collections::Generic::List_1<::System::Object*>*& a3)
	{
		return ((::System::Boolean(*)(::Struct_2_174BD6D3EB04B2EE&, ::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_E3E350227DADD49C_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_0738DF955F916A03(::SimpleJSON::JSONNode* a1, ::MoleMole::BubbleSpeakerPair& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::BubbleSpeakerPair&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_0738DF955F916A03_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_C845B2DCBF9A8522(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_C845B2DCBF9A8522_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4ACD85466CC967E2(::System::String* a1, ::SimpleJSON::JSONNode* a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_4ACD85466CC967E2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_3D35591FD3F61C53(::System::String* a1, ::SimpleJSON::JSONNode* a2, ::Struct_2_A47ACAABA9AAFE92& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::SimpleJSON::JSONNode*, ::Struct_2_A47ACAABA9AAFE92&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_3D35591FD3F61C53_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_8F514AE7558719AF(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_8F514AE7558719AF_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_CD388AD2222023D4(::MoleMole::BubbleSpeakerPair a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::BubbleSpeakerPair))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_CD388AD2222023D4_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_04D7CB89AE1BD8CC(::SimpleJSON::JSONNode* a1, ::System::Object* a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::SimpleJSON::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_04D7CB89AE1BD8CC_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_22BC63A4A1C0765B(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_22BC63A4A1C0765B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_03304FC2C74D87BF(::SimpleJSON::JSONNode* a1, ::System::SByte& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::SByte&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_03304FC2C74D87BF_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_3B267850C099B876(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_3B267850C099B876_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_769B7951114E1AA7(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Int64>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Int64>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_769B7951114E1AA7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A4EBE6A70B7EC7C9(::Struct_2_174BD6D3EB04B2EE& a1, ::SimpleJSON::JSONNode* a2, ::System::Collections::IList*& a3)
	{
		return ((::System::Boolean(*)(::Struct_2_174BD6D3EB04B2EE&, ::SimpleJSON::JSONNode*, ::System::Collections::IList*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_A4EBE6A70B7EC7C9_OFFSET))(a1, a2, a3);
	}

	static ::SimpleJSON::JSONNode* Method_1_AF4E23D10E125F1D(::System::String* a1, ::System::Int32 a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_AF4E23D10E125F1D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7C9CB9AF2A4AE15E(::SimpleJSON::JSONNode* a1, ::MoleMole::BubbleGraphStruct& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::BubbleGraphStruct&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_7C9CB9AF2A4AE15E_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_9D47D9DA2B53AF4D(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_9D47D9DA2B53AF4D_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_174* Method_1_46FC2E8A0B3CB849(::Struct_2_174BD6D3EB04B2EE a1, ::System::Object* a2)
	{
		return ((::Class_0_16E4307DCC419505_174*(*)(::Struct_2_174BD6D3EB04B2EE, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_46FC2E8A0B3CB849_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CFF459EF548FDAAB(::SimpleJSON::JSONNode* a1, ::Struct_2_174BD6D3EB04B2EE a2, ::Class_1_1BDCF298D6EFEE00*& a3)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Struct_2_174BD6D3EB04B2EE, ::Class_1_1BDCF298D6EFEE00*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_CFF459EF548FDAAB_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_E4E40FA071A1059E(::SimpleJSON::JSONNode* a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_E4E40FA071A1059E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4D23B243780C2E3B(::SimpleJSON::JSONNode* a1, ::MoleMole::BubbleGroupPlayGraphContent*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::BubbleGroupPlayGraphContent*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_4D23B243780C2E3B_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_7048E5EA5F158616(::System::Object* a1)
	{
		return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_7048E5EA5F158616_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_6B8F563AB1F7F850(::Struct_2_174BD6D3EB04B2EE a1, ::Class_0_16E4307DCC419505_174* a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::Struct_2_174BD6D3EB04B2EE, ::Class_0_16E4307DCC419505_174*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_6B8F563AB1F7F850_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_83D14FA0321BAF87(::SimpleJSON::JSONNode* a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_83D14FA0321BAF87_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_67D41ACFEF39E84E_OFFSET))();
	}

	static ::SimpleJSON::JSONNode* Method_1_55C2C9FBEB29026F(::System::SByte a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::SByte))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_55C2C9FBEB29026F_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_6C29A692BA59196F(::System::Type* a1, ::System::Int32 a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_6C29A692BA59196F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7AC9491C2B164C79(::SimpleJSON::JSONNode* a1, ::System::Double& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_7AC9491C2B164C79_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_1DCD62256B637F28(::System::Double a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_1DCD62256B637F28_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1D66C318E9C03DAF(::SimpleJSON::JSONNode* a1, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_1D66C318E9C03DAF_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_9F10886F056C398B(::System::Int32 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_9F10886F056C398B_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_277FF8C3F08388DF(::System::Object* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_277FF8C3F08388DF_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_8130035D2A910B2D(::System::Collections::Generic::List_1<::System::Single>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Single>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_8130035D2A910B2D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_FE02455DB6D99052(::System::String* a1, ::SimpleJSON::JSONNode* a2, ::System::Collections::IList*& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::SimpleJSON::JSONNode*, ::System::Collections::IList*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_FE02455DB6D99052_OFFSET))(a1, a2, a3);
	}

	static ::SimpleJSON::JSONNode* Method_1_ACF089DE6AECB57D(::System::Collections::IList* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IList*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_ACF089DE6AECB57D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D8A3BF247A23E17E(::SimpleJSON::JSONNode* a1, ::Foundation::ViewObject::ViewObjectHandle& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_D8A3BF247A23E17E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_EE4DBB9577566A00(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_EE4DBB9577566A00_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_03A3B1B64B738321(::Struct_2_B76C9DBDAECC6C19 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::Struct_2_B76C9DBDAECC6C19))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_03A3B1B64B738321_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_0BFC4DA2CD551DFD(::System::Collections::Generic::List_1<::System::Double>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Double>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_0BFC4DA2CD551DFD_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_9F3E928E6ABEB54C(::System::Collections::Generic::List_1<::System::Int64>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Int64>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_9F3E928E6ABEB54C_OFFSET))(a1, a2);
	}

	static ::Class_3_24D8B6D1AB5590E1* Method_1_95336045EE7C398B(::System::String* a1)
	{
		return ((::Class_3_24D8B6D1AB5590E1*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_95336045EE7C398B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D6CC71DD1E0188B7(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::MoleMole::BubbleGraphStruct>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::MoleMole::BubbleGraphStruct>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_D6CC71DD1E0188B7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5718BE254853520A(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_5718BE254853520A_OFFSET))(a1, a2);
	}

	static ::Class_3_631700BC8A8FBE1D* Method_1_95336045EE7C398B_1(::System::String* a1)
	{
		return ((::Class_3_631700BC8A8FBE1D*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_95336045EE7C398B_1_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_7E784DFA9FE5A41A(::System::Collections::IList* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IList*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_7E784DFA9FE5A41A_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_D0AAF9743091BBD2(::System::Boolean a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_D0AAF9743091BBD2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E12A1E618FA3CE57(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Boolean>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Boolean>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_E12A1E618FA3CE57_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A3D72D3828797811(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_A3D72D3828797811_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_09E3EAC71B0F63AE(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Double>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Double>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_09E3EAC71B0F63AE_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_8EFB965D878EA4F4(::System::Collections::Generic::List_1<::System::Boolean>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_8EFB965D878EA4F4_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_D2B6CBBEFC9739C5(::System::Int64 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_D2B6CBBEFC9739C5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5C350D1C5088D904(::SimpleJSON::JSONNode* a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_5C350D1C5088D904_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_02110AFACD46321D(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_02110AFACD46321D_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_7E1796B0A8B2C17B(::Struct_2_B679E4D914A10080_1 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::Struct_2_B679E4D914A10080_1))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_7E1796B0A8B2C17B_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_7D7805C8DF7FF886(::UnityEngine::Vector2 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_7D7805C8DF7FF886_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0C6BD67C00219930(::SimpleJSON::JSONNode* a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_0C6BD67C00219930_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_BF52174CD01E7C02_1(::System::Collections::Generic::List_1<::Struct_2_2060BEF305855C48>* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::Struct_2_2060BEF305855C48>*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_BF52174CD01E7C02_1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Object*>* Method_1_EDFFD5DCF6780B7C(::System::Collections::IList* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_EDFFD5DCF6780B7C_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_99B21DB65E63EFA1(::System::String* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_99B21DB65E63EFA1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3C3F3BA5BA46EAC5(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_3C3F3BA5BA46EAC5_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_4B17253C5AF11F8C(::MoleMole::BubbleGroupPlayGraphContent* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::BubbleGroupPlayGraphContent*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_4B17253C5AF11F8C_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_A728E7812BC43FEF(::System::Collections::IList* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + CLASS_1_2487CEB66355390C_METHOD_1_A728E7812BC43FEF_OFFSET))(a1);
	}
};
