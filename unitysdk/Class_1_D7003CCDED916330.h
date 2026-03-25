#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneTransition.h"
#include "unitysdk/Struct_2_1ADED1EDA7578A33.h"
#include "unitysdk/Struct_2_648594091F1A68D6.h"
#include "unitysdk/Struct_2_D3B84DD3734B83D6.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_2B5DB3011ADDA3A1;
class Class_1_3B7CDB4D3884C815;
class Class_1_529B81A5018A5315;
class Class_1_92E3E110E38400D6;
class Class_1_ABBDB674B551FDE4;
class Class_1_CB8B18119D615958;
class Class_1_D7003CCDED916330_Class_3_640C173449D72699;
class Class_1_FF3F7597CCC24938;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class FreeStyleAnimClipGroupZoneInfo; }
namespace RPG::GameCore { class FreeStyleAnimClipZoneInfo; }
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class FreeStyleMotionConfigRow; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }
namespace RPG::GameCore { class FreeStyleState; }
namespace RPG::GameCore { class FreeStyleTriggerGraphInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorOverrideController; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define CLASS_1_D7003CCDED916330_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11592E70)
#define CLASS_1_D7003CCDED916330_GET_FREESTYLECHARACTERCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1159B130)
#define CLASS_1_D7003CCDED916330_GET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0x1159B110)
#define CLASS_1_D7003CCDED916330_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x115938C0)
#define CLASS_1_D7003CCDED916330_METHOD_1_1186AA98BE18A2BE_OFFSET UNITYSDK_OFFSET(0x11599410)
#define CLASS_1_D7003CCDED916330_METHOD_1_1472FB3A8EFD23F7_OFFSET UNITYSDK_OFFSET(0x11593EB0)
#define CLASS_1_D7003CCDED916330_METHOD_1_160341DB9A01E525_OFFSET UNITYSDK_OFFSET(0x1159AA30)
#define CLASS_1_D7003CCDED916330_METHOD_1_16157810B5FB0F52_OFFSET UNITYSDK_OFFSET(0x1159B200)
#define CLASS_1_D7003CCDED916330_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11593E50)
#define CLASS_1_D7003CCDED916330_METHOD_1_21378A7EB1BCB13B_OFFSET UNITYSDK_OFFSET(0x11592B30)
#define CLASS_1_D7003CCDED916330_METHOD_1_21C454FE13937A42_OFFSET UNITYSDK_OFFSET(0x11591740)
#define CLASS_1_D7003CCDED916330_METHOD_1_2322A27EAA32EB6E_OFFSET UNITYSDK_OFFSET(0x115965B0)
#define CLASS_1_D7003CCDED916330_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1159B1E0)
#define CLASS_1_D7003CCDED916330_METHOD_1_269AC17BE7A40357_OFFSET UNITYSDK_OFFSET(0x11592070)
#define CLASS_1_D7003CCDED916330_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x11592410)
#define CLASS_1_D7003CCDED916330_METHOD_1_302603B99CE8E718_OFFSET UNITYSDK_OFFSET(0x11590B10)
#define CLASS_1_D7003CCDED916330_METHOD_1_3262CEF3E873A6C4_OFFSET UNITYSDK_OFFSET(0x1159A8C0)
#define CLASS_1_D7003CCDED916330_METHOD_1_354D0F238CF1BE04_OFFSET UNITYSDK_OFFSET(0x11597880)
#define CLASS_1_D7003CCDED916330_METHOD_1_39F52B819C5C4D7F_OFFSET UNITYSDK_OFFSET(0x11591960)
#define CLASS_1_D7003CCDED916330_METHOD_1_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x11594540)
#define CLASS_1_D7003CCDED916330_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x115905C0)
#define CLASS_1_D7003CCDED916330_METHOD_1_3D91BFBB367F56A5_OFFSET UNITYSDK_OFFSET(0x11593BF0)
#define CLASS_1_D7003CCDED916330_METHOD_1_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x11598510)
#define CLASS_1_D7003CCDED916330_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11592120)
#define CLASS_1_D7003CCDED916330_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x1159B210)
#define CLASS_1_D7003CCDED916330_METHOD_1_4BA0E333242074E4_OFFSET UNITYSDK_OFFSET(0x115919D0)
#define CLASS_1_D7003CCDED916330_METHOD_1_4C0B9E1915FA89DA_OFFSET UNITYSDK_OFFSET(0x115906C0)
#define CLASS_1_D7003CCDED916330_METHOD_1_4C5147B993994199_OFFSET UNITYSDK_OFFSET(0x1159B170)
#define CLASS_1_D7003CCDED916330_METHOD_1_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x11597310)
#define CLASS_1_D7003CCDED916330_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x11596B50)
#define CLASS_1_D7003CCDED916330_METHOD_1_5CC59AB1051145BE_OFFSET UNITYSDK_OFFSET(0x11595B40)
#define CLASS_1_D7003CCDED916330_METHOD_1_5DDAADAADE1153D5_OFFSET UNITYSDK_OFFSET(0x11596290)
#define CLASS_1_D7003CCDED916330_METHOD_1_6E2745B93CB449A5_OFFSET UNITYSDK_OFFSET(0x11595460)
#define CLASS_1_D7003CCDED916330_METHOD_1_7017F4DDE98805F5_OFFSET UNITYSDK_OFFSET(0x11598570)
#define CLASS_1_D7003CCDED916330_METHOD_1_71F7FB928ED97D38_OFFSET UNITYSDK_OFFSET(0x11593300)
#define CLASS_1_D7003CCDED916330_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x115909F0)
#define CLASS_1_D7003CCDED916330_METHOD_1_74B14F0DAA08DACF_OFFSET UNITYSDK_OFFSET(0x115995A0)
#define CLASS_1_D7003CCDED916330_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x11590810)
#define CLASS_1_D7003CCDED916330_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x11598900)
#define CLASS_1_D7003CCDED916330_METHOD_1_7EE99EE6AA394745_OFFSET UNITYSDK_OFFSET(0x11593520)
#define CLASS_1_D7003CCDED916330_METHOD_1_8377BC0DCBA8CDB6_OFFSET UNITYSDK_OFFSET(0x1159B1F0)
#define CLASS_1_D7003CCDED916330_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x11592F90)
#define CLASS_1_D7003CCDED916330_METHOD_1_891AE2223A8E0EF9_OFFSET UNITYSDK_OFFSET(0x11596C20)
#define CLASS_1_D7003CCDED916330_METHOD_1_8D33B10F230C1D5D_OFFSET UNITYSDK_OFFSET(0x11592240)
#define CLASS_1_D7003CCDED916330_METHOD_1_8D45F768972ADA9D_OFFSET UNITYSDK_OFFSET(0x11591230)
#define CLASS_1_D7003CCDED916330_METHOD_1_943006AA2C5A9EC8_OFFSET UNITYSDK_OFFSET(0x11590C40)
#define CLASS_1_D7003CCDED916330_METHOD_1_95C6D7B20C7490B7_OFFSET UNITYSDK_OFFSET(0x11593190)
#define CLASS_1_D7003CCDED916330_METHOD_1_97285E397E8F5091_OFFSET UNITYSDK_OFFSET(0x11597100)
#define CLASS_1_D7003CCDED916330_METHOD_1_97AC5E0734B0603A_OFFSET UNITYSDK_OFFSET(0x11590EF0)
#define CLASS_1_D7003CCDED916330_METHOD_1_97F4494AB615EE69_OFFSET UNITYSDK_OFFSET(0x11593410)
#define CLASS_1_D7003CCDED916330_METHOD_1_9E21C153E3359129_OFFSET UNITYSDK_OFFSET(0x11590610)
#define CLASS_1_D7003CCDED916330_METHOD_1_A66C7C5AF3755AFF_OFFSET UNITYSDK_OFFSET(0x115925B0)
#define CLASS_1_D7003CCDED916330_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1159B190)
#define CLASS_1_D7003CCDED916330_METHOD_1_B53D0EE6A78EC162_OFFSET UNITYSDK_OFFSET(0x115916E0)
#define CLASS_1_D7003CCDED916330_METHOD_1_B75F7C20345DE308_OFFSET UNITYSDK_OFFSET(0x11593250)
#define CLASS_1_D7003CCDED916330_METHOD_1_BA34E778694A5115_OFFSET UNITYSDK_OFFSET(0x11594A40)
#define CLASS_1_D7003CCDED916330_METHOD_1_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x11592370)
#define CLASS_1_D7003CCDED916330_METHOD_1_BF302FCDF545D0AF_OFFSET UNITYSDK_OFFSET(0x115921B0)
#define CLASS_1_D7003CCDED916330_METHOD_1_BF7707C04361A205_OFFSET UNITYSDK_OFFSET(0x1159B180)
#define CLASS_1_D7003CCDED916330_METHOD_1_C1E0405EEC95DC65_OFFSET UNITYSDK_OFFSET(0x11598780)
#define CLASS_1_D7003CCDED916330_METHOD_1_C2F63F946333FD36_OFFSET UNITYSDK_OFFSET(0x1159A1E0)
#define CLASS_1_D7003CCDED916330_METHOD_1_C40B253958EEF7DF_OFFSET UNITYSDK_OFFSET(0x115963F0)
#define CLASS_1_D7003CCDED916330_METHOD_1_C5D90119C48B3224_1_OFFSET UNITYSDK_OFFSET(0x115984A0)
#define CLASS_1_D7003CCDED916330_METHOD_1_C5D90119C48B3224_OFFSET UNITYSDK_OFFSET(0x11598430)
#define CLASS_1_D7003CCDED916330_METHOD_1_C6C5BA17F4D34EC0_OFFSET UNITYSDK_OFFSET(0x11597A60)
#define CLASS_1_D7003CCDED916330_METHOD_1_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x11598CF0)
#define CLASS_1_D7003CCDED916330_METHOD_1_C7CD1D914D759BC5_OFFSET UNITYSDK_OFFSET(0x11590500)
#define CLASS_1_D7003CCDED916330_METHOD_1_C8665EDB3199E9ED_OFFSET UNITYSDK_OFFSET(0x11595270)
#define CLASS_1_D7003CCDED916330_METHOD_1_C950DB2BC3199636_OFFSET UNITYSDK_OFFSET(0x11593670)
#define CLASS_1_D7003CCDED916330_METHOD_1_D00BDC1662E655E3_OFFSET UNITYSDK_OFFSET(0x11595630)
#define CLASS_1_D7003CCDED916330_METHOD_1_D0686472A76BA214_OFFSET UNITYSDK_OFFSET(0x115985E0)
#define CLASS_1_D7003CCDED916330_METHOD_1_D0953E9AB73BE8D1_OFFSET UNITYSDK_OFFSET(0x115959E0)
#define CLASS_1_D7003CCDED916330_METHOD_1_D1FDF59E2DFE5D07_OFFSET UNITYSDK_OFFSET(0x11592D90)
#define CLASS_1_D7003CCDED916330_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x11598720)
#define CLASS_1_D7003CCDED916330_METHOD_1_D573302903E189CB_OFFSET UNITYSDK_OFFSET(0x115996B0)
#define CLASS_1_D7003CCDED916330_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x1159B150)
#define CLASS_1_D7003CCDED916330_METHOD_1_DD511673537D2D25_OFFSET UNITYSDK_OFFSET(0x1159AD10)
#define CLASS_1_D7003CCDED916330_METHOD_1_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0x115988B0)
#define CLASS_1_D7003CCDED916330_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11591FF0)
#define CLASS_1_D7003CCDED916330_METHOD_1_F1DE20B60C60669F_1_OFFSET UNITYSDK_OFFSET(0x11591100)
#define CLASS_1_D7003CCDED916330_METHOD_1_F1DE20B60C60669F_OFFSET UNITYSDK_OFFSET(0x11590DC0)
#define CLASS_1_D7003CCDED916330_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x11596B30)
#define CLASS_1_D7003CCDED916330_METHOD_1_FCB3AFE4BD0D374C_OFFSET UNITYSDK_OFFSET(0x11597F50)
#define CLASS_1_D7003CCDED916330_METHOD_1_FD558FCF4EE1BF62_OFFSET UNITYSDK_OFFSET(0x115961A0)
#define CLASS_1_D7003CCDED916330_SET_FREESTYLECHARACTERCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1159B140)
#define CLASS_1_D7003CCDED916330_SET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0x1159B120)
#define CLASS_1_D7003CCDED916330__CTOR_OFFSET UNITYSDK_OFFSET(0x11591370)

inline static constexpr unsigned int Class_1_D7003CCDED916330_TypeDefinitionIndex = 46134;

class Class_1_D7003CCDED916330 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_8 = 0x2; // 0x0
	// static const ::System::Single Field_1_9; // 0x0
	// static const ::System::Single Field_1_10; // 0x0
	::System::String* _FreeStyleCharacterConfigPath_k__BackingField; // 0x10
	::RPG::Client::IAssetOperation* Field_1_20; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimClipZoneInfo*>* Field_1_26; // 0x20
	::UnityEngine::AnimatorOverrideController* Field_1_14; // 0x28
	::Class_1_2B5DB3011ADDA3A1* Field_1_35; // 0x30
	::Class_1_D7003CCDED916330_Class_3_640C173449D72699* Field_1_41; // 0x38
	::System::String* _FreeStyleCharacterID_k__BackingField; // 0x40
	::RPG::GameCore::FreeStyleMotionConfigRow* Field_1_23; // 0x48
	::RPG::GameCore::FreeStyleComponent* Field_1_11; // 0x50
	::RPG::Client::IAssetOperation* Field_1_19; // 0x58
	::System::Action_1<::System::UInt32>* Field_1_7; // 0x60
	::Il2CppArray<::Class_1_FF3F7597CCC24938*>* Field_1_15; // 0x68
	::Class_1_529B81A5018A5315* Field_1_38; // 0x70
	::Class_1_2B5DB3011ADDA3A1* Field_1_36; // 0x78
	::Class_1_2B5DB3011ADDA3A1* Field_1_34; // 0x80
	::Class_1_ABBDB674B551FDE4* Field_1_17; // 0x88
	::RPG::Client::MockAnimator* Field_1_12; // 0x90
	::System::Collections::Generic::List_1<::Class_1_CB8B18119D615958*>* Field_1_40; // 0x98
	::RPG::Client::IAssetOperation* Field_1_18; // 0xA0
	::RPG::Client::IAssetOperation* Field_1_21; // 0xA8
	::RPG::GameCore::FreeStyleMotionInfoConfig* Field_1_24; // 0xB0
	::RPG::GameCore::TaskContext* Field_1_31; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3B7CDB4D3884C815*>* Field_1_1; // 0xC0
	::Class_1_529B81A5018A5315* Field_1_39; // 0xC8
	::Class_1_92E3E110E38400D6* Field_1_29; // 0xD0
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* Field_1_2; // 0xD8
	::System::Action_2<::System::Int32, ::Struct_2_D3B84DD3734B83D6>* Field_1_5; // 0xE0
	::System::Action_2<::System::UInt32, ::Struct_2_D3B84DD3734B83D6>* Field_1_6; // 0xE8
	::Class_1_2B5DB3011ADDA3A1* Field_1_37; // 0xF0
	::System::String* Field_1_28; // 0xF8
	::UnityEngine::RuntimeAnimatorController* Field_1_13; // 0x100
	::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimClipGroupZoneInfo*>* Field_1_27; // 0x108
	::System::Int32 Field_1_30; // 0x110
	::System::Int32 Field_1_22; // 0x114
	::System::UInt32 Field_1_16; // 0x118
	::Struct_2_648594091F1A68D6 Field_1_25; // 0x11C
	::System::Int32 Field_1_33; // 0x13C
	::System::Boolean Field_1_0; // 0x140
	::System::Int32 Field_1_32; // 0x144

	::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1, ::RPG::Client::MockAnimator* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*, ::RPG::Client::MockAnimator*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_3B7CDB4D3884C815* Method_1_C7CD1D914D759BC5(::System::String* a1)
	{
		return ((::Class_1_3B7CDB4D3884C815*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_C7CD1D914D759BC5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_3B7CDB4D3884C815*>* Method_1_9E21C153E3359129()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_3B7CDB4D3884C815*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_9E21C153E3359129_OFFSET))(this);
	}

	::System::Void Method_1_4C0B9E1915FA89DA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_4C0B9E1915FA89DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Void Method_1_302603B99CE8E718(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_302603B99CE8E718_OFFSET))(this, a1);
	}

	::System::Void Method_1_943006AA2C5A9EC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_943006AA2C5A9EC8_OFFSET))(this);
	}

	::System::Void Method_1_F1DE20B60C60669F(::UnityEngine::AnimatorOverrideController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_F1DE20B60C60669F_OFFSET))(this, a1);
	}

	::System::Void Method_1_97AC5E0734B0603A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_97AC5E0734B0603A_OFFSET))(this);
	}

	::System::Void Method_1_F1DE20B60C60669F_1(::UnityEngine::AnimatorOverrideController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_F1DE20B60C60669F_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8D45F768972ADA9D(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_8D45F768972ADA9D_OFFSET))(this, a1);
	}

	::System::Void Method_1_B53D0EE6A78EC162(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_B53D0EE6A78EC162_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_39F52B819C5C4D7F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_39F52B819C5C4D7F_OFFSET))(this, a1);
	}

	::System::Void Method_1_4BA0E333242074E4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_4BA0E333242074E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF302FCDF545D0AF(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_BF302FCDF545D0AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_BE4EBC8FF4054312_OFFSET))(this);
	}

	::System::Void Method_1_21378A7EB1BCB13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_21378A7EB1BCB13B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::FreeStyleTriggerGraphInfo* Method_1_95C6D7B20C7490B7(::System::String* a1)
	{
		return ((::RPG::GameCore::FreeStyleTriggerGraphInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_95C6D7B20C7490B7_OFFSET))(this, a1);
	}

	::RPG::GameCore::FreeStyleMotionInfoConfig* Method_1_B75F7C20345DE308(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::FreeStyleMotionInfoConfig*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_B75F7C20345DE308_OFFSET))(this, a1, a2);
	}

	::Struct_2_1ADED1EDA7578A33 Method_1_71F7FB928ED97D38(::System::Boolean& a1)
	{
		return ((::Struct_2_1ADED1EDA7578A33(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_71F7FB928ED97D38_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_97F4494AB615EE69(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_97F4494AB615EE69_OFFSET))(this, a1);
	}

	::System::Void Method_1_7EE99EE6AA394745(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_7EE99EE6AA394745_OFFSET))(this, a1);
	}

	::System::Void Method_1_C950DB2BC3199636(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_C950DB2BC3199636_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3D91BFBB367F56A5(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_3D91BFBB367F56A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A66C7C5AF3755AFF(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_A66C7C5AF3755AFF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C8665EDB3199E9ED(::UnityEngine::AnimationClip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_C8665EDB3199E9ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_269AC17BE7A40357(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_269AC17BE7A40357_OFFSET))(this, a1);
	}

	::System::Void Method_1_D00BDC1662E655E3(::System::Boolean a1, ::Struct_2_D3B84DD3734B83D6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_D00BDC1662E655E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D0953E9AB73BE8D1(::UnityEngine::Animator* a1, ::Il2CppArray<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_D0953E9AB73BE8D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FD558FCF4EE1BF62(::UnityEngine::AnimatorStateInfo a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Boolean a3, ::Il2CppArray<::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Boolean, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_FD558FCF4EE1BF62_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_5DDAADAADE1153D5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_5DDAADAADE1153D5_OFFSET))(this);
	}

	::System::Single Method_1_C40B253958EEF7DF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_C40B253958EEF7DF_OFFSET))(this);
	}

	::System::Boolean Method_1_2322A27EAA32EB6E(::System::Nullable_1<::System::Single> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_2322A27EAA32EB6E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Boolean Method_1_891AE2223A8E0EF9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_891AE2223A8E0EF9_OFFSET))(this);
	}

	::System::Boolean Method_1_97285E397E8F5091()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_97285E397E8F5091_OFFSET))(this);
	}

	::System::Void Method_1_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_50131F4CF014469C_OFFSET))(this);
	}

	::System::Single Method_1_354D0F238CF1BE04()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_354D0F238CF1BE04_OFFSET))(this);
	}

	::System::Single Method_1_C6C5BA17F4D34EC0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_C6C5BA17F4D34EC0_OFFSET))(this);
	}

	::System::Void Method_1_FCB3AFE4BD0D374C(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_FCB3AFE4BD0D374C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C5D90119C48B3224(::Class_1_D7003CCDED916330_Class_3_640C173449D72699* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7003CCDED916330_Class_3_640C173449D72699*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_C5D90119C48B3224_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5D90119C48B3224_1(::Class_1_D7003CCDED916330_Class_3_640C173449D72699* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7003CCDED916330_Class_3_640C173449D72699*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_C5D90119C48B3224_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_1_7017F4DDE98805F5(::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleState*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleState*>*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_7017F4DDE98805F5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D0686472A76BA214(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_D0686472A76BA214_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_1_EBAC71FBE1837205()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_EBAC71FBE1837205_OFFSET))(this);
	}

	::System::Void Method_1_C1E0405EEC95DC65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_C1E0405EEC95DC65_OFFSET))(this);
	}

	::System::Void Method_1_D1FDF59E2DFE5D07()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_D1FDF59E2DFE5D07_OFFSET))(this);
	}

	::Class_1_FF3F7597CCC24938* Method_1_1472FB3A8EFD23F7(::System::UInt32 a1)
	{
		return ((::Class_1_FF3F7597CCC24938*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_1472FB3A8EFD23F7_OFFSET))(this, a1);
	}

	::Class_1_FF3F7597CCC24938* Method_1_6E2745B93CB449A5(::UnityEngine::AnimationClip* a1, ::RPG::GameCore::FreeStyleMotionConfigRow* a2)
	{
		return ((::Class_1_FF3F7597CCC24938*(*)(::PVOID, ::UnityEngine::AnimationClip*, ::RPG::GameCore::FreeStyleMotionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_6E2745B93CB449A5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_39FD7185C859CEAD_OFFSET))(this);
	}

	::System::Void Method_1_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_1_BA34E778694A5115(::Class_1_FF3F7597CCC24938* a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::Struct_2_648594091F1A68D6 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF3F7597CCC24938*, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::Struct_2_648594091F1A68D6))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_BA34E778694A5115_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_21C454FE13937A42(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_21C454FE13937A42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}

	::RPG::Client::IAssetOperation* Method_1_1186AA98BE18A2BE(::System::String* a1)
	{
		return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_1186AA98BE18A2BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_5CC59AB1051145BE(::UnityEngine::AnimatorStateInfo& a1, ::RPG::GameCore::AnimZoneTransition a2, ::Il2CppArray<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo&, ::RPG::GameCore::AnimZoneTransition, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_5CC59AB1051145BE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8D33B10F230C1D5D(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_8D33B10F230C1D5D_OFFSET))(this, a1);
	}

	::System::Void Method_1_74B14F0DAA08DACF(::Class_1_2B5DB3011ADDA3A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B5DB3011ADDA3A1*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_74B14F0DAA08DACF_OFFSET))(this, a1);
	}

	::System::Void Method_1_D573302903E189CB(::UnityEngine::Animator* a1, ::System::Int32 a2, ::Class_1_2B5DB3011ADDA3A1* a3, ::Class_1_2B5DB3011ADDA3A1* a4, ::Class_1_529B81A5018A5315* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32, ::Class_1_2B5DB3011ADDA3A1*, ::Class_1_2B5DB3011ADDA3A1*, ::Class_1_529B81A5018A5315*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_D573302903E189CB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3262CEF3E873A6C4(::Class_1_2B5DB3011ADDA3A1* a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B5DB3011ADDA3A1*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_3262CEF3E873A6C4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_160341DB9A01E525(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_160341DB9A01E525_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD511673537D2D25(::System::Single a1, ::System::Single a2, ::Class_1_2B5DB3011ADDA3A1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Class_1_2B5DB3011ADDA3A1*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_DD511673537D2D25_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C2F63F946333FD36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_C2F63F946333FD36_OFFSET))(this);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* get_FreeStyleCharacterID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_GET_FREESTYLECHARACTERID_OFFSET))(this);
	}

	::System::Void set_FreeStyleCharacterID(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_SET_FREESTYLECHARACTERID_OFFSET))(this, value);
	}

	::System::String* get_FreeStyleCharacterConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_GET_FREESTYLECHARACTERCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_FreeStyleCharacterConfigPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_SET_FREESTYLECHARACTERCONFIGPATH_OFFSET))(this, value);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::RPG::GameCore::FreeStyleComponent* Method_1_4C5147B993994199()
	{
		return ((::RPG::GameCore::FreeStyleComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_4C5147B993994199_OFFSET))(this);
	}

	::RPG::Client::MockAnimator* Method_1_BF7707C04361A205()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_BF7707C04361A205_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::Class_1_92E3E110E38400D6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_92E3E110E38400D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Method_1_8377BC0DCBA8CDB6()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_8377BC0DCBA8CDB6_OFFSET))(this);
	}

	::UnityEngine::AnimatorOverrideController* Method_1_16157810B5FB0F52()
	{
		return ((::UnityEngine::AnimatorOverrideController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_16157810B5FB0F52_OFFSET))(this);
	}

	::Class_1_FF3F7597CCC24938* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_FF3F7597CCC24938*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}
};
