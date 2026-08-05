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
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_6.h"
#include "unitysdk/UnityEngine/AnimatorCullingMode.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorUpdateMode.h"

class Class_0_16E4307DCC419505_633;
class Class_0_16E4307DCC419505_767;
class Class_1_1CDA382D823F8E80;
class Class_1_230D8C57C4E2F415;
class Class_1_3A440D564743E7A1;
class Class_1_8377BAB19A574A40;
class Class_1_FBBD974B239A498C;
class Class_2_0206DD479BB5C906;
class Class_3_0EDAAFBA6A7CF537_Class_1_9C3B3055A945544F;
class Class_3_707412604A129938;
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
template <typename T> class Class_1_F85CF3A19F86B09D;

#define CLASS_3_F33F9DC5F4112336_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x157D0780)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_0F105177B68D78F6_OFFSET UNITYSDK_OFFSET(0x157D3720)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_10D16ED8FD8731DF_OFFSET UNITYSDK_OFFSET(0x157D29E0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_1832E29FF208A65E_OFFSET UNITYSDK_OFFSET(0x157D38B0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_1AC7567966BD9AC8_OFFSET UNITYSDK_OFFSET(0x157D1550)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_1CF12DEB2DCF5547_OFFSET UNITYSDK_OFFSET(0x157D0D10)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x157D2800)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_24386F3E93170A2A_OFFSET UNITYSDK_OFFSET(0x157D1170)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0x157D2FC0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_3AFF13D9251956ED_OFFSET UNITYSDK_OFFSET(0x157D2F10)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_3EE388428E110DEC_OFFSET UNITYSDK_OFFSET(0x157D3170)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_4935D87FC9AF7076_OFFSET UNITYSDK_OFFSET(0x157D3450)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x157D3400)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_555B535121D92B6A_OFFSET UNITYSDK_OFFSET(0x157D2FB0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x157D37F0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_5ECF98B85414E700_1_OFFSET UNITYSDK_OFFSET(0x157D2E40)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_5ECF98B85414E700_OFFSET UNITYSDK_OFFSET(0x157D2A10)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x157D3A50)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_793B3DE1CCFFEE4F_OFFSET UNITYSDK_OFFSET(0x157D10B0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_7B36CB663866DCC2_OFFSET UNITYSDK_OFFSET(0x157D3410)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x157D22A0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_8807534E0629474E_OFFSET UNITYSDK_OFFSET(0x157D2FA0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x157D1020)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_ABE36DC3E1E23BC2_OFFSET UNITYSDK_OFFSET(0x157D24A0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x157D1D50)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x157D3430)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_C6B365371C4868A3_OFFSET UNITYSDK_OFFSET(0x157D2DA0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x157D3440)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x157D3710)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x157D2D90)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x157D2F90)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x157D3210)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x157D3B30)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x157D2F40)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_CCAAE56E08561869_OFFSET UNITYSDK_OFFSET(0x157D3260)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x157D2D10)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_DA711D00593D3F9D_OFFSET UNITYSDK_OFFSET(0x157D2860)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_DFF1F09E14DCC059_OFFSET UNITYSDK_OFFSET(0x157D3420)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x157D29F0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x157D2F20)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x157D2F30)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x157D3200)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x157D1010)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x157D2AE0)
#define CLASS_3_F33F9DC5F4112336_METHOD_3_F55212E77440B167_OFFSET UNITYSDK_OFFSET(0x157D3680)
#define CLASS_3_F33F9DC5F4112336_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x157CEE60)
#define CLASS_3_F33F9DC5F4112336__CCTOR_OFFSET UNITYSDK_OFFSET(0x157D07D0)
#define CLASS_3_F33F9DC5F4112336__CTOR_OFFSET UNITYSDK_OFFSET(0x157D0850)

inline static constexpr unsigned int Class_3_F33F9DC5F4112336_TypeDefinitionIndex = 78412;

class Class_3_F33F9DC5F4112336 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_1 = 0x4; // 0x0
	// static const ::System::String* Field_3_23; // 0x0
	// static const ::System::Single Field_3_22; // 0x0
	// static const ::System::Int32 Field_3_111 = 0x15; // 0x0
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_3_16; // 0x48
	::System::Collections::Generic::List_1<::Class_1_8377BAB19A574A40*>* Field_3_75; // 0x50
	::Il2CppArray<::System::Int32>* Field_3_73; // 0x58
	::UnityEngine::Animator* Field_3_10; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_3_104; // 0x68
	::System::Action* Field_3_49; // 0x70
	::System::Action_4<::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32>* Field_3_51; // 0x78
	::System::Collections::Generic::List_1<::Class_1_FBBD974B239A498C*>* Field_3_92; // 0x80
	::MoleMole::SkillCharacterScriptConfig* Field_3_55; // 0x88
	::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_79; // 0x90
	::System::Action_2<::System::Int32, ::System::Single>* Field_3_40; // 0x98
	::System::Collections::Generic::List_1<::Class_1_8377BAB19A574A40*>* Field_3_69; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_3_60; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_87; // 0xB0
	::System::Action_2<::System::Int32, ::Struct_2_B6A3FA7992F9F37E_6>* Field_3_29; // 0xB8
	::System::Collections::Generic::List_1<::Struct_2_4859D873C1433FD9>* Field_3_102; // 0xC0
	::System::Action_1<::System::Single>* Field_3_35; // 0xC8
	::Class_1_F85CF3A19F86B09D<::MoleMole::Config::CharacterAnimatorStateType>* Field_3_53; // 0xD0
	::Il2CppArray<::Class_3_0EDAAFBA6A7CF537_Class_1_9C3B3055A945544F*>* Field_3_72; // 0xD8
	::UnityEngine::RuntimeAnimatorController* Field_3_18; // 0xE0
	::System::Collections::Generic::List_1<::Struct_2_77E02A35C116A0EE>* Field_3_101; // 0xE8
	::System::Action_2<::System::Int32, ::UnityEngine::AnimatorStateInfo>* Field_3_34; // 0xF0
	::System::Action_1<::System::Int32>* Field_3_45; // 0xF8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_67; // 0x100
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_230D8C57C4E2F415*>*>* Field_3_56; // 0x108
	::System::Action_1<::System::Int32>* Field_3_30; // 0x110
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_80; // 0x118
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_3_81; // 0x120
	::Il2CppArray<::UnityEngine::AnimatorStateInfo>* Field_3_74; // 0x128
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_105; // 0x130
	::Class_3_707412604A129938* Field_3_66; // 0x138
	::System::Action_2<::System::Boolean, ::MoleMole::Battle::Entity*>* Field_3_12; // 0x140
	::Class_1_1CDA382D823F8E80* Field_3_63; // 0x148
	::System::Action_1<::System::Int32>* Field_3_44; // 0x150
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_62; // 0x158
	::Il2CppArray<::Class_1_3A440D564743E7A1*>* Field_3_77; // 0x160
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_103; // 0x168
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_3_61; // 0x170
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_82; // 0x178
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>* Field_3_76; // 0x180
	::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* Field_3_107; // 0x188
	::System::Collections::Generic::Dictionary_2<::Enum_3_BAFAEDF1743A31AC, ::Struct_2_78D42C4796256BD0>* Field_3_88; // 0x190
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_8377BAB19A574A40*>*>*>* Field_3_71; // 0x198
	::System::Action_3<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32>* Field_3_41; // 0x1A0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_97; // 0x1A8
	::Class_2_0206DD479BB5C906* Field_3_21; // 0x1B0
	::System::Collections::Generic::List_1<::Class_1_8377BAB19A574A40*>* Field_3_64; // 0x1B8
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_633*>* Field_3_42; // 0x1C0
	::System::Action* Field_3_57; // 0x1C8
	::Foundation::CustomEventAction_4<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::UInt32>* Field_3_43; // 0x1D0
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::UnityEngine::RuntimeAnimatorController*>* Field_3_17; // 0x1D8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>*>* Field_3_106; // 0x1E0
	::Il2CppArray<::UnityEngine::AnimatorControllerParameter*>* Field_3_27; // 0x1E8
	::UnityEngine::MdbComponent* Field_3_8; // 0x1F0
	::System::Collections::Generic::List_1<::Class_1_8377BAB19A574A40*>* Field_3_68; // 0x1F8
	::System::Action* Field_3_28; // 0x200
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>* Field_3_78; // 0x208
	::System::Action_2<::System::Int32, ::System::Boolean>* Field_3_46; // 0x210
	::System::Action_2<::System::Int32, ::System::Int32>* Field_3_47; // 0x218
	::Class_0_16E4307DCC419505_767* Field_3_54; // 0x220
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_96; // 0x228
	::System::Int32 Field_3_36; // 0x230
	::System::Single Field_3_31; // 0x234
	::System::Boolean Field_3_48; // 0x238
	::System::Boolean Field_3_33; // 0x239
	::System::Boolean Field_3_59; // 0x23A
	::System::Boolean Field_3_11; // 0x23B
	::System::Boolean Field_3_7; // 0x23C
	::System::Boolean Field_3_6; // 0x23D
	::System::Boolean Field_3_89; // 0x23E
	::System::Boolean Field_3_4; // 0x23F
	::System::UInt64 Field_3_85; // 0x240
	::System::Int32 Field_3_93; // 0x248
	::System::Int32 Field_3_94; // 0x24C
	::System::Int32 Field_3_100; // 0x250
	::System::Int32 Field_3_70; // 0x254
	::System::Boolean Field_3_50; // 0x258
	::System::Boolean Field_3_98; // 0x259
	::System::Byte Field_3_52; // 0x25A
	::System::Boolean Field_3_90; // 0x25B
	::System::Boolean Field_3_65; // 0x25C
	::System::Boolean Field_3_19; // 0x25D
	::System::Boolean Field_3_20; // 0x25E
	::System::Boolean Field_3_5; // 0x25F
	::UnityEngine::AnimatorCullingMode Field_3_13; // 0x260
	::System::Int32 Field_3_39; // 0x264
	::System::UInt64 Field_3_86; // 0x268
	::System::Int32 Field_3_38; // 0x270
	::System::Boolean Field_3_9; // 0x274
	::System::Boolean Field_3_99; // 0x275
	::System::Boolean Field_3_83; // 0x276
	::System::Boolean Field_3_0; // 0x277
	::System::Single Field_3_95; // 0x278
	::System::Int32 Field_3_84; // 0x27C
	::System::Single Field_3_24; // 0x280
	::System::Int32 Field_3_25; // 0x284
	::MoleMole::Config::AnimatorHitEffect Field_3_37; // 0x288
	::System::Single Field_3_15; // 0x28C
	::System::Single Field_3_58; // 0x290
	::System::Int32 Field_3_26; // 0x294
	::System::Int32 Field_3_91; // 0x298
	::System::Int32 Field_3_32; // 0x29C
	::UnityEngine::AnimatorUpdateMode Field_3_14; // 0x2A0

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

	::UnityEngine::MdbComponent* Method_3_1CF12DEB2DCF5547()
	{
		return ((::UnityEngine::MdbComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_1CF12DEB2DCF5547_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Class_3_707412604A129938* Method_3_793B3DE1CCFFEE4F()
	{
		return ((::Class_3_707412604A129938*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_793B3DE1CCFFEE4F_OFFSET))(this);
	}

	::System::Void Method_3_24386F3E93170A2A(::MoleMole::SkillCharacterScriptConfig* a1, ::UnityEngine::Animator* a2, ::Class_0_16E4307DCC419505_767* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig*, ::UnityEngine::Animator*, ::Class_0_16E4307DCC419505_767*))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_24386F3E93170A2A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_1AC7567966BD9AC8(::Enum_3_BAFAEDF1743A31AC a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_BAFAEDF1743A31AC))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_1AC7567966BD9AC8_OFFSET))(this, a1);
	}

	::System::Void Method_3_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>* Method_3_DA711D00593D3F9D()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_DA711D00593D3F9D_OFFSET))(this);
	}

	::UnityEngine::RuntimeAnimatorController* Method_3_10D16ED8FD8731DF()
	{
		return ((::UnityEngine::RuntimeAnimatorController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_10D16ED8FD8731DF_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_5ECF98B85414E700(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_5ECF98B85414E700_OFFSET))(this, a1);
	}

	static ::Class_3_F33F9DC5F4112336* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F33F9DC5F4112336*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_C6B365371C4868A3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_C6B365371C4868A3_OFFSET))(this, a1);
	}

	::System::Void Method_3_5ECF98B85414E700_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_5ECF98B85414E700_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_3_3AFF13D9251956ED(::MoleMole::Config::AnimatorHitEffect a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorHitEffect))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_3AFF13D9251956ED_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_3_8807534E0629474E(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_230D8C57C4E2F415*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_230D8C57C4E2F415*>*>*))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_8807534E0629474E_OFFSET))(this, a1);
	}

	::System::Void Method_3_555B535121D92B6A(::UnityEngine::RuntimeAnimatorController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_555B535121D92B6A_OFFSET))(this, a1);
	}

	::System::Void Method_3_26E509975F92479C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_26E509975F92479C_OFFSET))(this, a1);
	}

	::System::Void Method_3_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_F206290BA342BA13_OFFSET))(this);
	}

	::System::Boolean Method_3_3EE388428E110DEC(::Class_0_16E4307DCC419505_633* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_633*))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_3EE388428E110DEC_OFFSET))(this, a1);
	}

	::UnityEngine::Animator* Method_3_ABE36DC3E1E23BC2()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_ABE36DC3E1E23BC2_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_CCAAE56E08561869(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_CCAAE56E08561869_OFFSET))(this, a1);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::MoleMole::Config::AnimatorHitEffect Method_3_7B36CB663866DCC2()
	{
		return ((::MoleMole::Config::AnimatorHitEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_7B36CB663866DCC2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_230D8C57C4E2F415*>*>* Method_3_DFF1F09E14DCC059()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_230D8C57C4E2F415*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_DFF1F09E14DCC059_OFFSET))(this);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::AnimatorControllerParameter*>* Method_3_4935D87FC9AF7076()
	{
		return ((::Il2CppArray<::UnityEngine::AnimatorControllerParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_4935D87FC9AF7076_OFFSET))(this);
	}

	::System::Boolean Method_3_F55212E77440B167()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_F55212E77440B167_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::MoleMole::Config::CharacterAnimatorStateType Method_3_0F105177B68D78F6()
	{
		return ((::MoleMole::Config::CharacterAnimatorStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_0F105177B68D78F6_OFFSET))(this);
	}

	::System::Void Method_3_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_633* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_633*))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_3_1832E29FF208A65E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_1832E29FF208A65E_OFFSET))(this, a1);
	}

	::System::Void Method_3_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F33F9DC5F4112336_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}
};
