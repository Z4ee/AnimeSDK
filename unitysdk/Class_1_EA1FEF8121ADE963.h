#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingCore/Source/TracingTools/LogTagDefine_DisableLogTag.h"
#include "unitysdk/Class_1_EA1FEF8121ADE963_Enum_3_47AF448C4A0CF7A3.h"
#include "unitysdk/Class_1_EA1FEF8121ADE963_Enum_3_F6FE0300C1074A6F.h"
#include "unitysdk/Enum_3_018E10D1FF758986_1.h"
#include "unitysdk/Enum_3_4C6BF0F5CE68C510.h"
#include "unitysdk/Enum_3_6D02A7ACA469A7C7.h"
#include "unitysdk/Enum_3_7CF6DCCA0AF3DB5F.h"
#include "unitysdk/Enum_3_7DA580CB619A9E71.h"
#include "unitysdk/Enum_3_9B96ACE49506217C.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/DamageHitType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/HitAnimDirectionType.h"
#include "unitysdk/MoleMole/Config/HitDataType.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_2B6FA625C20F556D.h"
#include "unitysdk/System/Object.h"

class Class_1_1CDA382D823F8E80;
class Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D;
class Class_2_9329E687B3EB29E0_1;
class Class_3_E85F004AD455EAA0;
namespace BinaryTracingCore::Source::TracingTools { class LogTagDefine_LogTag; }
namespace MoleMole::Config { class AttackTimeSlowConfig; }
namespace MoleMole::Config { class ConfigEntityAttackEffect; }
namespace MoleMole::Config { class ConfigHitEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EA1FEF8121ADE963_METHOD_1_0EB1DFF81E150C87_OFFSET UNITYSDK_OFFSET(0x1633DA70)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1633DD50)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_1F2C7BFE0C311F4F_OFFSET UNITYSDK_OFFSET(0x1633E8E0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_205A14011EEBDE57_1_OFFSET UNITYSDK_OFFSET(0x1633E530)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_205A14011EEBDE57_OFFSET UNITYSDK_OFFSET(0x1633DFF0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1633E060)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x1633C7C0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1633E950)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1633DDC0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_413472096512A213_OFFSET UNITYSDK_OFFSET(0x1633DCB0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_41F8B8ACD2DFAAFE_OFFSET UNITYSDK_OFFSET(0x1633E710)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_46E6E8D81F371668_OFFSET UNITYSDK_OFFSET(0x1633D730)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x1633D640)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x1633DFE0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_3_OFFSET UNITYSDK_OFFSET(0x1633E760)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_4_OFFSET UNITYSDK_OFFSET(0x1633E8F0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_5_OFFSET UNITYSDK_OFFSET(0x1633E900)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_6_OFFSET UNITYSDK_OFFSET(0x1633E920)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_7_OFFSET UNITYSDK_OFFSET(0x1633E940)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1633C740)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_69A21B8D5A946488_OFFSET UNITYSDK_OFFSET(0x1633DB50)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_6B4F1BA536F1DB6A_OFFSET UNITYSDK_OFFSET(0x1633DC70)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_6D3A4546382BD733_OFFSET UNITYSDK_OFFSET(0x1633E800)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_77E3CF907BA6F8B7_OFFSET UNITYSDK_OFFSET(0x1633E330)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_1_OFFSET UNITYSDK_OFFSET(0x1633DFD0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_2_OFFSET UNITYSDK_OFFSET(0x1633E050)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_3_OFFSET UNITYSDK_OFFSET(0x1633E7F0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1633DA40)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x1633D9B0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_9990763B5163E37F_OFFSET UNITYSDK_OFFSET(0x1633E860)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_9F3B9DEDBB200991_OFFSET UNITYSDK_OFFSET(0x1633D650)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_A3FAE12D7B6ACD62_1_OFFSET UNITYSDK_OFFSET(0x1633DCC0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1633D6A0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_AC5B7EF1848BE7B8_OFFSET UNITYSDK_OFFSET(0x1633E580)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_AFC15F6B93E33EF3_OFFSET UNITYSDK_OFFSET(0x1633E780)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_B59CA0E1A81AD6A3_OFFSET UNITYSDK_OFFSET(0x1633E790)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_B897C8703A29D609_OFFSET UNITYSDK_OFFSET(0x1633D960)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x1633DE20)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_2_OFFSET UNITYSDK_OFFSET(0x1633E770)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_3_OFFSET UNITYSDK_OFFSET(0x1633E9A0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1633DC80)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C22D01F87E245F4D_OFFSET UNITYSDK_OFFSET(0x1633E810)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1633E910)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1633DCA0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C7B7DE5291230DD6_OFFSET UNITYSDK_OFFSET(0x1633D2C0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1633C750)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_D2F5EC9A721C1561_OFFSET UNITYSDK_OFFSET(0x1633DE30)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_DEA6ACF0B96986BD_OFFSET UNITYSDK_OFFSET(0x1633E120)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E729CA49C1C1FBD1_OFFSET UNITYSDK_OFFSET(0x1633D070)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x1633DA50)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET UNITYSDK_OFFSET(0x1633DA60)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_3_OFFSET UNITYSDK_OFFSET(0x1633DC90)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_4_OFFSET UNITYSDK_OFFSET(0x1633DE10)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_5_OFFSET UNITYSDK_OFFSET(0x1633E110)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_6_OFFSET UNITYSDK_OFFSET(0x1633E930)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_7_OFFSET UNITYSDK_OFFSET(0x1633E9B0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1633D630)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_F69D40EA1B4B8CA1_OFFSET UNITYSDK_OFFSET(0x1633CFF0)
#define CLASS_1_EA1FEF8121ADE963__CCTOR_OFFSET UNITYSDK_OFFSET(0x1633C680)
#define CLASS_1_EA1FEF8121ADE963__CTOR_OFFSET UNITYSDK_OFFSET(0x1633C570)

inline static constexpr unsigned int Class_1_EA1FEF8121ADE963_TypeDefinitionIndex = 86988;

class Class_1_EA1FEF8121ADE963 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>** StaticGet_Field_1_143()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA1FEF8121ADE963_TypeDefinitionIndex)->GetStaticField(0x2DDF0);
	}
	::Class_1_1CDA382D823F8E80* Field_1_114; // 0x10
	::MoleMole::Config::ConfigHitEffect* Field_1_104; // 0x18
	::System::String* Field_1_69; // 0x20
	::MoleMole::Config::ConfigHitEffect* Field_1_105; // 0x28
	::System::String* Field_1_70; // 0x30
	::MoleMole::Config::ConfigHitEffect* Field_1_106; // 0x38
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::System::Single>* Field_1_113; // 0x40
	::System::String* Field_1_73; // 0x48
	::System::String* Field_1_32; // 0x50
	::MoleMole::EntityHandle Field_1_4; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_88; // 0x68
	::System::String* Field_1_31; // 0x70
	::System::Collections::Generic::List_1<::System::String*>* Field_1_74; // 0x78
	::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D* Field_1_102; // 0x80
	::System::String* Field_1_72; // 0x88
	::System::Collections::Generic::List_1<::System::Single>* Field_1_142; // 0x90
	::Class_3_E85F004AD455EAA0* Field_1_103; // 0x98
	::MoleMole::EntityHandle Field_1_6; // 0xA0
	::MoleMole::Config::ConfigEntityAttackEffect* Field_1_108; // 0xB0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* Field_1_109; // 0xB8
	::Class_2_9329E687B3EB29E0_1* Field_1_134; // 0xC0
	::System::Collections::Generic::List_1<::MoleMole::Config::AttackTimeSlowConfig*>* Field_1_33; // 0xC8
	::System::UInt32 Field_1_132; // 0xD0
	::System::Single Field_1_140; // 0xD4
	::System::Single Field_1_80; // 0xD8
	::System::Boolean Field_1_53; // 0xDC
	::Class_1_EA1FEF8121ADE963_Enum_3_47AF448C4A0CF7A3 Field_1_75; // 0xDD
	::System::Boolean Field_1_34; // 0xDE
	::System::Boolean Field_1_139; // 0xDF
	::System::Int32 Field_1_15; // 0xE0
	::System::Int32 Field_1_101; // 0xE4
	::System::Single Field_1_38; // 0xE8
	::System::Int32 Field_1_20; // 0xEC
	::System::Int32 Field_1_16; // 0xF0
	::System::Int32 Field_1_95; // 0xF4
	::System::Double Field_1_129; // 0xF8
	::System::Single Field_1_125; // 0x100
	::System::Boolean Field_1_30; // 0x104
	::System::Boolean Field_1_145; // 0x105
	::System::Boolean Field_1_86; // 0x106
	::System::Boolean Field_1_37; // 0x107
	::System::Single Field_1_110; // 0x108
	::System::Single Field_1_77; // 0x10C
	::System::Single Field_1_112; // 0x110
	::System::Single Field_1_62; // 0x114
	::MoleMole::Config::SpecialDamageTextType Field_1_59; // 0x118
	::System::Single Field_1_118; // 0x11C
	::System::Single Field_1_83; // 0x120
	::System::Boolean Field_1_60; // 0x124
	::System::Boolean Field_1_46; // 0x125
	::System::Boolean Field_1_29; // 0x126
	::System::Boolean Field_1_49; // 0x127
	::System::Int32 Field_1_71; // 0x128
	::Struct_2_2B6FA625C20F556D Field_1_115; // 0x12C
	::Class_1_EA1FEF8121ADE963_Enum_3_F6FE0300C1074A6F Field_1_107; // 0x134
	::System::Int32 Field_1_36; // 0x138
	::System::Int32 Field_1_17; // 0x13C
	::System::Single Field_1_64; // 0x140
	::System::Single Field_1_79; // 0x144
	::System::Boolean Field_1_87; // 0x148
	::System::Boolean Field_1_50; // 0x149
	::System::Boolean Field_1_47; // 0x14A
	::System::Boolean Field_1_93; // 0x14B
	::System::Single Field_1_133; // 0x14C
	::MoleMole::Config::BuffGroupName Field_1_68; // 0x150
	::System::Double Field_1_124; // 0x158
	::System::Single Field_1_42; // 0x160
	::System::Int32 Field_1_135; // 0x164
	::System::Single Field_1_120; // 0x168
	::MoleMole::Config::HitAnimDirectionType Field_1_98; // 0x16C
	::System::Double Field_1_130; // 0x170
	::System::Single Field_1_58; // 0x178
	::System::Single Field_1_76; // 0x17C
	::System::Single Field_1_84; // 0x180
	::System::Single Field_1_141; // 0x184
	::System::Boolean Field_1_94; // 0x188
	::System::Boolean Field_1_22; // 0x189
	::System::Boolean Field_1_136; // 0x18A
	::System::Boolean Field_1_18; // 0x18B
	::MoleMole::Config::HitDataType Field_1_97; // 0x18C
	::System::Single Field_1_44; // 0x190
	::MoleMole::Config::HitForwardType Field_1_99; // 0x194
	::System::UInt32 Field_1_25; // 0x198
	::System::Boolean Field_1_51; // 0x19C
	::System::Boolean Field_1_13; // 0x19D
	::System::Boolean Field_1_90; // 0x19E
	::System::Boolean Field_1_96; // 0x19F
	::System::Single Field_1_117; // 0x1A0
	::System::Boolean Field_1_43; // 0x1A4
	::System::Boolean Field_1_28; // 0x1A5
	::System::Boolean Field_1_85; // 0x1A6
	::System::Boolean Field_1_27; // 0x1A7
	::System::Single Field_1_123; // 0x1A8
	::System::Single Field_1_131; // 0x1AC
	::System::Single Field_1_121; // 0x1B0
	::System::Single Field_1_41; // 0x1B4
	::System::Single Field_1_45; // 0x1B8
	::System::Boolean Field_1_89; // 0x1BC
	::System::Boolean Field_1_55; // 0x1BD
	::System::Boolean Field_1_52; // 0x1BE
	::System::Boolean Field_1_54; // 0x1BF
	::MoleMole::Config::CharacterAliveState Field_1_91; // 0x1C0
	::System::Single Field_1_9; // 0x1C4
	::System::Double Field_1_137; // 0x1C8
	::System::Int32 Field_1_23; // 0x1D0
	::System::Single Field_1_138; // 0x1D4
	::System::Single Field_1_2; // 0x1D8
	::System::Single Field_1_8; // 0x1DC
	::System::Single Field_1_126; // 0x1E0
	::System::Single Field_1_12; // 0x1E4
	::System::Single Field_1_116; // 0x1E8
	::MoleMole::Config::DamageHitType Field_1_67; // 0x1EC
	::System::Boolean Field_1_26; // 0x1F0
	::System::Boolean Field_1_48; // 0x1F1
	::System::Boolean Field_1_66; // 0x1F2
	::System::Boolean Field_1_19; // 0x1F3
	::System::Int32 Field_1_57; // 0x1F4
	::System::Single Field_1_119; // 0x1F8
	::System::Single Field_1_82; // 0x1FC
	::System::Single Field_1_3; // 0x200
	::System::Int32 Field_1_92; // 0x204
	::System::Single Field_1_63; // 0x208
	::System::Single Field_1_78; // 0x20C
	::System::Single Field_1_1; // 0x210
	::System::Single Field_1_11; // 0x214
	::System::Int32 Field_1_7; // 0x218
	::MoleMole::Config::EntityType Field_1_5; // 0x21C
	::System::Int32 Field_1_21; // 0x220
	::System::Single Field_1_40; // 0x224
	::System::Int32 Field_1_14; // 0x228
	::System::Single Field_1_10; // 0x22C
	::Enum_3_7CF6DCCA0AF3DB5F Field_1_146; // 0x230
	::System::Int32 Field_1_144; // 0x234
	::Enum_3_9B96ACE49506217C Field_1_100; // 0x238
	::System::Int32 Field_1_39; // 0x23C
	::System::Single Field_1_128; // 0x240
	::System::Single Field_1_0; // 0x244
	::System::Single Field_1_111; // 0x248
	::Enum_3_6D02A7ACA469A7C7 Field_1_35; // 0x24C
	::System::Single Field_1_127; // 0x250
	::System::Single Field_1_81; // 0x254
	::System::Int32 Field_1_24; // 0x258
	::System::Int32 Field_1_65; // 0x25C
	::MoleMole::Config::SpecialDamageTextType Field_1_61; // 0x260
	::MoleMole::Config::DamageElementType Field_1_56; // 0x264
	::System::Double Field_1_122; // 0x268

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963__CCTOR_OFFSET))();
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_1_E729CA49C1C1FBD1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E729CA49C1C1FBD1_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_9F3B9DEDBB200991(::BinaryTracingCore::Source::TracingTools::LogTagDefine_DisableLogTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::LogTagDefine_DisableLogTag))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_9F3B9DEDBB200991_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	static ::System::Void Method_1_B897C8703A29D609(::Class_1_EA1FEF8121ADE963* a1)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_B897C8703A29D609_OFFSET))(a1);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET))(this, a1);
	}

	::Enum_3_018E10D1FF758986_1 Method_1_0EB1DFF81E150C87()
	{
		return ((::Enum_3_018E10D1FF758986_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_0EB1DFF81E150C87_OFFSET))(this);
	}

	::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D* Method_1_6B4F1BA536F1DB6A()
	{
		return ((::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_6B4F1BA536F1DB6A_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_3_OFFSET))(this, a1);
	}

	::System::Single Method_1_C7B7DE5291230DD6(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C7B7DE5291230DD6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::MoleMole::EntityHandle Method_1_413472096512A213()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_413472096512A213_OFFSET))(this);
	}

	::MoleMole::Config::DamageElementType Method_1_69A21B8D5A946488()
	{
		return ((::MoleMole::Config::DamageElementType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_69A21B8D5A946488_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_A3FAE12D7B6ACD62_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_4_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	static ::System::Void Method_1_D2F5EC9A721C1561(::Class_1_EA1FEF8121ADE963* a1)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_D2F5EC9A721C1561_OFFSET))(a1);
	}

	::System::Void Method_1_8633AE51B23EBDFD_1(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Boolean Method_1_205A14011EEBDE57(::Enum_3_7DA580CB619A9E71 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7DA580CB619A9E71))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_205A14011EEBDE57_OFFSET))(this, a1);
	}

	::System::Void Method_1_8633AE51B23EBDFD_2(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	static ::Class_1_EA1FEF8121ADE963* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_358A144584A5DBFC_OFFSET))();
	}

	::System::Void Method_1_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_1_F69D40EA1B4B8CA1(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_F69D40EA1B4B8CA1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_5_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_DEA6ACF0B96986BD(::Class_1_EA1FEF8121ADE963* a1)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_DEA6ACF0B96986BD_OFFSET))(a1);
	}

	::System::Void Method_1_77E3CF907BA6F8B7(::Enum_3_4C6BF0F5CE68C510 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4C6BF0F5CE68C510))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_77E3CF907BA6F8B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC5B7EF1848BE7B8(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_AC5B7EF1848BE7B8_OFFSET))(this, a1, a2);
	}

	::MoleMole::Config::BuffGroupName Method_1_41F8B8ACD2DFAAFE()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_41F8B8ACD2DFAAFE_OFFSET))(this);
	}

	::System::Boolean Method_1_205A14011EEBDE57_1(::Enum_3_4C6BF0F5CE68C510 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_4C6BF0F5CE68C510))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_205A14011EEBDE57_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_3_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2_2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_2_OFFSET))(this);
	}

	::System::Void Method_1_AFC15F6B93E33EF3(::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D*))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_AFC15F6B93E33EF3_OFFSET))(this, a1);
	}

	::MoleMole::Config::SpecialDamageTextType Method_1_B59CA0E1A81AD6A3()
	{
		return ((::MoleMole::Config::SpecialDamageTextType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_B59CA0E1A81AD6A3_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_3(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_1_6D3A4546382BD733()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_6D3A4546382BD733_OFFSET))(this);
	}

	::System::Void Method_1_C22D01F87E245F4D(::BinaryTracingCore::Source::TracingTools::LogTagDefine_LogTag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::LogTagDefine_LogTag*))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C22D01F87E245F4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9990763B5163E37F(::Enum_3_7DA580CB619A9E71 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7DA580CB619A9E71, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_9990763B5163E37F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1F2C7BFE0C311F4F(::MoleMole::Config::SpecialDamageTextType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_1F2C7BFE0C311F4F_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_4_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_5_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_6()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_6_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_6_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_7_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2_3()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_3_OFFSET))(this);
	}

	::System::Single Method_1_46E6E8D81F371668(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_46E6E8D81F371668_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_7_OFFSET))(this, a1);
	}
};
