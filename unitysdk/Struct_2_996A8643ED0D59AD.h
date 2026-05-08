#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/MoleMole/Photo/AnimationBlendPosePerBoneFlag.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_D0A3658446FCD9A2.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_996A8643ED0D59AD_METHOD_2_01F38F43D3BC4B6A_OFFSET UNITYSDK_OFFSET(0x118B4900)
#define STRUCT_2_996A8643ED0D59AD_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x722920)
#define STRUCT_2_996A8643ED0D59AD_METHOD_2_222592086BA83928_OFFSET UNITYSDK_OFFSET(0x722910)
#define STRUCT_2_996A8643ED0D59AD_METHOD_2_5489F9CD0AA85DE6_OFFSET UNITYSDK_OFFSET(0x7228A0)
#define STRUCT_2_996A8643ED0D59AD_METHOD_2_AA8855F9297B902F_1_OFFSET UNITYSDK_OFFSET(0x722AF0)
#define STRUCT_2_996A8643ED0D59AD_METHOD_2_AA8855F9297B902F_OFFSET UNITYSDK_OFFSET(0x722990)
#define STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_1_OFFSET UNITYSDK_OFFSET(0x7229B0)
#define STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_2_OFFSET UNITYSDK_OFFSET(0x722A00)
#define STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_3_OFFSET UNITYSDK_OFFSET(0x722A50)
#define STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_4_OFFSET UNITYSDK_OFFSET(0x722AA0)
#define STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_5_OFFSET UNITYSDK_OFFSET(0x722B10)
#define STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_6_OFFSET UNITYSDK_OFFSET(0x722B60)
#define STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_7_OFFSET UNITYSDK_OFFSET(0x722BB0)
#define STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_OFFSET UNITYSDK_OFFSET(0x722940)
#define STRUCT_2_996A8643ED0D59AD_METHOD_2_C3B21C74C45D6F86_OFFSET UNITYSDK_OFFSET(0x7228D0)
#define STRUCT_2_996A8643ED0D59AD_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x722820)
#define STRUCT_2_996A8643ED0D59AD_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x722860)
#define STRUCT_2_996A8643ED0D59AD__CCTOR_OFFSET UNITYSDK_OFFSET(0x118B40A0)
#define STRUCT_2_996A8643ED0D59AD__CTOR_OFFSET UNITYSDK_OFFSET(0x7227B0)

inline static constexpr unsigned int Struct_2_996A8643ED0D59AD_TypeDefinitionIndex = 81685;

struct alignas(8) Struct_2_996A8643ED0D59AD
{
	static ::Struct_2_996A8643ED0D59AD* StaticGet_Field_2_14()
	{
		return (::Struct_2_996A8643ED0D59AD*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_996A8643ED0D59AD_TypeDefinitionIndex)->GetStaticField(0xCD30);
	}
	// static const ::System::Int32 Field_2_0 = 0x0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_2_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_2_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_2_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_2_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_2_6 = 0x6; // 0x0
	// static const ::System::Int32 Field_2_7 = 0x7; // 0x0
	// static const ::System::Int32 Field_2_8 = 0x8; // 0x0
	::System::Int32 Field_2_9; // 0x10
	::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_F780BA94AF5E7E37_1> Field_2_10; // 0x18
	::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_D0A3658446FCD9A2> Field_2_11; // 0x28
	::MoleMole::Photo::AnimationBlendPosePerBoneFlag Field_2_12; // 0x38
	::Struct_2_ACD0EF80A5330786 Field_2_13; // 0x40

	::System::Void _ctor(::Struct_2_ACD0EF80A5330786 a1, ::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_F780BA94AF5E7E37_1> a2, ::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_D0A3658446FCD9A2> a3, ::MoleMole::Photo::AnimationBlendPosePerBoneFlag a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_ACD0EF80A5330786, ::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_F780BA94AF5E7E37_1>, ::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_D0A3658446FCD9A2>, ::MoleMole::Photo::AnimationBlendPosePerBoneFlag))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD__CCTOR_OFFSET))();
	}

	/*
	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_PROCESSANIMATION_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_PROCESSROOTMOTION_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Animations::AnimationScriptPlayable Method_2_5489F9CD0AA85DE6(::UnityEngine::Playables::PlayableGraph a1)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_METHOD_2_5489F9CD0AA85DE6_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Boolean Method_2_C3B21C74C45D6F86(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_METHOD_2_C3B21C74C45D6F86_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_222592086BA83928()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_METHOD_2_222592086BA83928_OFFSET))(this);
	}

	::Struct_2_ACD0EF80A5330786 Method_2_1F8314262457963A()
	{
		return ((::Struct_2_ACD0EF80A5330786(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_METHOD_2_1F8314262457963A_OFFSET))(this);
	}

	/*
	::Struct_2_3044AC8F6668B13C Method_2_BFBB01A221943146(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::Struct_2_3044AC8F6668B13C(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_OFFSET))(this, a1);
	}
	*/

	/*
	::Foundation::NativeVariableArray_1<::Struct_2_F780BA94AF5E7E37_1> Method_2_AA8855F9297B902F()
	{
		return ((::Foundation::NativeVariableArray_1<::Struct_2_F780BA94AF5E7E37_1>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_METHOD_2_AA8855F9297B902F_OFFSET))(this);
	}
	*/

	/*
	::Struct_2_FAF6BD1B736DEE22 Method_2_BFBB01A221943146_1(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::Struct_2_FAF6BD1B736DEE22(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_1_OFFSET))(this, a1);
	}
	*/

	/*
	static ::Foundation::Unreal::FTransform3D Method_2_01F38F43D3BC4B6A(::Foundation::Unreal::FTransform3D a1, ::Foundation::Unreal::FTransform3D a2, ::System::Single a3)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::Foundation::Unreal::FTransform3D, ::Foundation::Unreal::FTransform3D, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_METHOD_2_01F38F43D3BC4B6A_OFFSET))(a1, a2, a3);
	}
	*/

	/*
	::Struct_2_9D8D4EA8E3D44652 Method_2_BFBB01A221943146_2(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::Struct_2_9D8D4EA8E3D44652(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_2_OFFSET))(this, a1);
	}
	*/

	/*
	::Struct_2_233C8AFD4256ACE6 Method_2_BFBB01A221943146_3(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::Struct_2_233C8AFD4256ACE6(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_3_OFFSET))(this, a1);
	}
	*/

	/*
	::Struct_2_2FC66E3156F6912B Method_2_BFBB01A221943146_4(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::Struct_2_2FC66E3156F6912B(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_4_OFFSET))(this, a1);
	}
	*/

	/*
	::Foundation::NativeVariableArray_1<::Struct_2_D0A3658446FCD9A2> Method_2_AA8855F9297B902F_1()
	{
		return ((::Foundation::NativeVariableArray_1<::Struct_2_D0A3658446FCD9A2>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_METHOD_2_AA8855F9297B902F_1_OFFSET))(this);
	}
	*/

	/*
	::Struct_2_891DE7EA798ADDB4 Method_2_BFBB01A221943146_5(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::Struct_2_891DE7EA798ADDB4(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_5_OFFSET))(this, a1);
	}
	*/

	/*
	::Struct_2_28674DF51079A3EA Method_2_BFBB01A221943146_6(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::Struct_2_28674DF51079A3EA(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_6_OFFSET))(this, a1);
	}
	*/

	/*
	::Struct_2_B156A1B941F9951F Method_2_BFBB01A221943146_7(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::Struct_2_B156A1B941F9951F(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_996A8643ED0D59AD_METHOD_2_BFBB01A221943146_7_OFFSET))(this, a1);
	}
	*/
};
