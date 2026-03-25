#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_96C82B73FFE758FB_PVSState.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/ScenenLightManager/LightOp.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_307;
class Class_1_303D5A33D1401D59;
class Class_1_585FC61876C1A1D5;
class Class_1_96C82B73FFE758FB_Class_1_2C6DF30B62E4D0CA;
class Class_1_96C82B73FFE758FB_Class_3_50D343C44D28BEFB_1;
class Class_1_DC0A8D11AB967235;
class Class_1_E4CB20B056222958;
class Class_3_CD04D3296DF4C842_3;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace ScenenLightManager { class BlockEnvExportDataHeader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_463D937AB9C3D339;

#define CLASS_1_96C82B73FFE758FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8BD220)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_03E4D29DEA69355E_OFFSET UNITYSDK_OFFSET(0xB8BCC10)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_04916EF43B7749FD_OFFSET UNITYSDK_OFFSET(0xB8B3830)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_0558E0A14AC93F07_OFFSET UNITYSDK_OFFSET(0xB8B3FB0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_0730C606445351F4_OFFSET UNITYSDK_OFFSET(0xB8BAD60)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0xB8B3840)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_0B4CFF95AD98C086_OFFSET UNITYSDK_OFFSET(0xB8BAFE0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_0B896E34E9813AFF_OFFSET UNITYSDK_OFFSET(0xB8BB700)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_0E21ABCC2A1ADACC_OFFSET UNITYSDK_OFFSET(0xB8B4B10)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_0F574E750651B85E_OFFSET UNITYSDK_OFFSET(0xB8BA9C0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xB8B3A10)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_1832E29FF208A65E_OFFSET UNITYSDK_OFFSET(0xB8B47A0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_19D12BDB4574A166_OFFSET UNITYSDK_OFFSET(0xB8B51B0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_1AE0BD332B416847_OFFSET UNITYSDK_OFFSET(0xB8B4AB0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_1DD52849FC34A332_OFFSET UNITYSDK_OFFSET(0xB8B9300)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_27316BACD24B2431_1_OFFSET UNITYSDK_OFFSET(0xB8B7FD0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_27316BACD24B2431_OFFSET UNITYSDK_OFFSET(0xB8B7DA0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_28B2B1E57D722E62_OFFSET UNITYSDK_OFFSET(0xB8C0510)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xB8B3550)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_29554874ADA75E7B_OFFSET UNITYSDK_OFFSET(0xB8BEF20)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_29A05BAE414EEFD2_OFFSET UNITYSDK_OFFSET(0xB8BA750)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_2BE848AD374EA2A4_OFFSET UNITYSDK_OFFSET(0xB8B9390)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_2E002E1B9371E20B_OFFSET UNITYSDK_OFFSET(0xB8BB560)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_2FC7C69F1061D462_OFFSET UNITYSDK_OFFSET(0xB8C0780)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB8B7BC0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_30F2D98841BA51DA_OFFSET UNITYSDK_OFFSET(0xB8B53C0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_311DDAC730F6D367_OFFSET UNITYSDK_OFFSET(0xB8C0140)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_31200D1C77A2165B_OFFSET UNITYSDK_OFFSET(0xB8B4660)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_34279D326BA59007_OFFSET UNITYSDK_OFFSET(0xB8BCE30)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_3D5B84329C3607B5_OFFSET UNITYSDK_OFFSET(0xB8B40E0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_406174A47F38EDFD_1_OFFSET UNITYSDK_OFFSET(0xB8C0B30)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_406174A47F38EDFD_OFFSET UNITYSDK_OFFSET(0xB8B45F0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_40797D50C20B0C96_OFFSET UNITYSDK_OFFSET(0xB8B39F0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_4325C4726F024130_OFFSET UNITYSDK_OFFSET(0xB8B4510)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_485502A9571E17C0_OFFSET UNITYSDK_OFFSET(0xB8B37A0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_4F28A4929A873DAE_OFFSET UNITYSDK_OFFSET(0xB8B41D0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_544E188C75D45402_OFFSET UNITYSDK_OFFSET(0xB8C0800)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_58E13F613105B23C_OFFSET UNITYSDK_OFFSET(0xB8B34E0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_5AFF66468E5869A6_OFFSET UNITYSDK_OFFSET(0xB8BD2D0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_5B0F764397729E59_OFFSET UNITYSDK_OFFSET(0xB8BB2B0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0xB8B3810)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_5F17BEB39E5FC9CE_OFFSET UNITYSDK_OFFSET(0xB8B9D20)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_60A1EBE4AA36C891_1_OFFSET UNITYSDK_OFFSET(0xB8C0A10)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_60A1EBE4AA36C891_OFFSET UNITYSDK_OFFSET(0xB8B5350)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_60ADD90F1D5B628F_OFFSET UNITYSDK_OFFSET(0xB8C0320)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_66F0FAEFFB957230_OFFSET UNITYSDK_OFFSET(0xB8B3440)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_707FBCDCB7E58989_OFFSET UNITYSDK_OFFSET(0xB8BBE70)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_70A027EA0E44D24A_OFFSET UNITYSDK_OFFSET(0xB8BB8A0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0xB8BF690)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_78C8066EE8D31106_OFFSET UNITYSDK_OFFSET(0xB8B8200)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_78DE3540AE2EA003_OFFSET UNITYSDK_OFFSET(0xB8B8950)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_7F20D9555862CF22_OFFSET UNITYSDK_OFFSET(0xB8BAE40)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_8845322B7E270C9E_OFFSET UNITYSDK_OFFSET(0xB8B2C30)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_8C1351449838A709_OFFSET UNITYSDK_OFFSET(0xB8B4050)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0xB8C0B90)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_8D2CDD758AC30BE3_OFFSET UNITYSDK_OFFSET(0xB8B3AD0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_914DF491CBC90768_OFFSET UNITYSDK_OFFSET(0xB8C0420)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_9500A8CA59B2BF2D_OFFSET UNITYSDK_OFFSET(0xB8BF110)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0xB8B39A0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_95780ED94B90ED36_2_OFFSET UNITYSDK_OFFSET(0xB8B3A20)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_95780ED94B90ED36_3_OFFSET UNITYSDK_OFFSET(0xB8B3A70)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xB8B3950)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_96D3F8987AE58640_OFFSET UNITYSDK_OFFSET(0xB8BF9E0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_9803082DC13B9390_OFFSET UNITYSDK_OFFSET(0xB8C0950)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0xB8B3A00)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_9E7AFEAAC49268EC_OFFSET UNITYSDK_OFFSET(0xB8BBA30)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_9E9FEE95AF80C02D_OFFSET UNITYSDK_OFFSET(0xB8B4930)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_9FDB40D5E901B671_OFFSET UNITYSDK_OFFSET(0xB8B99D0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_A043BA529334F3E6_OFFSET UNITYSDK_OFFSET(0xB8BBC90)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_A19673803B827664_OFFSET UNITYSDK_OFFSET(0xB8B4D70)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_A25E1B633C53B32A_OFFSET UNITYSDK_OFFSET(0xB8B3E30)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_AA22C2756CBA263D_OFFSET UNITYSDK_OFFSET(0xB8BAB70)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_B683026E67ADC3B6_OFFSET UNITYSDK_OFFSET(0xB8B4290)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_BB78C47882CCA6F8_OFFSET UNITYSDK_OFFSET(0xB8BCDD0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0xB8BF610)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_C0716BE264E07ACD_OFFSET UNITYSDK_OFFSET(0xB8B04E0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_C158EAB49D493E4F_OFFSET UNITYSDK_OFFSET(0xB8BFDD0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_C641B5BD895A430C_OFFSET UNITYSDK_OFFSET(0xB8B3430)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_C6AC9BE06346C0F9_OFFSET UNITYSDK_OFFSET(0xB8B5030)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_C7F77D9F8EDE37D5_OFFSET UNITYSDK_OFFSET(0xB8BA7B0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8B5310)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_CB613A5EF970C11B_1_OFFSET UNITYSDK_OFFSET(0xB8BF910)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xB8B4710)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_D0BBEAC1EFAF3251_OFFSET UNITYSDK_OFFSET(0xB8B7C60)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_D2CE238054CB70B4_OFFSET UNITYSDK_OFFSET(0xB8BCFF0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0xB8BD500)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_D59B83568A81C975_OFFSET UNITYSDK_OFFSET(0xB8B4F00)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_D73515D048C485AC_OFFSET UNITYSDK_OFFSET(0xB8BAF90)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_D813295047E23783_OFFSET UNITYSDK_OFFSET(0xB8B4C90)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_D9CAF282B78FA6DB_OFFSET UNITYSDK_OFFSET(0xB8B84E0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_DA53191237B0DB8E_OFFSET UNITYSDK_OFFSET(0xB8B3B00)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0xB8BD9A0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_DF36652FF6AEAAC1_1_OFFSET UNITYSDK_OFFSET(0xB8B3CD0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_DF36652FF6AEAAC1_2_OFFSET UNITYSDK_OFFSET(0xB8BFEE0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0xB8B3C30)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_DFDC8B0EF9883FD8_OFFSET UNITYSDK_OFFSET(0xB8BCB50)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_E03B96F01A6BBC77_OFFSET UNITYSDK_OFFSET(0xB8B3730)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_E05B4BFBD6E0E27E_OFFSET UNITYSDK_OFFSET(0xB8B3D70)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_E4B33477B7A6A3F1_OFFSET UNITYSDK_OFFSET(0xB8BEC10)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0xB8BC9A0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_E5336A44A06E0D2D_OFFSET UNITYSDK_OFFSET(0xB8B3820)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_E593ECBD53D674FF_OFFSET UNITYSDK_OFFSET(0xB8B8CD0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_E96580088F10208D_OFFSET UNITYSDK_OFFSET(0xB8BFF80)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_EEB21F914992CB10_OFFSET UNITYSDK_OFFSET(0xB8BFA40)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_EED0E8100288DBD8_1_OFFSET UNITYSDK_OFFSET(0xB8B9260)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_EED0E8100288DBD8_OFFSET UNITYSDK_OFFSET(0xB8B8C30)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0xB8B38F0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_F116B74F2D9E7E0A_OFFSET UNITYSDK_OFFSET(0xB8B03C0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_F3DBA65049E25CB1_OFFSET UNITYSDK_OFFSET(0xB8C0A80)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_F461C0B254D9B285_OFFSET UNITYSDK_OFFSET(0xB8B3AC0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_FA080DEB83320A43_OFFSET UNITYSDK_OFFSET(0xB8B4380)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_FA84F094E1A8ADA0_OFFSET UNITYSDK_OFFSET(0xB8BA220)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_FB0FF2E2CC82CC6B_1_OFFSET UNITYSDK_OFFSET(0xB8B3AF0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_FB0FF2E2CC82CC6B_OFFSET UNITYSDK_OFFSET(0xB8B3AE0)
#define CLASS_1_96C82B73FFE758FB_METHOD_1_FD805D0DD73EB169_OFFSET UNITYSDK_OFFSET(0xB8B63B0)
#define CLASS_1_96C82B73FFE758FB__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8C1000)
#define CLASS_1_96C82B73FFE758FB__CTOR_OFFSET UNITYSDK_OFFSET(0xB8BBF70)

inline static constexpr unsigned int Class_1_96C82B73FFE758FB_TypeDefinitionIndex = 39813;

class Class_1_96C82B73FFE758FB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_34()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_96C82B73FFE758FB_TypeDefinitionIndex)->GetStaticField(0x41180);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_96C82B73FFE758FB*>** StaticGet_Field_1_38()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_96C82B73FFE758FB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_96C82B73FFE758FB_TypeDefinitionIndex)->GetStaticField(0x41188);
	}
	static ::Class_1_96C82B73FFE758FB** StaticGet_Field_1_40()
	{
		return (::Class_1_96C82B73FFE758FB**)Il2CppClass::FromTypeDefinitionIndex(Class_1_96C82B73FFE758FB_TypeDefinitionIndex)->GetStaticField(0x41190);
	}
	static ::System::Collections::Generic::Queue_1<::System::Int32>** StaticGet_Field_1_39()
	{
		return (::System::Collections::Generic::Queue_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_96C82B73FFE758FB_TypeDefinitionIndex)->GetStaticField(0x41198);
	}
	static ::RPG::Client::EnvironmentSystem** StaticGet_Field_1_45()
	{
		return (::RPG::Client::EnvironmentSystem**)Il2CppClass::FromTypeDefinitionIndex(Class_1_96C82B73FFE758FB_TypeDefinitionIndex)->GetStaticField(0x411A0);
	}
	static ::System::Int32* StaticGet_Field_1_42()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_96C82B73FFE758FB_TypeDefinitionIndex)->GetStaticField(0x11560);
	}
	static ::System::Int32* StaticGet_Field_1_37()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_96C82B73FFE758FB_TypeDefinitionIndex)->GetStaticField(0x11564);
	}
	static ::System::Boolean* StaticGet_Field_1_41()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_96C82B73FFE758FB_TypeDefinitionIndex)->GetStaticField(0x11568);
	}
	static ::System::Boolean* StaticGet_Field_1_46()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_96C82B73FFE758FB_TypeDefinitionIndex)->GetStaticField(0x11569);
	}
	::Collections::Pooled::PooledList_1<::System::Int32>* Field_1_10; // 0x10
	::Class_1_463D937AB9C3D339<::System::Int32>* Field_1_8; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>* Field_1_33; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_19; // 0x28
	::System::Collections::Generic::LinkedList_1<::Class_1_96C82B73FFE758FB_Class_1_2C6DF30B62E4D0CA*>* Field_1_27; // 0x30
	::ScenenLightManager::BlockEnvExportDataHeader* Field_1_43; // 0x38
	::Class_1_463D937AB9C3D339<::System::Int32>* Field_1_6; // 0x40
	::System::Collections::Generic::LinkedList_1<::Class_1_DC0A8D11AB967235*>* Field_1_29; // 0x48
	::RPG::Client::LRUCache_2<::System::Int32, ::System::Int32>* Field_1_30; // 0x50
	::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>* Field_1_25; // 0x58
	::Collections::Pooled::PooledList_1<::System::Int32>* Field_1_36; // 0x60
	::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>* Field_1_11; // 0x68
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_44; // 0x70
	::System::Collections::Generic::Dictionary_2<::RPG::CustomRP::CustomLightQualityFilter, ::Class_1_463D937AB9C3D339<::System::Int32>*>* Field_1_23; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_20; // 0x80
	::Class_1_463D937AB9C3D339<::System::Int32>* Field_1_9; // 0x88
	::Class_1_463D937AB9C3D339<::System::Int32>* Field_1_7; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int64>*>* Field_1_21; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_463D937AB9C3D339<::System::Int32>*>* Field_1_15; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_463D937AB9C3D339<::System::Int32>*>* Field_1_13; // 0xA8
	::System::Collections::Generic::List_1<::RPG::CustomRP::CustomAdditionalLightData*>* Field_1_0; // 0xB0
	::System::String* Field_1_32; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_463D937AB9C3D339<::System::Int32>*>* Field_1_12; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_17; // 0xC8
	::Class_1_585FC61876C1A1D5* Field_1_31; // 0xD0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* Field_1_26; // 0xD8
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_5; // 0xE0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_463D937AB9C3D339<::System::Int32>*>* Field_1_14; // 0xE8
	::UnityEngine::GameObject* Field_1_28; // 0xF0
	::Class_1_463D937AB9C3D339<::Class_1_E4CB20B056222958*>* Field_1_24; // 0xF8
	::System::Collections::Generic::List_1<::System::Int64>* Field_1_35; // 0x100
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int64>*>* Field_1_16; // 0x108
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_18; // 0x110
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_22; // 0x118
	::ScenenLightManager::FadingState Field_1_3; // 0x120
	::RPG::CustomRP::CustomLightQualityFilter Field_1_4; // 0x124
	::System::Int32 Field_1_1; // 0x128
	::System::Single Field_1_2; // 0x12C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB__CCTOR_OFFSET))();
	}

	::System::Double Method_1_8845322B7E270C9E()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_8845322B7E270C9E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::CustomRP::CustomAdditionalLightData*>* Method_1_C641B5BD895A430C()
	{
		return ((::System::Collections::Generic::List_1<::RPG::CustomRP::CustomAdditionalLightData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_C641B5BD895A430C_OFFSET))(this);
	}

	::System::Void Method_1_66F0FAEFFB957230(::RPG::CustomRP::CustomAdditionalLightData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomAdditionalLightData*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_66F0FAEFFB957230_OFFSET))(this, a1);
	}

	::System::Void Method_1_58E13F613105B23C(::RPG::CustomRP::CustomAdditionalLightData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomAdditionalLightData*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_58E13F613105B23C_OFFSET))(this, a1);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_1_E03B96F01A6BBC77(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_E03B96F01A6BBC77_OFFSET))(this, a1);
	}

	::System::Void Method_1_485502A9571E17C0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_485502A9571E17C0_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_307* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_307*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter Method_1_E5336A44A06E0D2D()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_E5336A44A06E0D2D_OFFSET))(this);
	}

	::System::Collections::Generic::LinkedList_1<::Class_1_96C82B73FFE758FB_Class_1_2C6DF30B62E4D0CA*>* Method_1_04916EF43B7749FD()
	{
		return ((::System::Collections::Generic::LinkedList_1<::Class_1_96C82B73FFE758FB_Class_1_2C6DF30B62E4D0CA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_04916EF43B7749FD_OFFSET))(this);
	}

	::System::Int32 Method_1_09B8F368BEF6ADA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_09B8F368BEF6ADA5_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::Class_1_463D937AB9C3D339<::System::Int32>* Method_1_40797D50C20B0C96()
	{
		return ((::Class_1_463D937AB9C3D339<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_40797D50C20B0C96_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_95780ED94B90ED36_2_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_95780ED94B90ED36_3_OFFSET))(this);
	}

	::RPG::Client::LRUCache_2<::System::Int32, ::System::Int32>* Method_1_F461C0B254D9B285()
	{
		return ((::RPG::Client::LRUCache_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_F461C0B254D9B285_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>* Method_1_8D2CDD758AC30BE3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_8D2CDD758AC30BE3_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_1_FB0FF2E2CC82CC6B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_FB0FF2E2CC82CC6B_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_1_FB0FF2E2CC82CC6B_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_FB0FF2E2CC82CC6B_1_OFFSET))(this);
	}

	::System::Boolean Method_1_DA53191237B0DB8E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_DA53191237B0DB8E_OFFSET))(this);
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_DF36652FF6AEAAC1_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E05B4BFBD6E0E27E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_E05B4BFBD6E0E27E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A25E1B633C53B32A(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_A25E1B633C53B32A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0558E0A14AC93F07(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_0558E0A14AC93F07_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_8C1351449838A709(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_8C1351449838A709_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_3D5B84329C3607B5(::System::Int32 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_3D5B84329C3607B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B683026E67ADC3B6(::System::Int32 a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_B683026E67ADC3B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FA080DEB83320A43(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_FA080DEB83320A43_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4325C4726F024130(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_4325C4726F024130_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_1_1832E29FF208A65E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_1832E29FF208A65E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E9FEE95AF80C02D(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_9E9FEE95AF80C02D_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_0E21ABCC2A1ADACC(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_0E21ABCC2A1ADACC_OFFSET))(this, a1);
	}

	::System::String* Method_1_D813295047E23783(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_D813295047E23783_OFFSET))(this, a1);
	}

	::System::Void Method_1_A19673803B827664(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_A19673803B827664_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_4F28A4929A873DAE(::System::Int32 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_4F28A4929A873DAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_D59B83568A81C975(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_D59B83568A81C975_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_C6AC9BE06346C0F9(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_C6AC9BE06346C0F9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_C0716BE264E07ACD(::System::String* a1, ::RPG::CustomRP::CustomLightQualityFilter a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_C0716BE264E07ACD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_60A1EBE4AA36C891(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_60A1EBE4AA36C891_OFFSET))(this, a1);
	}

	::System::Void Method_1_19D12BDB4574A166(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_19D12BDB4574A166_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_406174A47F38EDFD(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_406174A47F38EDFD_OFFSET))(this, a1);
	}

	::System::Void Method_1_30F2D98841BA51DA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_30F2D98841BA51DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0BBEAC1EFAF3251(::RPG::CustomRP::CustomLightQualityFilter a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_D0BBEAC1EFAF3251_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_27316BACD24B2431(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_27316BACD24B2431_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_27316BACD24B2431_1(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_27316BACD24B2431_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_78C8066EE8D31106(::System::Int32 a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_78C8066EE8D31106_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_EED0E8100288DBD8(::Class_1_96C82B73FFE758FB_Class_1_2C6DF30B62E4D0CA* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96C82B73FFE758FB_Class_1_2C6DF30B62E4D0CA*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_EED0E8100288DBD8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EED0E8100288DBD8_1(::Class_1_96C82B73FFE758FB_Class_1_2C6DF30B62E4D0CA* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96C82B73FFE758FB_Class_1_2C6DF30B62E4D0CA*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_EED0E8100288DBD8_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1DD52849FC34A332(::Class_1_96C82B73FFE758FB_Class_1_2C6DF30B62E4D0CA* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96C82B73FFE758FB_Class_1_2C6DF30B62E4D0CA*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_1DD52849FC34A332_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int64>* Method_1_9FDB40D5E901B671(::System::String* a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::System::String* a4)
	{
		return ((::System::Collections::Generic::List_1<::System::Int64>*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_9FDB40D5E901B671_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5F17BEB39E5FC9CE(::System::String* a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::System::Boolean a4, ::System::String* a5, ::System::Collections::Generic::List_1<::System::Int64>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Boolean, ::System::String*, ::System::Collections::Generic::List_1<::System::Int64>*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_5F17BEB39E5FC9CE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_FA84F094E1A8ADA0(::System::String* a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_FA84F094E1A8ADA0_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::RPG::CustomRP::CustomLightQualityFilter Method_1_29A05BAE414EEFD2(::RPG::CustomRP::CustomLightQualityFilter a1)
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_29A05BAE414EEFD2_OFFSET))(a1);
	}

	::System::Void Method_1_C7F77D9F8EDE37D5(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_C7F77D9F8EDE37D5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0F574E750651B85E(::System::Int32 a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::Class_1_96C82B73FFE758FB_Class_3_50D343C44D28BEFB_1* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::Class_1_96C82B73FFE758FB_Class_3_50D343C44D28BEFB_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_0F574E750651B85E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_AA22C2756CBA263D(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::Class_1_96C82B73FFE758FB_Class_3_50D343C44D28BEFB_1* a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::Class_1_96C82B73FFE758FB_Class_3_50D343C44D28BEFB_1*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_AA22C2756CBA263D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_0730C606445351F4(::Class_3_CD04D3296DF4C842_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CD04D3296DF4C842_3*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_0730C606445351F4_OFFSET))(this, a1);
	}

	::Class_1_E4CB20B056222958* Method_1_D73515D048C485AC(::UnityEngine::GameObject* a1)
	{
		return ((::Class_1_E4CB20B056222958*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_D73515D048C485AC_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B4CFF95AD98C086(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_0B4CFF95AD98C086_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B0F764397729E59(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_5B0F764397729E59_OFFSET))(this, a1);
	}

	::System::Void Method_1_2E002E1B9371E20B(::System::Int32 a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_2E002E1B9371E20B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0B896E34E9813AFF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_0B896E34E9813AFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_70A027EA0E44D24A(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_70A027EA0E44D24A_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E7AFEAAC49268EC(::Class_1_E4CB20B056222958* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_9E7AFEAAC49268EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A043BA529334F3E6(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_A043BA529334F3E6_OFFSET))(this, a1);
	}

	::System::Void Method_1_707FBCDCB7E58989(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_707FBCDCB7E58989_OFFSET))(this, a1);
	}

	::System::Void Method_1_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_E52129E82CD2D7F8_OFFSET))(this);
	}

	static ::System::Int32 Method_1_DFDC8B0EF9883FD8()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_DFDC8B0EF9883FD8_OFFSET))();
	}

	static ::System::Int32 Method_1_03E4D29DEA69355E()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_03E4D29DEA69355E_OFFSET))();
	}

	static ::Class_1_96C82B73FFE758FB* Method_1_BB78C47882CCA6F8(::System::Int32 a1)
	{
		return ((::Class_1_96C82B73FFE758FB*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_BB78C47882CCA6F8_OFFSET))(a1);
	}

	static ::Class_1_96C82B73FFE758FB* Method_1_34279D326BA59007()
	{
		return ((::Class_1_96C82B73FFE758FB*(*)())((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_34279D326BA59007_OFFSET))();
	}

	static ::Class_1_96C82B73FFE758FB* Method_1_F116B74F2D9E7E0A(::System::Int32 a1)
	{
		return ((::Class_1_96C82B73FFE758FB*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_F116B74F2D9E7E0A_OFFSET))(a1);
	}

	static ::System::Void Method_1_D2CE238054CB70B4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_D2CE238054CB70B4_OFFSET))(a1);
	}

	static ::System::Void Method_1_5AFF66468E5869A6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_5AFF66468E5869A6_OFFSET))();
	}

	static ::System::Void Method_1_D545E2F706415F81()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_D545E2F706415F81_OFFSET))();
	}

	static ::System::Void Method_1_29554874ADA75E7B(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_29554874ADA75E7B_OFFSET))(a1);
	}

	::System::Void Method_1_E4B33477B7A6A3F1(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_E4B33477B7A6A3F1_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_BFBBE8A6FE167A6A_OFFSET))();
	}

	static ::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_7206DC8F66A4D2A8_OFFSET))();
	}

	static ::System::Void Method_1_CB613A5EF970C11B_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_CB613A5EF970C11B_1_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_DISPOSE_OFFSET))(this);
	}

	::Class_1_E4CB20B056222958* Method_1_31200D1C77A2165B(::System::Int32 a1)
	{
		return ((::Class_1_E4CB20B056222958*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_31200D1C77A2165B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_96D3F8987AE58640()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_96D3F8987AE58640_OFFSET))(this);
	}

	::Class_1_E4CB20B056222958* Method_1_1AE0BD332B416847(::System::Int32 a1)
	{
		return ((::Class_1_E4CB20B056222958*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_1AE0BD332B416847_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEB21F914992CB10(::System::Int64 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_EEB21F914992CB10_OFFSET))(this, a1, a2);
	}

	::Class_1_96C82B73FFE758FB_PVSState Method_1_C158EAB49D493E4F(::System::Int32 a1)
	{
		return ((::Class_1_96C82B73FFE758FB_PVSState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_C158EAB49D493E4F_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1_2(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_DF36652FF6AEAAC1_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD805D0DD73EB169(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_FD805D0DD73EB169_OFFSET))(this, a1);
	}

	::System::Void Method_1_E96580088F10208D(::ScenenLightManager::BlockEnvExportDataHeader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::BlockEnvExportDataHeader*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_E96580088F10208D_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_311DDAC730F6D367(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_311DDAC730F6D367_OFFSET))(this, a1);
	}

	::System::Void Method_1_60ADD90F1D5B628F(::Class_1_463D937AB9C3D339<::System::Int32>* a1, ::ScenenLightManager::LightOp a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463D937AB9C3D339<::System::Int32>*, ::ScenenLightManager::LightOp))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_60ADD90F1D5B628F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_914DF491CBC90768(::Class_1_463D937AB9C3D339<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463D937AB9C3D339<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_914DF491CBC90768_OFFSET))(this, a1);
	}

	::System::Void Method_1_2BE848AD374EA2A4(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5, ::Class_1_96C82B73FFE758FB_Class_3_50D343C44D28BEFB_1* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32, ::Class_1_96C82B73FFE758FB_Class_3_50D343C44D28BEFB_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_2BE848AD374EA2A4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Class_1_463D937AB9C3D339<::System::Int32>* Method_1_D9CAF282B78FA6DB(::System::String* a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3)
	{
		return ((::Class_1_463D937AB9C3D339<::System::Int32>*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_D9CAF282B78FA6DB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_78DE3540AE2EA003(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::Class_1_463D937AB9C3D339<::System::Int32>* a5, ::ScenenLightManager::LightOp a6, ::System::Boolean a7, ::System::Int32 a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::Class_1_463D937AB9C3D339<::System::Int32>*, ::ScenenLightManager::LightOp, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_78DE3540AE2EA003_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_E593ECBD53D674FF(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::ScenenLightManager::LightOp a5, ::System::Boolean a6, ::System::Int32 a7, ::Class_1_96C82B73FFE758FB_Class_3_50D343C44D28BEFB_1* a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::ScenenLightManager::LightOp, ::System::Boolean, ::System::Int32, ::Class_1_96C82B73FFE758FB_Class_3_50D343C44D28BEFB_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_E593ECBD53D674FF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_28B2B1E57D722E62(::System::Int32 a1, ::System::String* a2, ::Class_1_463D937AB9C3D339<::System::Int32>* a3, ::ScenenLightManager::LightOp a4, ::System::Int32 a5, ::Class_1_96C82B73FFE758FB_Class_3_50D343C44D28BEFB_1* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Class_1_463D937AB9C3D339<::System::Int32>*, ::ScenenLightManager::LightOp, ::System::Int32, ::Class_1_96C82B73FFE758FB_Class_3_50D343C44D28BEFB_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_28B2B1E57D722E62_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_2FC7C69F1061D462(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_2FC7C69F1061D462_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F20D9555862CF22(::Class_1_DC0A8D11AB967235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DC0A8D11AB967235*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_7F20D9555862CF22_OFFSET))(this, a1);
	}

	::System::Void Method_1_544E188C75D45402(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_544E188C75D45402_OFFSET))(this, a1);
	}

	::System::Void Method_1_9803082DC13B9390(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_9803082DC13B9390_OFFSET))(this, a1);
	}

	::System::Void Method_1_60A1EBE4AA36C891_1(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_60A1EBE4AA36C891_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3DBA65049E25CB1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_F3DBA65049E25CB1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_406174A47F38EDFD_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_406174A47F38EDFD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9500A8CA59B2BF2D(::System::Int32 a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_9500A8CA59B2BF2D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_1_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_METHOD_1_DAEB67F34AF80609_OFFSET))(this);
	}
};
