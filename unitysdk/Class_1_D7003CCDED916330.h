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
class Class_1_6E3C53E8970D126E;
class Class_1_82C55A77683068F5;
class Class_1_92E3E110E38400D6;
class Class_1_A007F54272737F5C;
class Class_1_CFAC95D8FB30DDF0;
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

#define CLASS_1_D7003CCDED916330_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACEED10)
#define CLASS_1_D7003CCDED916330_GET_FREESTYLECHARACTERCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xACF7CA0)
#define CLASS_1_D7003CCDED916330_GET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0xACF7C80)
#define CLASS_1_D7003CCDED916330_METHOD_1_06F38768260E973C_OFFSET UNITYSDK_OFFSET(0xACEEAD0)
#define CLASS_1_D7003CCDED916330_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xACEFCD0)
#define CLASS_1_D7003CCDED916330_METHOD_1_1186AA98BE18A2BE_OFFSET UNITYSDK_OFFSET(0xACF60D0)
#define CLASS_1_D7003CCDED916330_METHOD_1_1472FB3A8EFD23F7_OFFSET UNITYSDK_OFFSET(0xACF0310)
#define CLASS_1_D7003CCDED916330_METHOD_1_16157810B5FB0F52_OFFSET UNITYSDK_OFFSET(0xACF7D80)
#define CLASS_1_D7003CCDED916330_METHOD_1_1890D543561F74BD_OFFSET UNITYSDK_OFFSET(0xACF1A10)
#define CLASS_1_D7003CCDED916330_METHOD_1_1C44AD0549B9D61C_OFFSET UNITYSDK_OFFSET(0xACF29F0)
#define CLASS_1_D7003CCDED916330_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xACF0260)
#define CLASS_1_D7003CCDED916330_METHOD_1_20E2D477D3458F69_OFFSET UNITYSDK_OFFSET(0xACEE410)
#define CLASS_1_D7003CCDED916330_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xACF7D60)
#define CLASS_1_D7003CCDED916330_METHOD_1_29DA7088051996A2_OFFSET UNITYSDK_OFFSET(0xACF1E80)
#define CLASS_1_D7003CCDED916330_METHOD_1_2A37FBB119172FEC_OFFSET UNITYSDK_OFFSET(0xACED3F0)
#define CLASS_1_D7003CCDED916330_METHOD_1_2B5881023D1BCA42_OFFSET UNITYSDK_OFFSET(0xACEE480)
#define CLASS_1_D7003CCDED916330_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xACF5390)
#define CLASS_1_D7003CCDED916330_METHOD_1_2E7C7522594DB682_OFFSET UNITYSDK_OFFSET(0xACEDF20)
#define CLASS_1_D7003CCDED916330_METHOD_1_3262CEF3E873A6C4_OFFSET UNITYSDK_OFFSET(0xACF73A0)
#define CLASS_1_D7003CCDED916330_METHOD_1_354D0F238CF1BE04_OFFSET UNITYSDK_OFFSET(0xACF3F30)
#define CLASS_1_D7003CCDED916330_METHOD_1_383DEEFB6D71D0DE_OFFSET UNITYSDK_OFFSET(0xACF3A10)
#define CLASS_1_D7003CCDED916330_METHOD_1_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0xACF63B0)
#define CLASS_1_D7003CCDED916330_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0xACF02C0)
#define CLASS_1_D7003CCDED916330_METHOD_1_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0xACF4AD0)
#define CLASS_1_D7003CCDED916330_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xACEFC40)
#define CLASS_1_D7003CCDED916330_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xACEEA30)
#define CLASS_1_D7003CCDED916330_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xACF7D90)
#define CLASS_1_D7003CCDED916330_METHOD_1_4C5147B993994199_OFFSET UNITYSDK_OFFSET(0xACF7CE0)
#define CLASS_1_D7003CCDED916330_METHOD_1_535079AAF5EDFF62_OFFSET UNITYSDK_OFFSET(0xACED700)
#define CLASS_1_D7003CCDED916330_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xACF32F0)
#define CLASS_1_D7003CCDED916330_METHOD_1_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0xACED530)
#define CLASS_1_D7003CCDED916330_METHOD_1_5DDAADAADE1153D5_OFFSET UNITYSDK_OFFSET(0xACF2AE0)
#define CLASS_1_D7003CCDED916330_METHOD_1_6E2745B93CB449A5_OFFSET UNITYSDK_OFFSET(0xACF1C00)
#define CLASS_1_D7003CCDED916330_METHOD_1_71F7FB928ED97D38_OFFSET UNITYSDK_OFFSET(0xACEF0E0)
#define CLASS_1_D7003CCDED916330_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xACF4EA0)
#define CLASS_1_D7003CCDED916330_METHOD_1_7EE99EE6AA394745_OFFSET UNITYSDK_OFFSET(0xACEF2F0)
#define CLASS_1_D7003CCDED916330_METHOD_1_8377BC0DCBA8CDB6_OFFSET UNITYSDK_OFFSET(0xACF7D70)
#define CLASS_1_D7003CCDED916330_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xACF5ED0)
#define CLASS_1_D7003CCDED916330_METHOD_1_868BE18981B4EA45_OFFSET UNITYSDK_OFFSET(0xACF4580)
#define CLASS_1_D7003CCDED916330_METHOD_1_885EBEF1139399B4_OFFSET UNITYSDK_OFFSET(0xACF1020)
#define CLASS_1_D7003CCDED916330_METHOD_1_8B2D6636BADD098E_OFFSET UNITYSDK_OFFSET(0xACF1DD0)
#define CLASS_1_D7003CCDED916330_METHOD_1_8D33B10F230C1D5D_OFFSET UNITYSDK_OFFSET(0xACF6280)
#define CLASS_1_D7003CCDED916330_METHOD_1_97285E397E8F5091_OFFSET UNITYSDK_OFFSET(0xACF3820)
#define CLASS_1_D7003CCDED916330_METHOD_1_97AC5E0734B0603A_OFFSET UNITYSDK_OFFSET(0xACEDBF0)
#define CLASS_1_D7003CCDED916330_METHOD_1_97F4494AB615EE69_OFFSET UNITYSDK_OFFSET(0xACEF1F0)
#define CLASS_1_D7003CCDED916330_METHOD_1_9E21C153E3359129_OFFSET UNITYSDK_OFFSET(0xACED360)
#define CLASS_1_D7003CCDED916330_METHOD_1_9EF64292D3DA5796_OFFSET UNITYSDK_OFFSET(0xACF7510)
#define CLASS_1_D7003CCDED916330_METHOD_1_A24147459D092153_OFFSET UNITYSDK_OFFSET(0xACEEE20)
#define CLASS_1_D7003CCDED916330_METHOD_1_A38FF4341EA244A1_1_OFFSET UNITYSDK_OFFSET(0xACEDDF0)
#define CLASS_1_D7003CCDED916330_METHOD_1_A38FF4341EA244A1_OFFSET UNITYSDK_OFFSET(0xACEDAC0)
#define CLASS_1_D7003CCDED916330_METHOD_1_A55AA08070B5AFEC_OFFSET UNITYSDK_OFFSET(0xACF6FF0)
#define CLASS_1_D7003CCDED916330_METHOD_1_A9A95CAFB5A17F06_OFFSET UNITYSDK_OFFSET(0xACF2DC0)
#define CLASS_1_D7003CCDED916330_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xACF7D00)
#define CLASS_1_D7003CCDED916330_METHOD_1_AFBA5BF01DDDA394_OFFSET UNITYSDK_OFFSET(0xACF23B0)
#define CLASS_1_D7003CCDED916330_METHOD_1_B17831D2170DC0DE_OFFSET UNITYSDK_OFFSET(0xACEF450)
#define CLASS_1_D7003CCDED916330_METHOD_1_B53D0EE6A78EC162_OFFSET UNITYSDK_OFFSET(0xACEE3B0)
#define CLASS_1_D7003CCDED916330_METHOD_1_B75F7C20345DE308_OFFSET UNITYSDK_OFFSET(0xACEEEE0)
#define CLASS_1_D7003CCDED916330_METHOD_1_BDB014C4E3C92B50_OFFSET UNITYSDK_OFFSET(0xACF4110)
#define CLASS_1_D7003CCDED916330_METHOD_1_BF302FCDF545D0AF_OFFSET UNITYSDK_OFFSET(0xACEE9A0)
#define CLASS_1_D7003CCDED916330_METHOD_1_BF7707C04361A205_OFFSET UNITYSDK_OFFSET(0xACF7CF0)
#define CLASS_1_D7003CCDED916330_METHOD_1_C1E0405EEC95DC65_OFFSET UNITYSDK_OFFSET(0xACF4D30)
#define CLASS_1_D7003CCDED916330_METHOD_1_C40B253958EEF7DF_OFFSET UNITYSDK_OFFSET(0xACF2C30)
#define CLASS_1_D7003CCDED916330_METHOD_1_C4C75534A5420D93_OFFSET UNITYSDK_OFFSET(0xACF4B30)
#define CLASS_1_D7003CCDED916330_METHOD_1_C5D90119C48B3224_1_OFFSET UNITYSDK_OFFSET(0xACF4A60)
#define CLASS_1_D7003CCDED916330_METHOD_1_C5D90119C48B3224_OFFSET UNITYSDK_OFFSET(0xACF49F0)
#define CLASS_1_D7003CCDED916330_METHOD_1_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0xACF5530)
#define CLASS_1_D7003CCDED916330_METHOD_1_C7CD1D914D759BC5_OFFSET UNITYSDK_OFFSET(0xACED2A0)
#define CLASS_1_D7003CCDED916330_METHOD_1_CC9B474BAB0E49B4_OFFSET UNITYSDK_OFFSET(0xACF33B0)
#define CLASS_1_D7003CCDED916330_METHOD_1_D0686472A76BA214_OFFSET UNITYSDK_OFFSET(0xACF4BA0)
#define CLASS_1_D7003CCDED916330_METHOD_1_D0953E9AB73BE8D1_OFFSET UNITYSDK_OFFSET(0xACF2250)
#define CLASS_1_D7003CCDED916330_METHOD_1_D1FDF59E2DFE5D07_OFFSET UNITYSDK_OFFSET(0xACF52B0)
#define CLASS_1_D7003CCDED916330_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0xACF4CD0)
#define CLASS_1_D7003CCDED916330_METHOD_1_D573302903E189CB_OFFSET UNITYSDK_OFFSET(0xACF64D0)
#define CLASS_1_D7003CCDED916330_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0xACF7CC0)
#define CLASS_1_D7003CCDED916330_METHOD_1_E18D65F3216E2E59_1_OFFSET UNITYSDK_OFFSET(0xACF0000)
#define CLASS_1_D7003CCDED916330_METHOD_1_E18D65F3216E2E59_OFFSET UNITYSDK_OFFSET(0xACEF9E0)
#define CLASS_1_D7003CCDED916330_METHOD_1_E6FC0C87A75769F1_OFFSET UNITYSDK_OFFSET(0xACED940)
#define CLASS_1_D7003CCDED916330_METHOD_1_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0xACF09D0)
#define CLASS_1_D7003CCDED916330_METHOD_1_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0xACF4E50)
#define CLASS_1_D7003CCDED916330_METHOD_1_ECD31437775FCAFD_OFFSET UNITYSDK_OFFSET(0xACF5C50)
#define CLASS_1_D7003CCDED916330_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xACF2240)
#define CLASS_1_D7003CCDED916330_METHOD_1_F203902C74D56D08_OFFSET UNITYSDK_OFFSET(0xACF7880)
#define CLASS_1_D7003CCDED916330_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xACF32D0)
#define CLASS_1_D7003CCDED916330_METHOD_1_FC6FCD3D3A37BE56_OFFSET UNITYSDK_OFFSET(0xACED810)
#define CLASS_1_D7003CCDED916330_SET_FREESTYLECHARACTERCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xACF7CB0)
#define CLASS_1_D7003CCDED916330_SET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0xACF7C90)
#define CLASS_1_D7003CCDED916330__CTOR_OFFSET UNITYSDK_OFFSET(0xACEE050)

inline static constexpr unsigned int Class_1_D7003CCDED916330_TypeDefinitionIndex = 53504;

class Class_1_D7003CCDED916330 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x2; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	::System::Action_2<::System::UInt32, ::Struct_2_D3B84DD3734B83D6>* Field_1_3; // 0x10
	::System::String* _FreeStyleCharacterID_k__BackingField; // 0x18
	::Il2CppArray<::Class_1_FF3F7597CCC24938*>* Field_1_5; // 0x20
	::System::Action_1<::System::UInt32>* Field_1_6; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_A007F54272737F5C*>* Field_1_7; // 0x30
	::Class_1_D7003CCDED916330_Class_3_640C173449D72699* Field_1_8; // 0x38
	::System::String* _FreeStyleCharacterConfigPath_k__BackingField; // 0x40
	::RPG::Client::IAssetOperation* Field_1_10; // 0x48
	::Class_1_CFAC95D8FB30DDF0* Field_1_11; // 0x50
	::RPG::Client::IAssetOperation* Field_1_12; // 0x58
	::Class_1_2B5DB3011ADDA3A1* Field_1_13; // 0x60
	::Class_1_2B5DB3011ADDA3A1* Field_1_14; // 0x68
	::System::Action_2<::System::Int32, ::Struct_2_D3B84DD3734B83D6>* Field_1_15; // 0x70
	::RPG::GameCore::TaskContext* Field_1_16; // 0x78
	::Class_1_2B5DB3011ADDA3A1* Field_1_17; // 0x80
	::UnityEngine::RuntimeAnimatorController* Field_1_18; // 0x88
	::RPG::GameCore::FreeStyleMotionConfigRow* Field_1_19; // 0x90
	::Class_1_82C55A77683068F5* Field_1_20; // 0x98
	::System::String* Field_1_21; // 0xA0
	::RPG::Client::IAssetOperation* Field_1_22; // 0xA8
	::System::Collections::Generic::List_1<::Class_1_6E3C53E8970D126E*>* Field_1_23; // 0xB0
	::Class_1_92E3E110E38400D6* Field_1_24; // 0xB8
	::RPG::GameCore::FreeStyleComponent* Field_1_25; // 0xC0
	::UnityEngine::AnimatorOverrideController* Field_1_26; // 0xC8
	::RPG::Client::MockAnimator* Field_1_27; // 0xD0
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* Field_1_28; // 0xD8
	::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimClipZoneInfo*>* Field_1_29; // 0xE0
	::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimClipGroupZoneInfo*>* Field_1_30; // 0xE8
	::Class_1_2B5DB3011ADDA3A1* Field_1_31; // 0xF0
	::RPG::Client::IAssetOperation* Field_1_32; // 0xF8
	::RPG::GameCore::FreeStyleMotionInfoConfig* Field_1_33; // 0x100
	::Class_1_CFAC95D8FB30DDF0* Field_1_34; // 0x108
	::System::UInt32 Field_1_35; // 0x110
	::System::Int32 Field_1_36; // 0x114
	::System::Int32 Field_1_37; // 0x118
	::System::Int32 Field_1_38; // 0x11C
	::Struct_2_648594091F1A68D6 Field_1_39; // 0x120
	::System::Boolean Field_1_40; // 0x140
	::System::Int32 Field_1_41; // 0x144

	::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1, ::RPG::Client::MockAnimator* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*, ::RPG::Client::MockAnimator*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_A007F54272737F5C* Method_1_C7CD1D914D759BC5(::System::String* a1)
	{
		return ((::Class_1_A007F54272737F5C*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_C7CD1D914D759BC5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_A007F54272737F5C*>* Method_1_9E21C153E3359129()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_A007F54272737F5C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_9E21C153E3359129_OFFSET))(this);
	}

	::System::Void Method_1_2A37FBB119172FEC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_2A37FBB119172FEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_1_535079AAF5EDFF62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_535079AAF5EDFF62_OFFSET))(this);
	}

	::System::Void Method_1_FC6FCD3D3A37BE56(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_FC6FCD3D3A37BE56_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6FC0C87A75769F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_E6FC0C87A75769F1_OFFSET))(this);
	}

	::System::Void Method_1_A38FF4341EA244A1(::UnityEngine::AnimatorOverrideController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_A38FF4341EA244A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_97AC5E0734B0603A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_97AC5E0734B0603A_OFFSET))(this);
	}

	::System::Void Method_1_A38FF4341EA244A1_1(::UnityEngine::AnimatorOverrideController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_A38FF4341EA244A1_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2E7C7522594DB682(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_2E7C7522594DB682_OFFSET))(this, a1);
	}

	::System::Void Method_1_B53D0EE6A78EC162(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_B53D0EE6A78EC162_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_20E2D477D3458F69(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_20E2D477D3458F69_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B5881023D1BCA42(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_2B5881023D1BCA42_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF302FCDF545D0AF(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_BF302FCDF545D0AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_06F38768260E973C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_06F38768260E973C_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::FreeStyleTriggerGraphInfo* Method_1_A24147459D092153(::System::String* a1)
	{
		return ((::RPG::GameCore::FreeStyleTriggerGraphInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_A24147459D092153_OFFSET))(this, a1);
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

	::System::Void Method_1_E18D65F3216E2E59(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_E18D65F3216E2E59_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E18D65F3216E2E59_1(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_E18D65F3216E2E59_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B17831D2170DC0DE(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_B17831D2170DC0DE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1890D543561F74BD(::UnityEngine::AnimationClip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_1890D543561F74BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B2D6636BADD098E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_8B2D6636BADD098E_OFFSET))(this, a1);
	}

	::System::Void Method_1_29DA7088051996A2(::System::Boolean a1, ::Struct_2_D3B84DD3734B83D6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_29DA7088051996A2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D0953E9AB73BE8D1(::UnityEngine::Animator* a1, ::Il2CppArray<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_D0953E9AB73BE8D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1C44AD0549B9D61C(::UnityEngine::AnimatorStateInfo a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Boolean a3, ::Il2CppArray<::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Boolean, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_1C44AD0549B9D61C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_5DDAADAADE1153D5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_5DDAADAADE1153D5_OFFSET))(this);
	}

	::System::Single Method_1_C40B253958EEF7DF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_C40B253958EEF7DF_OFFSET))(this);
	}

	::System::Boolean Method_1_A9A95CAFB5A17F06(::System::Nullable_1<::System::Single> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_A9A95CAFB5A17F06_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Boolean Method_1_CC9B474BAB0E49B4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_CC9B474BAB0E49B4_OFFSET))(this);
	}

	::System::Boolean Method_1_97285E397E8F5091()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_97285E397E8F5091_OFFSET))(this);
	}

	::System::Void Method_1_383DEEFB6D71D0DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_383DEEFB6D71D0DE_OFFSET))(this);
	}

	::System::Single Method_1_354D0F238CF1BE04()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_354D0F238CF1BE04_OFFSET))(this);
	}

	::System::Single Method_1_BDB014C4E3C92B50()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_BDB014C4E3C92B50_OFFSET))(this);
	}

	::System::Void Method_1_868BE18981B4EA45(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_868BE18981B4EA45_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_C4C75534A5420D93(::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleState*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleState*>*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_C4C75534A5420D93_OFFSET))(this, a1);
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

	::System::Void Method_1_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Void Method_1_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_1_885EBEF1139399B4(::Class_1_FF3F7597CCC24938* a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::Struct_2_648594091F1A68D6 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF3F7597CCC24938*, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::Struct_2_648594091F1A68D6))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_885EBEF1139399B4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_ECD31437775FCAFD(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_ECD31437775FCAFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}

	::RPG::Client::IAssetOperation* Method_1_1186AA98BE18A2BE(::System::String* a1)
	{
		return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_1186AA98BE18A2BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_AFBA5BF01DDDA394(::UnityEngine::AnimatorStateInfo& a1, ::RPG::GameCore::AnimZoneTransition a2, ::Il2CppArray<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo&, ::RPG::GameCore::AnimZoneTransition, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_AFBA5BF01DDDA394_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8D33B10F230C1D5D(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_8D33B10F230C1D5D_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B10EBB5408EF02E(::Class_1_2B5DB3011ADDA3A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B5DB3011ADDA3A1*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::System::Void Method_1_D573302903E189CB(::UnityEngine::Animator* a1, ::System::Int32 a2, ::Class_1_2B5DB3011ADDA3A1* a3, ::Class_1_2B5DB3011ADDA3A1* a4, ::Class_1_CFAC95D8FB30DDF0* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32, ::Class_1_2B5DB3011ADDA3A1*, ::Class_1_2B5DB3011ADDA3A1*, ::Class_1_CFAC95D8FB30DDF0*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_D573302903E189CB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3262CEF3E873A6C4(::Class_1_2B5DB3011ADDA3A1* a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B5DB3011ADDA3A1*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_3262CEF3E873A6C4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9EF64292D3DA5796(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_9EF64292D3DA5796_OFFSET))(this, a1);
	}

	::System::Void Method_1_F203902C74D56D08(::System::Single a1, ::System::Single a2, ::Class_1_2B5DB3011ADDA3A1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Class_1_2B5DB3011ADDA3A1*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_F203902C74D56D08_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A55AA08070B5AFEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_METHOD_1_A55AA08070B5AFEC_OFFSET))(this);
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

	::System::Void set_FreeStyleCharacterID(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_SET_FREESTYLECHARACTERID_OFFSET))(this, a1);
	}

	::System::String* get_FreeStyleCharacterConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_GET_FREESTYLECHARACTERCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_FreeStyleCharacterConfigPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330_SET_FREESTYLECHARACTERCONFIGPATH_OFFSET))(this, a1);
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
