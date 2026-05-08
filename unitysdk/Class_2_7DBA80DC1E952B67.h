#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/Class_1_8F9C8201CB57E0BD_Enum_3_7C9BB6787F559CBC.h"
#include "unitysdk/Class_1_B4BE03363BD6F2CF.h"
#include "unitysdk/Class_2_7DBA80DC1E952B67_Struct_2_BBD456EBC9087BC2_7.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/NapPlatform.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_147;
class Class_0_16E4307DCC419505_502;
class Class_1_1747DAB17F36B4DF;
class Class_1_3002D7CF5FEE9D3A;
class Class_1_394D6A10B246CA86;
class Class_1_5147F89B36002D2A;
class Class_1_C9DFE5EE7107C629;
class Class_2_7DBA80DC1E952B67_Class_1_5A741906034C4C8D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::IO { class StreamWriter; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7DBA80DC1E952B67_METHOD_2_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x113A7B20)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_0501C9F947F2E0F1_OFFSET UNITYSDK_OFFSET(0x113AC9B0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_07AA83773EE0208F_OFFSET UNITYSDK_OFFSET(0x113ABFA0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x113A3ED0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_0AD1FA6D95A0C618_OFFSET UNITYSDK_OFFSET(0x113A3290)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_0C0EA045F35BF64D_OFFSET UNITYSDK_OFFSET(0x113AC0B0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_0C74E6929D088391_OFFSET UNITYSDK_OFFSET(0x113A8A30)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_0CA898E3EFE61D62_OFFSET UNITYSDK_OFFSET(0x113A7410)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_0E020497CC185B6F_OFFSET UNITYSDK_OFFSET(0x113A8840)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_110AE06E63E34BE4_OFFSET UNITYSDK_OFFSET(0x113AE690)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_114A7D507C5EFD94_OFFSET UNITYSDK_OFFSET(0x113AF760)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_13FFEA9B1D0264A2_OFFSET UNITYSDK_OFFSET(0x113A9BC0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_1AEA9367F6D1D0BC_OFFSET UNITYSDK_OFFSET(0x113AD400)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_1B79E5E2120D7C6C_OFFSET UNITYSDK_OFFSET(0x113AF200)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_1E3E3F34675743C7_OFFSET UNITYSDK_OFFSET(0x113AE6E0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_22B9A093243930D9_OFFSET UNITYSDK_OFFSET(0x113A6FF0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x113AE9E0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_2C1FF7715E86F87A_OFFSET UNITYSDK_OFFSET(0x113AAEB0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_2DD7377814EAD872_OFFSET UNITYSDK_OFFSET(0x113A6360)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_2F41E02FB44186AB_OFFSET UNITYSDK_OFFSET(0x113ABDF0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_327C237EFA0918F7_OFFSET UNITYSDK_OFFSET(0x113A46A0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_328CCC4233C29337_OFFSET UNITYSDK_OFFSET(0x113A6D00)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_347F05D887B9DE1D_OFFSET UNITYSDK_OFFSET(0x113A7D80)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_3546BE71378F0A1F_OFFSET UNITYSDK_OFFSET(0x113AD180)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_3588A7D22367928F_OFFSET UNITYSDK_OFFSET(0x113A1570)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_378F7CE035FD5B6D_OFFSET UNITYSDK_OFFSET(0x113AEA80)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_3B04066B3C57F9FE_OFFSET UNITYSDK_OFFSET(0x113AA900)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_3B6073422880AAED_OFFSET UNITYSDK_OFFSET(0x113AE4F0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_3CEA77E8292B720E_OFFSET UNITYSDK_OFFSET(0x113ACB40)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_3F61F56295827FBC_OFFSET UNITYSDK_OFFSET(0x113AC660)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_405B486333A4BAD7_OFFSET UNITYSDK_OFFSET(0x113AA2D0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x113AF640)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_44FA30F5BACC9CBD_OFFSET UNITYSDK_OFFSET(0x113A3A30)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_4AB2B25263ADAC0F_OFFSET UNITYSDK_OFFSET(0x113A65E0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_4E184894D97CD690_OFFSET UNITYSDK_OFFSET(0x113A9B40)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_525A43EECFD41458_OFFSET UNITYSDK_OFFSET(0x113A3810)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_527868EEBDCBB5E1_OFFSET UNITYSDK_OFFSET(0x113AC6E0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_55F1E8844A670932_OFFSET UNITYSDK_OFFSET(0x113AB2E0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_5686CC8AC6CADCED_OFFSET UNITYSDK_OFFSET(0x113A8E30)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0x113A2040)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_5E365E5E4847A2B5_OFFSET UNITYSDK_OFFSET(0x113ACCD0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_5E93572F9B9C3F30_OFFSET UNITYSDK_OFFSET(0x113AE010)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_5FF1E2B8FCD9B46C_OFFSET UNITYSDK_OFFSET(0x113AF880)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_61AB68BDB00AAB84_OFFSET UNITYSDK_OFFSET(0x113AC3C0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_6237B36DCEBCB7F6_OFFSET UNITYSDK_OFFSET(0x113AB3A0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_663546559182E6FB_OFFSET UNITYSDK_OFFSET(0x113ADC40)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x113ADD80)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_672D56D99D734395_OFFSET UNITYSDK_OFFSET(0x113A0D10)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_686BD42735EC05C9_OFFSET UNITYSDK_OFFSET(0x113AB0C0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_6B6D9BDFB4AD0167_OFFSET UNITYSDK_OFFSET(0x113ACAB0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_716BE05EF596087C_OFFSET UNITYSDK_OFFSET(0x113A6100)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_73849A815F67FD57_OFFSET UNITYSDK_OFFSET(0x113A6680)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_75DDB26088449959_OFFSET UNITYSDK_OFFSET(0x113AD0D0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_7676FDB6E6C86FAA_OFFSET UNITYSDK_OFFSET(0x113AF750)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_769AD75D74DE77C7_OFFSET UNITYSDK_OFFSET(0x113AB860)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_789454E938C9A450_OFFSET UNITYSDK_OFFSET(0x113A8000)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_79B90490025ABC83_OFFSET UNITYSDK_OFFSET(0x113A0C20)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_7D8EB4FE129105DA_OFFSET UNITYSDK_OFFSET(0x113ABAC0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_81BDEAA763900846_OFFSET UNITYSDK_OFFSET(0x113AF3D0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_8742CF0BC925DDFA_OFFSET UNITYSDK_OFFSET(0x113A9890)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_8746A2642AD7DC61_OFFSET UNITYSDK_OFFSET(0x113AAAA0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_8BA5587F670061D6_OFFSET UNITYSDK_OFFSET(0x113AF2F0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x113AB560)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_8DDCF4B0445D7175_OFFSET UNITYSDK_OFFSET(0x113A90C0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_946EC0D1F2BB5E97_OFFSET UNITYSDK_OFFSET(0x113ADE70)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_956445DC08CAEA95_OFFSET UNITYSDK_OFFSET(0x113A8BD0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_9C9DE4C164487634_OFFSET UNITYSDK_OFFSET(0x113A9440)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_9F8F85BA5EA1113D_OFFSET UNITYSDK_OFFSET(0x113AF3C0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_A13BA0E56DCF3586_OFFSET UNITYSDK_OFFSET(0x113AF190)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_A48E77D7774BE3AE_OFFSET UNITYSDK_OFFSET(0x113ACA30)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_A5212EF5EAC5E8F4_OFFSET UNITYSDK_OFFSET(0x113A8510)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_A5CFA053D190B8E6_OFFSET UNITYSDK_OFFSET(0x113ADCE0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_A7C888353291F62D_OFFSET UNITYSDK_OFFSET(0x113A6EF0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_AA35205B65348C9D_OFFSET UNITYSDK_OFFSET(0x113AD570)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_AB94A2DA89A107F3_OFFSET UNITYSDK_OFFSET(0x113A30E0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_AB97C7AC95844049_1_OFFSET UNITYSDK_OFFSET(0x113ACFD0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_AB97C7AC95844049_OFFSET UNITYSDK_OFFSET(0x113AB060)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_AEEAC3E3FC92548B_OFFSET UNITYSDK_OFFSET(0x113AEAB0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_B1694603C30DDA03_1_OFFSET UNITYSDK_OFFSET(0x113AC010)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_B1694603C30DDA03_OFFSET UNITYSDK_OFFSET(0x113ABD50)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_B3969A3157B1B101_OFFSET UNITYSDK_OFFSET(0x113A9520)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_B71D5BA016E28396_OFFSET UNITYSDK_OFFSET(0x113AE960)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_B7D8BB6BDD800DBF_OFFSET UNITYSDK_OFFSET(0x113A7B70)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_BCC281DC419BB5B6_OFFSET UNITYSDK_OFFSET(0x113AEF50)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_C14402D387B222A7_OFFSET UNITYSDK_OFFSET(0x113A71C0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_C346417CED109BF8_OFFSET UNITYSDK_OFFSET(0x113A6420)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_C416F89188C0C026_OFFSET UNITYSDK_OFFSET(0x113AD8B0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_C554DA6582F73835_OFFSET UNITYSDK_OFFSET(0x113A13E0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_C5A8CF18E284014E_OFFSET UNITYSDK_OFFSET(0x113A6670)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_C6F738ECB1BBB902_OFFSET UNITYSDK_OFFSET(0x113A35E0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x113ADBA0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x113ADCD0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x113A8280)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x113A9800)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x113ABA30)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x113ADB10)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x113AF100)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x113AF7F0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x113A7CF0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_CA9BB4DDEDAD9FBA_OFFSET UNITYSDK_OFFSET(0x113A98A0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_CAEE66B1498088FA_OFFSET UNITYSDK_OFFSET(0x113AD040)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_CCD6F3A6263E94E8_OFFSET UNITYSDK_OFFSET(0x113AEBC0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_CEFEFE0F3C802E23_OFFSET UNITYSDK_OFFSET(0x113A7B80)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_D02A2F5F45D7393D_OFFSET UNITYSDK_OFFSET(0x113AF5D0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_D07CC0F9C3815E0E_OFFSET UNITYSDK_OFFSET(0x113A14E0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x113A4610)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_D0ECA6D90E154547_OFFSET UNITYSDK_OFFSET(0x113AEFC0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_D35CAAC9853FB556_OFFSET UNITYSDK_OFFSET(0x113AD340)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x113A4290)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_D77B5CAF1B0C64C1_OFFSET UNITYSDK_OFFSET(0x113AD850)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_D8946B1B693849AF_OFFSET UNITYSDK_OFFSET(0x113ADBB0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_E04139E205E75ABC_OFFSET UNITYSDK_OFFSET(0x113A8290)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_E1A9F6B2EC17AAD0_OFFSET UNITYSDK_OFFSET(0x113A23F0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_E1CE531AAEB1A6F1_OFFSET UNITYSDK_OFFSET(0x113AACD0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_E32F13808F7B1220_OFFSET UNITYSDK_OFFSET(0x113A1EA0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_E37EB5364870BCB8_OFFSET UNITYSDK_OFFSET(0x113A6B20)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x113AEEC0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x113A3F40)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_EB7D3F8378C47077_OFFSET UNITYSDK_OFFSET(0x113A6800)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_EDD765C8CA4EADC2_OFFSET UNITYSDK_OFFSET(0x113A9CB0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x113A1CF0)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_FB0FF2E2CC82CC6B_OFFSET UNITYSDK_OFFSET(0x113AD030)
#define CLASS_2_7DBA80DC1E952B67_METHOD_2_FFE2775EE1D35567_OFFSET UNITYSDK_OFFSET(0x113A8160)
#define CLASS_2_7DBA80DC1E952B67__CCTOR_OFFSET UNITYSDK_OFFSET(0x113A6080)
#define CLASS_2_7DBA80DC1E952B67__CTOR_OFFSET UNITYSDK_OFFSET(0x113A0090)

inline static constexpr unsigned int Class_2_7DBA80DC1E952B67_TypeDefinitionIndex = 59536;

class Class_2_7DBA80DC1E952B67 : public ::Class_1_B4BE03363BD6F2CF
{
public:
	static ::System::UInt32* StaticGet_Field_2_48()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7DBA80DC1E952B67_TypeDefinitionIndex)->GetStaticField(0xBCC0);
	}
	static ::System::UInt32* StaticGet_Field_2_5()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7DBA80DC1E952B67_TypeDefinitionIndex)->GetStaticField(0xBCC4);
	}
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::Int32 Field_2_40 = 0x80; // 0x0
	::System::String* Field_2_17; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_16; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_1747DAB17F36B4DF*>* Field_2_20; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_46; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Field_2_13; // 0x38
	::System::Collections::Generic::Queue_1<::System::Int32>* Field_2_21; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_42; // 0x48
	::System::Collections::Generic::List_1<::Class_2_7DBA80DC1E952B67_Class_1_5A741906034C4C8D*>* Field_2_43; // 0x50
	::UnityEngine::GameObject* Field_2_7; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* Field_2_14; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_10; // 0x68
	::Class_1_1747DAB17F36B4DF* Field_2_8; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_41; // 0x78
	::System::Collections::Generic::Queue_1<::System::Int32>* Field_2_23; // 0x80
	::System::Collections::Generic::Queue_1<::System::Int32>* Field_2_44; // 0x88
	::System::Collections::Generic::List_1<::Class_2_7DBA80DC1E952B67_Struct_2_BBD456EBC9087BC2_7>* Field_2_19; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>* Field_2_12; // 0x98
	::System::Collections::Generic::Queue_1<::System::Int32>* Field_2_22; // 0xA0
	::UnityEngine::GameObject* Field_2_9; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_394D6A10B246CA86*>* Field_2_47; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::Coroutine::CoroutineHandle>* Field_2_45; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_5147F89B36002D2A*>* Field_2_11; // 0xC0
	::System::Int32 Field_2_29; // 0xC8
	::System::Int32 Field_2_34; // 0xCC
	::System::Int32 Field_2_27; // 0xD0
	::System::Int32 Field_2_35; // 0xD4
	::System::Int32 Field_2_24; // 0xD8
	::System::Int32 Field_2_26; // 0xDC
	::System::Int32 Field_2_33; // 0xE0
	::System::Int32 Field_2_25; // 0xE4
	::System::Single Field_2_38; // 0xE8
	::System::Int32 Field_2_36; // 0xEC
	::System::Int32 Field_2_30; // 0xF0
	::System::Int32 Field_2_32; // 0xF4
	::System::Single Field_2_39; // 0xF8
	::System::Int32 Field_2_18; // 0xFC
	::System::UInt32 Field_2_15; // 0x100
	::System::Int32 Field_2_31; // 0x104
	::System::Single Field_2_6; // 0x108
	::System::Int32 Field_2_37; // 0x10C
	::System::Int32 Field_2_28; // 0x110

	::System::Void _ctor(::Class_1_C9DFE5EE7107C629* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67__CCTOR_OFFSET))();
	}

	::System::Void Method_2_672D56D99D734395()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_672D56D99D734395_OFFSET))(this);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_57F015DFC718ABA3_OFFSET))(this);
	}

	::System::Void Method_2_E1A9F6B2EC17AAD0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_E1A9F6B2EC17AAD0_OFFSET))(this, a1);
	}

	::System::Void Method_2_097468641FDED14E(::Class_1_3002D7CF5FEE9D3A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_2_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_2_327C237EFA0918F7(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_327C237EFA0918F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_716BE05EF596087C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_716BE05EF596087C_OFFSET))(this, a1);
	}

	::System::Void Method_2_0AD1FA6D95A0C618(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_0AD1FA6D95A0C618_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4AB2B25263ADAC0F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_4AB2B25263ADAC0F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* Method_2_C5A8CF18E284014E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_C5A8CF18E284014E_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_73849A815F67FD57(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::String* a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_73849A815F67FD57_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_328CCC4233C29337(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_328CCC4233C29337_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_22B9A093243930D9(::Class_1_8F9C8201CB57E0BD_Enum_3_7C9BB6787F559CBC a1, ::System::Boolean a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F9C8201CB57E0BD_Enum_3_7C9BB6787F559CBC, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_22B9A093243930D9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0CA898E3EFE61D62(::System::UInt32 a1, ::System::Single a2, ::UnityEngine::GameObject* a3, ::System::Int32 a4, ::AkCurveInterpolation a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::UnityEngine::GameObject*, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_0CA898E3EFE61D62_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_5147F89B36002D2A*>* Method_2_B7D8BB6BDD800DBF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_5147F89B36002D2A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_B7D8BB6BDD800DBF_OFFSET))(this);
	}

	::Class_1_394D6A10B246CA86* Method_2_CEFEFE0F3C802E23(::System::String* a1)
	{
		return ((::Class_1_394D6A10B246CA86*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_CEFEFE0F3C802E23_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_44FA30F5BACC9CBD(::Class_1_1747DAB17F36B4DF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_44FA30F5BACC9CBD_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_347F05D887B9DE1D(::System::UInt32 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_347F05D887B9DE1D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_789454E938C9A450(::System::String* a1, ::System::Single a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_789454E938C9A450_OFFSET))(this, a1, a2, a3);
	}

	::Foundation::Coroutine::CoroutineHandle Method_2_FFE2775EE1D35567(::System::String* a1)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_FFE2775EE1D35567_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_E04139E205E75ABC(::Foundation::NapPlatform a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NapPlatform))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_E04139E205E75ABC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A5212EF5EAC5E8F4(::System::String* a1, ::System::String*& a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_A5212EF5EAC5E8F4_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_0E020497CC185B6F(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_0E020497CC185B6F_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_2_956445DC08CAEA95(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::System::String* a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_956445DC08CAEA95_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_5686CC8AC6CADCED(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_5686CC8AC6CADCED_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_B3969A3157B1B101(::System::UInt32 a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_B3969A3157B1B101_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>* Method_2_8742CF0BC925DDFA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_8742CF0BC925DDFA_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_CA9BB4DDEDAD9FBA(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_CA9BB4DDEDAD9FBA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4E184894D97CD690(::System::String* a1, ::System::Single a2, ::System::Int32 a3, ::AkCurveInterpolation a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_4E184894D97CD690_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_EDD765C8CA4EADC2(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_EDD765C8CA4EADC2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3B04066B3C57F9FE(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_3B04066B3C57F9FE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C346417CED109BF8(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_C346417CED109BF8_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1CE531AAEB1A6F1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_E1CE531AAEB1A6F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB97C7AC95844049(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_AB97C7AC95844049_OFFSET))(this, a1);
	}

	::System::Void Method_2_55F1E8844A670932(::System::String* a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_55F1E8844A670932_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_2_D07CC0F9C3815E0E(::UnityEngine::Vector3 a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_D07CC0F9C3815E0E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6237B36DCEBCB7F6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_6237B36DCEBCB7F6_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_9C9DE4C164487634()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_9C9DE4C164487634_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_769AD75D74DE77C7(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_769AD75D74DE77C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_7D8EB4FE129105DA(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::String* a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_7D8EB4FE129105DA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_2_79B90490025ABC83(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_79B90490025ABC83_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1694603C30DDA03(::System::String* a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_B1694603C30DDA03_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_2F41E02FB44186AB(::System::UInt64 a1, ::System::String* a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_2F41E02FB44186AB_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_07AA83773EE0208F(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_07AA83773EE0208F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1694603C30DDA03_1(::System::String* a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_B1694603C30DDA03_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0C0EA045F35BF64D(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_0C0EA045F35BF64D_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_A7C888353291F62D(::System::String* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_A7C888353291F62D_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F61F56295827FBC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_3F61F56295827FBC_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_0501C9F947F2E0F1(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_0501C9F947F2E0F1_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_A48E77D7774BE3AE(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_A48E77D7774BE3AE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6B6D9BDFB4AD0167(::System::String*& a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_6B6D9BDFB4AD0167_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5E365E5E4847A2B5(::System::String* a1, ::System::Single& a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_5E365E5E4847A2B5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AB97C7AC95844049_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_AB97C7AC95844049_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E37EB5364870BCB8(::Class_1_1747DAB17F36B4DF* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_E37EB5364870BCB8_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_FB0FF2E2CC82CC6B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_FB0FF2E2CC82CC6B_OFFSET))(this);
	}

	::System::Void Method_2_CAEE66B1498088FA(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_CAEE66B1498088FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_405B486333A4BAD7(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_405B486333A4BAD7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C14402D387B222A7(::Class_1_8F9C8201CB57E0BD_Enum_3_7C9BB6787F559CBC a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F9C8201CB57E0BD_Enum_3_7C9BB6787F559CBC, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_C14402D387B222A7_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_2_75DDB26088449959(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::System::String* a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_75DDB26088449959_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3546BE71378F0A1F(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_3546BE71378F0A1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D35CAAC9853FB556(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_D35CAAC9853FB556_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_61AB68BDB00AAB84(::System::String* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_61AB68BDB00AAB84_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Boolean Method_2_1AEA9367F6D1D0BC(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_1AEA9367F6D1D0BC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_AA35205B65348C9D(::System::UInt32 a1, ::System::Single& a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Single&, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_AA35205B65348C9D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D77B5CAF1B0C64C1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_D77B5CAF1B0C64C1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3CEA77E8292B720E(::System::String* a1, ::System::String*& a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_3CEA77E8292B720E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C416F89188C0C026(::System::UInt64 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_C416F89188C0C026_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_525A43EECFD41458(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_525A43EECFD41458_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_8DDCF4B0445D7175(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_8DDCF4B0445D7175_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_D8946B1B693849AF(::Class_0_16E4307DCC419505_502* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_0_16E4307DCC419505_502*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_D8946B1B693849AF_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_2_663546559182E6FB(::UnityEngine::Transform* a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_663546559182E6FB_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::System::String* Method_2_0C74E6929D088391(::System::UInt64 a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_0C74E6929D088391_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A5CFA053D190B8E6(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_A5CFA053D190B8E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DD7377814EAD872(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_2DD7377814EAD872_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C1FF7715E86F87A(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_2C1FF7715E86F87A_OFFSET))(this, a1);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_946EC0D1F2BB5E97(::System::String* a1, ::System::Single a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_946EC0D1F2BB5E97_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5E93572F9B9C3F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_5E93572F9B9C3F30_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_C554DA6582F73835(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_C554DA6582F73835_OFFSET))(this, a1);
	}

	::System::Void Method_2_527868EEBDCBB5E1(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_527868EEBDCBB5E1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3B6073422880AAED(::UnityEngine::GameObject* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_3B6073422880AAED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_13FFEA9B1D0264A2(::System::String* a1, ::System::Single a2, ::UnityEngine::GameObject* a3, ::System::Int32 a4, ::AkCurveInterpolation a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::GameObject*, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_13FFEA9B1D0264A2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_110AE06E63E34BE4(::UnityEngine::GameObject* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_110AE06E63E34BE4_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_AB94A2DA89A107F3(::UnityEngine::GameObject* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_AB94A2DA89A107F3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1E3E3F34675743C7(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_1E3E3F34675743C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3588A7D22367928F(::System::String* a1, ::System::String* a2, ::Class_0_16E4307DCC419505_147* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Class_0_16E4307DCC419505_147*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_3588A7D22367928F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 Method_2_B71D5BA016E28396(::System::String* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_B71D5BA016E28396_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_378F7CE035FD5B6D(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_378F7CE035FD5B6D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AEEAC3E3FC92548B(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_AEEAC3E3FC92548B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CCD6F3A6263E94E8(::UnityEngine::GameObject* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_CCD6F3A6263E94E8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_3002D7CF5FEE9D3A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::String* Method_2_BCC281DC419BB5B6(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_BCC281DC419BB5B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Boolean Method_2_D0ECA6D90E154547(::System::String* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_D0ECA6D90E154547_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_A13BA0E56DCF3586()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_A13BA0E56DCF3586_OFFSET))(this);
	}

	::System::Void Method_2_8746A2642AD7DC61(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_8746A2642AD7DC61_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_1B79E5E2120D7C6C(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_1B79E5E2120D7C6C_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6F738ECB1BBB902(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_C6F738ECB1BBB902_OFFSET))(this, a1);
	}

	::System::Void Method_2_8BA5587F670061D6(::System::String* a1, ::Foundation::Coroutine::CoroutineHandle& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::Coroutine::CoroutineHandle&))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_8BA5587F670061D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_686BD42735EC05C9(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_686BD42735EC05C9_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_2_9F8F85BA5EA1113D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_9F8F85BA5EA1113D_OFFSET))(this);
	}

	::System::Boolean Method_2_81BDEAA763900846(::UnityEngine::GameObject* a1, ::System::String* a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_81BDEAA763900846_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E32F13808F7B1220(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_E32F13808F7B1220_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_D02A2F5F45D7393D(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_D02A2F5F45D7393D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::Class_1_1747DAB17F36B4DF* Method_2_EB7D3F8378C47077(::System::String* a1)
	{
		return ((::Class_1_1747DAB17F36B4DF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_EB7D3F8378C47077_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Method_2_7676FDB6E6C86FAA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_7676FDB6E6C86FAA_OFFSET))(this);
	}

	::System::Boolean Method_2_114A7D507C5EFD94(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_114A7D507C5EFD94_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Void Method_2_5FF1E2B8FCD9B46C(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_METHOD_2_5FF1E2B8FCD9B46C_OFFSET))(this, a1, a2);
	}
};
