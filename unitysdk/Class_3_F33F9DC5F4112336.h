#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_BAFAEDF1743A31AC.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/MoleMole/Config/CharacterAnimatorStateType.h"
#include "unitysdk/Struct_2_4859D873C1433FD9.h"
#include "unitysdk/Struct_2_77E02A35C116A0EE.h"
#include "unitysdk/Struct_2_78D42C4796256BD0.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_1.h"
#include "unitysdk/UnityEngine/AnimatorCullingMode.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorUpdateMode.h"

class Class_0_16E4307DCC419505_625;
class Class_0_16E4307DCC419505_692;
class Class_1_1CDA382D823F8E80;
class Class_1_230D8C57C4E2F415;
class Class_1_65DD0835297A73C8;
class Class_1_8377BAB19A574A40;
class Class_1_FBBD974B239A498C;
class Class_2_0206DD479BB5C906;
class Class_3_0EDAAFBA6A7CF537_Class_1_9C3B3055A945544F;
class Class_3_B8F2A25A5ADF5CEE;
namespace Foundation { template <typename T1, typename T2, typename T3, typename T4> class CustomEventAction_4; }
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAnimEventGroup; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorControllerParameter; }
namespace UnityEngine { class MdbComponent; }
namespace UnityEngine { class RuntimeAnimatorController; }
template <typename T> class Class_1_532F890E7332989F;

#define CLASS_3_F33F9DC5F4112336_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11DEF4F0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_0F105177B68D78F6_OFFSET UNITYSDK_OFFSET(0x11DF05A0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_10D16ED8FD8731DF_OFFSET UNITYSDK_OFFSET(0x11DEFA70)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_1832E29FF208A65E_OFFSET UNITYSDK_OFFSET(0x11DF1EA0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_1AC7567966BD9AC8_OFFSET UNITYSDK_OFFSET(0x11DF1610)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_1CF12DEB2DCF5547_OFFSET UNITYSDK_OFFSET(0x11DF0080)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11DEFA90)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_24386F3E93170A2A_OFFSET UNITYSDK_OFFSET(0x11DF2110)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0x11DF2640)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_3AFF13D9251956ED_OFFSET UNITYSDK_OFFSET(0x11DF2880)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_3EE388428E110DEC_OFFSET UNITYSDK_OFFSET(0x11DF27F0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_4935D87FC9AF7076_OFFSET UNITYSDK_OFFSET(0x11DF13D0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x11DEFA80)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_555B535121D92B6A_OFFSET UNITYSDK_OFFSET(0x11DF12F0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x11DF2580)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_5ECF98B85414E700_1_OFFSET UNITYSDK_OFFSET(0x11DF2040)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_5ECF98B85414E700_OFFSET UNITYSDK_OFFSET(0x11DF0870)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x11DF0B40)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_793B3DE1CCFFEE4F_OFFSET UNITYSDK_OFFSET(0x11DF0A60)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_7B36CB663866DCC2_OFFSET UNITYSDK_OFFSET(0x11DF1310)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x11DEFB10)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_8807534E0629474E_OFFSET UNITYSDK_OFFSET(0x11DF1600)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_9434EE7470E2836C_OFFSET UNITYSDK_OFFSET(0x11DF09C0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11DF1E10)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_ABE36DC3E1E23BC2_OFFSET UNITYSDK_OFFSET(0x11DEFD10)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x11DF0C20)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x11DF0B20)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x11DEFB00)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x11DF1300)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x11DEFAF0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x11DF09B0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11DF0940)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x11D9C690)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11DF0820)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_CCAAE56E08561869_OFFSET UNITYSDK_OFFSET(0x11DF0680)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x11DF1350)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_DA711D00593D3F9D_OFFSET UNITYSDK_OFFSET(0x11DF1170)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_DFF1F09E14DCC059_OFFSET UNITYSDK_OFFSET(0x11DF1340)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x11DF0990)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x11DF0B30)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x11DF1320)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x11DF1330)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11DF0670)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x11DF0380)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_F55212E77440B167_OFFSET UNITYSDK_OFFSET(0x11DF24F0)
#define CLASS_3_F33F9DC5F4112336_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11DEDB90)
#define CLASS_3_F33F9DC5F4112336__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DEF540)
#define CLASS_3_F33F9DC5F4112336__CTOR_OFFSET UNITYSDK_OFFSET(0x11DEF5C0)

inline static constexpr unsigned int Class_3_F33F9DC5F4112336_TypeDefinitionIndex = 69110;

class Class_3_F33F9DC5F4112336 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_0 = 0x4; // 0x0
	// static const ::System::String* Field_3_17; // 0x0
	// static const ::System::Single Field_3_18; // 0x0
	// static const ::System::Int32 Field_3_105 = 0x15; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_3_60; // 0x48
	::System::Action_2<::System::Int32, ::UnityEngine::AnimatorStateInfo>* Field_3_30; // 0x50
	::System::Action_1<::System::Single>* Field_3_29; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_96; // 0x60
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_103; // 0x68
	::System::Collections::Generic::List_1<::Class_1_8377BAB19A574A40*>* Field_3_64; // 0x70
	::System::Action_1<::System::Int32>* Field_3_44; // 0x78
	::MoleMole::SkillCharacterScriptConfig* Field_3_49; // 0x80
	::System::Action* Field_3_55; // 0x88
	::Il2CppArray<::UnityEngine::AnimatorControllerParameter*>* Field_3_21; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_81; // 0x98
	::System::Collections::Generic::List_1<::Class_1_FBBD974B239A498C*>* Field_3_92; // 0xA0
	::System::Action_2<::System::Int32, ::System::Int32>* Field_3_41; // 0xA8
	::System::Action_2<::System::Int32, ::Struct_2_B6A3FA7992F9F37E_1>* Field_3_27; // 0xB0
	::System::Collections::Generic::List_1<::Class_1_8377BAB19A574A40*>* Field_3_68; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_3_104; // 0xC0
	::System::Action_3<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32>* Field_3_39; // 0xC8
	::System::Action_1<::System::Int32>* Field_3_43; // 0xD0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_58; // 0xD8
	::System::Action* Field_3_28; // 0xE0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_3_79; // 0xE8
	::UnityEngine::Animator* Field_3_6; // 0xF0
	::System::Action_2<::System::Int32, ::System::Boolean>* Field_3_42; // 0xF8
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_3_16; // 0x100
	::Class_0_16E4307DCC419505_625* Field_3_50; // 0x108
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_692*>* Field_3_38; // 0x110
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_95; // 0x118
	::Foundation::CustomEventAction_4<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::UInt32>* Field_3_37; // 0x120
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_230D8C57C4E2F415*>*>* Field_3_56; // 0x128
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_61; // 0x130
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::UnityEngine::RuntimeAnimatorController*>* Field_3_15; // 0x138
	::Class_2_0206DD479BB5C906* Field_3_19; // 0x140
	::System::Action_2<::System::Int32, ::System::Single>* Field_3_40; // 0x148
	::System::Collections::Generic::List_1<::Class_1_8377BAB19A574A40*>* Field_3_67; // 0x150
	::System::Action_4<::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32>* Field_3_45; // 0x158
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_78; // 0x160
	::System::Collections::Generic::Dictionary_2<::Enum_3_BAFAEDF1743A31AC, ::Struct_2_78D42C4796256BD0>* Field_3_88; // 0x168
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_97; // 0x170
	::System::Collections::Generic::List_1<::Struct_2_77E02A35C116A0EE>* Field_3_99; // 0x178
	::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* Field_3_101; // 0x180
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_8377BAB19A574A40*>*>*>* Field_3_65; // 0x188
	::UnityEngine::RuntimeAnimatorController* Field_3_14; // 0x190
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>* Field_3_76; // 0x198
	::Class_3_B8F2A25A5ADF5CEE* Field_3_62; // 0x1A0
	::UnityEngine::MdbComponent* Field_3_8; // 0x1A8
	::System::Action_2<::System::Boolean, ::MoleMole::Battle::Entity*>* Field_3_12; // 0x1B0
	::System::Action_1<::System::Int32>* Field_3_26; // 0x1B8
	::Il2CppArray<::Class_1_65DD0835297A73C8*>* Field_3_75; // 0x1C0
	::Class_1_532F890E7332989F<::MoleMole::Config::CharacterAnimatorStateType>* Field_3_51; // 0x1C8
	::System::Collections::Generic::List_1<::Class_1_8377BAB19A574A40*>* Field_3_69; // 0x1D0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_3_59; // 0x1D8
	::Il2CppArray<::System::Int32>* Field_3_71; // 0x1E0
	::Il2CppArray<::Class_3_0EDAAFBA6A7CF537_Class_1_9C3B3055A945544F*>* Field_3_72; // 0x1E8
	::Class_1_1CDA382D823F8E80* Field_3_57; // 0x1F0
	::System::Collections::Generic::List_1<::Struct_2_4859D873C1433FD9>* Field_3_98; // 0x1F8
	::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_73; // 0x200
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>* Field_3_74; // 0x208
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_80; // 0x210
	::Il2CppArray<::UnityEngine::AnimatorStateInfo>* Field_3_70; // 0x218
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>*>* Field_3_102; // 0x220
	::System::Action* Field_3_47; // 0x228
	::System::Single Field_3_9; // 0x230
	::System::Int32 Field_3_90; // 0x234
	::System::UInt64 Field_3_82; // 0x238
	::MoleMole::Config::AnimatorHitEffect Field_3_35; // 0x240
	::System::Boolean Field_3_46; // 0x244
	::System::Boolean Field_3_63; // 0x245
	::System::Boolean Field_3_1; // 0x246
	::System::Boolean Field_3_94; // 0x247
	::System::Single Field_3_24; // 0x248
	::System::Int32 Field_3_22; // 0x24C
	::System::Boolean Field_3_86; // 0x250
	::System::Boolean Field_3_5; // 0x251
	::System::Boolean Field_3_2; // 0x252
	::System::Boolean Field_3_4; // 0x253
	::System::Int32 Field_3_66; // 0x254
	::System::Int32 Field_3_100; // 0x258
	::System::Int32 Field_3_91; // 0x25C
	::System::Int32 Field_3_23; // 0x260
	::System::Int32 Field_3_34; // 0x264
	::System::Single Field_3_25; // 0x268
	::System::Int32 Field_3_32; // 0x26C
	::System::Int32 Field_3_85; // 0x270
	::System::Boolean Field_3_87; // 0x274
	::System::Boolean Field_3_53; // 0x275
	::System::Boolean Field_3_3; // 0x276
	::System::Boolean Field_3_20; // 0x277
	::System::Int32 Field_3_36; // 0x278
	::UnityEngine::AnimatorCullingMode Field_3_11; // 0x27C
	::System::Single Field_3_89; // 0x280
	::System::Int32 Field_3_84; // 0x284
	::System::Int32 Field_3_33; // 0x288
	::UnityEngine::AnimatorUpdateMode Field_3_10; // 0x28C
	::System::Boolean Field_3_7; // 0x290
	::System::Boolean Field_3_77; // 0x291
	::System::Boolean Field_3_48; // 0x292
	::System::Single Field_3_54; // 0x294
	::System::Byte Field_3_52; // 0x298
	::System::Boolean Field_3_31; // 0x299
	::System::Boolean Field_3_93; // 0x29A
	::System::Boolean Field_3_13; // 0x29B
	::System::UInt64 Field_3_83; // 0x2A0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::RuntimeAnimatorController* Method_3_10D16ED8FD8731DF()
	{
		return ((::UnityEngine::RuntimeAnimatorController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_10D16ED8FD8731DF_OFFSET))(this);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_3_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_87318FF00D6BC7EB_OFFSET))(this);
	}

	::UnityEngine::MdbComponent* Method_3_1CF12DEB2DCF5547()
	{
		return ((::UnityEngine::MdbComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_1CF12DEB2DCF5547_OFFSET))(this);
	}

	::System::Void Method_3_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_F206290BA342BA13_OFFSET))(this);
	}

	::MoleMole::Config::CharacterAnimatorStateType Method_3_0F105177B68D78F6()
	{
		return ((::MoleMole::Config::CharacterAnimatorStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_0F105177B68D78F6_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_CCAAE56E08561869(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_CCAAE56E08561869_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_5ECF98B85414E700(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_5ECF98B85414E700_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_3_9434EE7470E2836C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_9434EE7470E2836C_OFFSET))(this, a1);
	}

	::Class_3_B8F2A25A5ADF5CEE* Method_3_793B3DE1CCFFEE4F()
	{
		return ((::Class_3_B8F2A25A5ADF5CEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_793B3DE1CCFFEE4F_OFFSET))(this);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_3_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_3_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_3_555B535121D92B6A(::UnityEngine::RuntimeAnimatorController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_555B535121D92B6A_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::MoleMole::Config::AnimatorHitEffect Method_3_7B36CB663866DCC2()
	{
		return ((::MoleMole::Config::AnimatorHitEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_7B36CB663866DCC2_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_230D8C57C4E2F415*>*>* Method_3_DFF1F09E14DCC059()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_230D8C57C4E2F415*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_DFF1F09E14DCC059_OFFSET))(this);
	}

	static ::Class_3_F33F9DC5F4112336* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F33F9DC5F4112336*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::Il2CppArray<::UnityEngine::AnimatorControllerParameter*>* Method_3_4935D87FC9AF7076()
	{
		return ((::Il2CppArray<::UnityEngine::AnimatorControllerParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_4935D87FC9AF7076_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_8807534E0629474E(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_230D8C57C4E2F415*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_230D8C57C4E2F415*>*>*))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_8807534E0629474E_OFFSET))(this, a1);
	}

	::System::Void Method_3_1AC7567966BD9AC8(::Enum_3_BAFAEDF1743A31AC a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_BAFAEDF1743A31AC))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_1AC7567966BD9AC8_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_1832E29FF208A65E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_1832E29FF208A65E_OFFSET))(this, a1);
	}

	::System::Void Method_3_5ECF98B85414E700_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_5ECF98B85414E700_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_24386F3E93170A2A(::MoleMole::SkillCharacterScriptConfig* a1, ::UnityEngine::Animator* a2, ::Class_0_16E4307DCC419505_625* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig*, ::UnityEngine::Animator*, ::Class_0_16E4307DCC419505_625*))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_24386F3E93170A2A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_F55212E77440B167()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_F55212E77440B167_OFFSET))(this);
	}

	::UnityEngine::Animator* Method_3_ABE36DC3E1E23BC2()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_ABE36DC3E1E23BC2_OFFSET))(this);
	}

	::System::Void Method_3_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_692* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_692*))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_3_26E509975F92479C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_26E509975F92479C_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_3EE388428E110DEC(::Class_0_16E4307DCC419505_692* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_692*))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_3EE388428E110DEC_OFFSET))(this, a1);
	}

	::System::Void Method_3_3AFF13D9251956ED(::MoleMole::Config::AnimatorHitEffect a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorHitEffect))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_3AFF13D9251956ED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>* Method_3_DA711D00593D3F9D()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_DA711D00593D3F9D_OFFSET))(this);
	}
};
