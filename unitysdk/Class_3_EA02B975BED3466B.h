#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_2C598A2C9BF09BDC.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_AB8E50E31B2513AE.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66.h"
#include "unitysdk/Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552.h"
#include "unitysdk/Enum_3_28F2C0E5036251DA.h"
#include "unitysdk/Enum_3_8A11C59891D25300.h"
#include "unitysdk/Enum_3_D5C6B7155F87FB8F.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Ability/InLevelAbilityTargetMask.h"
#include "unitysdk/MoleMole/Config/LevelEndType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/Struct_2_0BE80A9B30AC9017.h"
#include "unitysdk/Struct_2_40CB8E823ACA81D0.h"
#include "unitysdk/Struct_2_8A77D15D7EA8B8D3.h"
#include "unitysdk/Struct_2_9DFB39885391F41D.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_2.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1_3.h"
#include "unitysdk/Struct_2_F5F1DD712FFDA4C0.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_2BEAA93324417DF4;
class Class_1_522B0BB3ABD42EF0;
class Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_10;
class Class_1_8289F2785D9AA990;
class Class_1_B0877C107BC7F2BF;
class Class_1_B6BD64DF575CD84C;
class Class_2_F6579EDC26D1BFF1;
class Class_3_E54D0DE062FD8194;
class Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA;
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class StageEntry; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_3_EA02B975BED3466B_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xF72D450)
#define CLASS_3_EA02B975BED3466B_METHOD_3_0068B163F1F27BF3_OFFSET UNITYSDK_OFFSET(0xF7329D0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_01953D7882459DEC_OFFSET UNITYSDK_OFFSET(0xF733AE0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_0DE30235AD1E5472_OFFSET UNITYSDK_OFFSET(0xF733970)
#define CLASS_3_EA02B975BED3466B_METHOD_3_13D02FA728EAC9EE_OFFSET UNITYSDK_OFFSET(0xF732010)
#define CLASS_3_EA02B975BED3466B_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xF731F50)
#define CLASS_3_EA02B975BED3466B_METHOD_3_19D7EB6F8415CCE1_OFFSET UNITYSDK_OFFSET(0xF72EF40)
#define CLASS_3_EA02B975BED3466B_METHOD_3_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xF731830)
#define CLASS_3_EA02B975BED3466B_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xF72EBE0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_1F49294A70542425_OFFSET UNITYSDK_OFFSET(0xF7318E0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_23425E96E1DD324C_OFFSET UNITYSDK_OFFSET(0xF72EC50)
#define CLASS_3_EA02B975BED3466B_METHOD_3_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xF72F440)
#define CLASS_3_EA02B975BED3466B_METHOD_3_2DC2C6FA90FDA338_OFFSET UNITYSDK_OFFSET(0xF72E610)
#define CLASS_3_EA02B975BED3466B_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xF732320)
#define CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_1_OFFSET UNITYSDK_OFFSET(0xF733200)
#define CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_2_OFFSET UNITYSDK_OFFSET(0xF733890)
#define CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_3_OFFSET UNITYSDK_OFFSET(0xF733BC0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_OFFSET UNITYSDK_OFFSET(0xF731A50)
#define CLASS_3_EA02B975BED3466B_METHOD_3_3C776126338A07D6_OFFSET UNITYSDK_OFFSET(0xF72ED50)
#define CLASS_3_EA02B975BED3466B_METHOD_3_3D44B4187813BA58_OFFSET UNITYSDK_OFFSET(0xF732D00)
#define CLASS_3_EA02B975BED3466B_METHOD_3_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0xF7332C0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_499095FFABD49154_OFFSET UNITYSDK_OFFSET(0xF72F450)
#define CLASS_3_EA02B975BED3466B_METHOD_3_4E1CEED4842C0815_OFFSET UNITYSDK_OFFSET(0xF72E900)
#define CLASS_3_EA02B975BED3466B_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0xF733C80)
#define CLASS_3_EA02B975BED3466B_METHOD_3_56186F96C83FF2DD_OFFSET UNITYSDK_OFFSET(0xF731BB0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_56762F4F80E0DC93_OFFSET UNITYSDK_OFFSET(0xF72D1E0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_5710174DFF89C413_OFFSET UNITYSDK_OFFSET(0xF72F550)
#define CLASS_3_EA02B975BED3466B_METHOD_3_5780411EFE947D94_OFFSET UNITYSDK_OFFSET(0xF7330B0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_5B21E8BA07CE901B_OFFSET UNITYSDK_OFFSET(0xF732B50)
#define CLASS_3_EA02B975BED3466B_METHOD_3_609FA3D38FA252B6_OFFSET UNITYSDK_OFFSET(0xF7332E0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_639AEB9338EFC1BD_OFFSET UNITYSDK_OFFSET(0xF733960)
#define CLASS_3_EA02B975BED3466B_METHOD_3_71ED932420450C3B_OFFSET UNITYSDK_OFFSET(0xF7323C0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_782432CBEFA47D13_OFFSET UNITYSDK_OFFSET(0xF7314F0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_84BEDB4C85D4C4AB_OFFSET UNITYSDK_OFFSET(0xF7316D0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0xF732240)
#define CLASS_3_EA02B975BED3466B_METHOD_3_9557B1C613115965_1_OFFSET UNITYSDK_OFFSET(0xF732E30)
#define CLASS_3_EA02B975BED3466B_METHOD_3_9557B1C613115965_OFFSET UNITYSDK_OFFSET(0xF72E430)
#define CLASS_3_EA02B975BED3466B_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xF733DC0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_A2953D6A3EB2D06E_OFFSET UNITYSDK_OFFSET(0xF731D60)
#define CLASS_3_EA02B975BED3466B_METHOD_3_AA18443F042C7418_OFFSET UNITYSDK_OFFSET(0xF7330A0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_B3F352584D32F9FD_OFFSET UNITYSDK_OFFSET(0xF732210)
#define CLASS_3_EA02B975BED3466B_METHOD_3_B7ED72458888ABCF_OFFSET UNITYSDK_OFFSET(0xF7330D0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_BA59219F41763A1C_OFFSET UNITYSDK_OFFSET(0xF732CF0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_BF508D80265F8A02_OFFSET UNITYSDK_OFFSET(0xF731B20)
#define CLASS_3_EA02B975BED3466B_METHOD_3_BF956A8B5C6CEB93_OFFSET UNITYSDK_OFFSET(0xF733C90)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0xF731B90)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0xF731BA0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0xF733880)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_4_OFFSET UNITYSDK_OFFSET(0xF733950)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xF7316C0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF731890)
#define CLASS_3_EA02B975BED3466B_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xF72F3C0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_D0910C538D3429E2_OFFSET UNITYSDK_OFFSET(0xF733010)
#define CLASS_3_EA02B975BED3466B_METHOD_3_DA8A0099597CAAE1_OFFSET UNITYSDK_OFFSET(0xF731B10)
#define CLASS_3_EA02B975BED3466B_METHOD_3_EBE4E7CFF2943105_OFFSET UNITYSDK_OFFSET(0xF7329E0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_ED3B9DEFBB168816_OFFSET UNITYSDK_OFFSET(0xF72F080)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xF72ED40)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xF731FF0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0xF732000)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0xF732230)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0xF7329C0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xF72EC40)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F6AE21AA4AB06AC6_OFFSET UNITYSDK_OFFSET(0xF732C90)
#define CLASS_3_EA02B975BED3466B_METHOD_3_FC069C04D38B3CEF_OFFSET UNITYSDK_OFFSET(0xF72F140)
#define CLASS_3_EA02B975BED3466B_METHOD_3_FDCC5B03083ECBA7_OFFSET UNITYSDK_OFFSET(0xF732500)
#define CLASS_3_EA02B975BED3466B_METHOD_3_FEC0F64D030D503B_OFFSET UNITYSDK_OFFSET(0xF732020)
#define CLASS_3_EA02B975BED3466B_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xF72BD90)
#define CLASS_3_EA02B975BED3466B__CCTOR_OFFSET UNITYSDK_OFFSET(0xF72D4A0)
#define CLASS_3_EA02B975BED3466B__CTOR_OFFSET UNITYSDK_OFFSET(0xF72D5A0)

inline static constexpr unsigned int Class_3_EA02B975BED3466B_TypeDefinitionIndex = 61830;

class Class_3_EA02B975BED3466B : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Text::StringBuilder** StaticGet_Field_3_40()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EA02B975BED3466B_TypeDefinitionIndex)->GetStaticField(0x4B050);
	}
	// static const ::System::Int32 Field_3_90 = 0x44; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*>* Field_3_35; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* Field_3_27; // 0x50
	::Class_1_8289F2785D9AA990* Field_3_82; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_3_41; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_44; // 0x68
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_10; // 0x70
	::System::Type* Field_3_71; // 0x78
	::Struct_2_F5F1DD712FFDA4C0 Field_3_21; // 0x80
	::MoleMole::EntityHandle Field_3_17; // 0xA0
	::System::Collections::Generic::List_1<::System::String*>* Field_3_66; // 0xB0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_20; // 0xB8
	::Class_1_2BEAA93324417DF4* Field_3_30; // 0xC0
	::Class_1_8289F2785D9AA990* Field_3_31; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_34; // 0xD0
	::System::Type* Field_3_69; // 0xD8
	::System::Collections::Generic::List_1<::Class_1_8289F2785D9AA990*>* Field_3_81; // 0xE0
	::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>* Field_3_16; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_0; // 0xF0
	::System::Collections::Generic::Dictionary_2<::Enum_3_D5C6B7155F87FB8F, ::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1_3>*>* Field_3_50; // 0xF8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_E54D0DE062FD8194*>* Field_3_26; // 0x100
	::Class_1_522B0BB3ABD42EF0* Field_3_5; // 0x108
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_10*>* Field_3_59; // 0x110
	::Struct_2_40CB8E823ACA81D0 Field_3_61; // 0x118
	::System::Object* Field_3_68; // 0x150
	::System::Collections::Generic::List_1<::System::String*>* Field_3_43; // 0x158
	::System::Collections::Generic::IReadOnlyDictionary_2<::Share::EItemType, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*>* Field_3_19; // 0x160
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::MoleMole::Ability::InLevelAbilityTargetMask>>* Field_3_13; // 0x168
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B0877C107BC7F2BF*>* Field_3_28; // 0x170
	::Class_1_8289F2785D9AA990* Field_3_47; // 0x178
	::System::Collections::Generic::List_1<::System::String*>* Field_3_37; // 0x180
	::System::Collections::Generic::List_1<::System::IDisposable*>* Field_3_62; // 0x188
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_3_24; // 0x190
	::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66 Field_3_76; // 0x198
	::Struct_2_40CB8E823ACA81D0 Field_3_67; // 0x1B0
	::Class_3_EA02B975BED3466B_Struct_2_AB8E50E31B2513AE Field_3_77; // 0x1E8
	::System::Collections::Generic::Dictionary_2<::Class_1_0D6706375CDAAE8C*, ::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>*>* Field_3_12; // 0x210
	::MoleMole::Config::StageEntry* Field_3_2; // 0x218
	::System::Collections::Generic::List_1<::Struct_2_0BE80A9B30AC9017>* Field_3_51; // 0x220
	::System::String* Field_3_32; // 0x228
	::System::Collections::Generic::List_1<::System::String*>* Field_3_64; // 0x230
	::System::Collections::Generic::List_1<::Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4>* Field_3_55; // 0x238
	::Struct_2_40CB8E823ACA81D0 Field_3_65; // 0x240
	::Struct_2_40CB8E823ACA81D0 Field_3_60; // 0x278
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>*>* Field_3_25; // 0x2B0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_42; // 0x2B8
	::System::Collections::Generic::Dictionary_2<::Enum_3_8A11C59891D25300, ::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_2>*>* Field_3_36; // 0x2C0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_8289F2785D9AA990*>* Field_3_14; // 0x2C8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_EA02B975BED3466B_Struct_2_2C598A2C9BF09BDC>* Field_3_63; // 0x2D0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_15; // 0x2D8
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* Field_3_9; // 0x2E0
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_3_49; // 0x2E8
	::Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4 Field_3_52; // 0x2F0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552>* Field_3_45; // 0x320
	::System::Collections::Generic::List_1<::Class_1_B6BD64DF575CD84C*>* Field_3_11; // 0x328
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType Field_3_74; // 0x330
	::System::Int32 Field_3_22; // 0x334
	::System::UInt32 Field_3_7; // 0x338
	::System::Int32 Field_3_58; // 0x33C
	::System::Boolean Field_3_53; // 0x340
	::System::Boolean Field_3_8; // 0x341
	::System::Boolean Field_3_6; // 0x342
	::System::Boolean Field_3_86; // 0x343
	::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552 Field_3_46; // 0x344
	::MoleMole::Config::LevelEndType Field_3_83; // 0x348
	::UnityEngine::Vector3 Field_3_39; // 0x34C
	::System::Single Field_3_84; // 0x358
	::System::Int32 Field_3_1; // 0x35C
	::UnityEngine::Vector3 Field_3_33; // 0x360
	::Enum_3_28F2C0E5036251DA Field_3_56; // 0x36C
	::System::Int32 Field_3_18; // 0x370
	::System::Boolean Field_3_79; // 0x374
	::System::Boolean Field_3_80; // 0x375
	::System::Boolean Field_3_72; // 0x376
	::System::Single Field_3_54; // 0x378
	::System::Boolean Field_3_78; // 0x37C
	::System::Boolean Field_3_23; // 0x37D
	::System::Boolean Field_3_48; // 0x37E
	::System::Boolean Field_3_73; // 0x37F
	::MoleMole::FlowCanvas::Nodes::EntityDieCheckType Field_3_70; // 0x380
	::MoleMole::FlowCanvas::Nodes::EntityDieCheckType Field_3_75; // 0x384
	::System::Int32 Field_3_57; // 0x388
	::Foundation::Coroutine::CoroutineHandle Field_3_29; // 0x38C
	::System::Int32 Field_3_4; // 0x390
	::System::Boolean Field_3_87; // 0x394
	::System::Boolean Field_3_38; // 0x395
	::System::Boolean Field_3_91; // 0x396
	::System::Boolean Field_3_85; // 0x397

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_GETCLASSID_OFFSET))(this);
	}

	::Struct_2_9DFB39885391F41D Method_3_9557B1C613115965(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::Struct_2_9DFB39885391F41D(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_9557B1C613115965_OFFSET))(this, a1, a2);
	}

	::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA* Method_3_4E1CEED4842C0815(::System::String* a1, ::System::Boolean& a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*(*)(::PVOID, ::System::String*, ::System::Boolean&, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_4E1CEED4842C0815_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Method_3_23425E96E1DD324C()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_23425E96E1DD324C_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::String* Method_3_3C776126338A07D6(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_3C776126338A07D6_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_19D7EB6F8415CCE1(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::HashSet_1<::System::String*>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_19D7EB6F8415CCE1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_2DC2C6FA90FDA338(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_2DC2C6FA90FDA338_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FC069C04D38B3CEF(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_FC069C04D38B3CEF_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_EA02B975BED3466B* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_EA02B975BED3466B*(*)())((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::Class_1_8289F2785D9AA990* Method_3_24748FC20F375725()
	{
		return ((::Class_1_8289F2785D9AA990*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean Method_3_499095FFABD49154(::System::String* a1, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*&))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_499095FFABD49154_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_56762F4F80E0DC93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_56762F4F80E0DC93_OFFSET))(this);
	}

	::System::Void Method_3_5710174DFF89C413(::MoleMole::Config::StageEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_5710174DFF89C413_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_84BEDB4C85D4C4AB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_84BEDB4C85D4C4AB_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_1F49294A70542425(::Class_1_0D6706375CDAAE8C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_1F49294A70542425_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_3C5F8E3777877644(::Struct_2_9DFB39885391F41D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9DFB39885391F41D))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552>* Method_3_DA8A0099597CAAE1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_DA8A0099597CAAE1_OFFSET))(this);
	}

	::Enum_3_D5C6B7155F87FB8F Method_3_BF508D80265F8A02()
	{
		return ((::Enum_3_D5C6B7155F87FB8F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_BF508D80265F8A02_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::Struct_2_9DFB39885391F41D Method_3_56186F96C83FF2DD(::System::String* a1)
	{
		return ((::Struct_2_9DFB39885391F41D(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_56186F96C83FF2DD_OFFSET))(this, a1);
	}

	::Class_1_B0877C107BC7F2BF* Method_3_A2953D6A3EB2D06E(::System::String* a1, ::System::Single a2)
	{
		return ((::Class_1_B0877C107BC7F2BF*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_A2953D6A3EB2D06E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Method_3_13D02FA728EAC9EE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_13D02FA728EAC9EE_OFFSET))(this);
	}

	::Class_1_0D6706375CDAAE8C* Method_3_FEC0F64D030D503B(::System::Int32 a1, ::Share::EItemType a2)
	{
		return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID, ::System::Int32, ::Share::EItemType))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_FEC0F64D030D503B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B3F352584D32F9FD(::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_B3F352584D32F9FD_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Void Method_3_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_3_71ED932420450C3B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_71ED932420450C3B_OFFSET))(this, a1);
	}

	::System::Void Method_3_FDCC5B03083ECBA7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_FDCC5B03083ECBA7_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*>* Method_3_0068B163F1F27BF3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_0068B163F1F27BF3_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_3_EBE4E7CFF2943105()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_EBE4E7CFF2943105_OFFSET))(this);
	}

	::System::Boolean Method_3_5B21E8BA07CE901B(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_5B21E8BA07CE901B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F6AE21AA4AB06AC6(::Class_1_B0877C107BC7F2BF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B0877C107BC7F2BF*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F6AE21AA4AB06AC6_OFFSET))(this, a1);
	}

	::System::Void Method_3_BA59219F41763A1C(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552>*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_BA59219F41763A1C_OFFSET))(this, a1);
	}

	::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA* Method_3_3D44B4187813BA58(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_3D44B4187813BA58_OFFSET))(this, a1, a2);
	}

	::Struct_2_9DFB39885391F41D Method_3_9557B1C613115965_1(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::Struct_2_9DFB39885391F41D(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_9557B1C613115965_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D0910C538D3429E2(::System::UInt32 a1, ::Class_3_EA02B975BED3466B_Struct_2_2C598A2C9BF09BDC a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_EA02B975BED3466B_Struct_2_2C598A2C9BF09BDC))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_D0910C538D3429E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AA18443F042C7418(::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_AA18443F042C7418_OFFSET))(this, a1);
	}

	::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66 Method_3_5780411EFE947D94()
	{
		return ((::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_5780411EFE947D94_OFFSET))(this);
	}

	::Struct_2_9DFB39885391F41D Method_3_B7ED72458888ABCF(::System::String* a1, ::System::Int32 a2)
	{
		return ((::Struct_2_9DFB39885391F41D(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_B7ED72458888ABCF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_3C5F8E3777877644_1(::Struct_2_9DFB39885391F41D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9DFB39885391F41D))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_1_OFFSET))(this, a1);
	}

	::Struct_2_F5F1DD712FFDA4C0 Method_3_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_F5F1DD712FFDA4C0(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Void Method_3_609FA3D38FA252B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_609FA3D38FA252B6_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_3C5F8E3777877644_2(::Struct_2_9DFB39885391F41D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9DFB39885391F41D))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_4_OFFSET))(this, a1);
	}

	::System::Void Method_3_639AEB9338EFC1BD(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_639AEB9338EFC1BD_OFFSET))(this, a1);
	}

	::System::Void Method_3_0DE30235AD1E5472(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_0DE30235AD1E5472_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_01953D7882459DEC(::Class_2_F6579EDC26D1BFF1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F6579EDC26D1BFF1*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_01953D7882459DEC_OFFSET))(this, a1);
	}

	::System::Void Method_3_782432CBEFA47D13(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_782432CBEFA47D13_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_3C5F8E3777877644_3(::Struct_2_9DFB39885391F41D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9DFB39885391F41D))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_3_OFFSET))(this, a1);
	}

	::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552 Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}

	::System::Boolean Method_3_BF956A8B5C6CEB93(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_BF956A8B5C6CEB93_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::String* Method_3_ED3B9DEFBB168816(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_ED3B9DEFBB168816_OFFSET))(this, a1, a2);
	}
};
