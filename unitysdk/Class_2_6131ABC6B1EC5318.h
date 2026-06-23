#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariable_1.h"
#include "unitysdk/MoleMole/Photo/BlendSpaceBlendParameter.h"
#include "unitysdk/Struct_2_31CE9F74ED7EF316_3.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_BBB0E5634D109F01.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

#define CLASS_2_6131ABC6B1EC5318_METHOD_2_138F84DE3CAC8058_OFFSET UNITYSDK_OFFSET(0x134CDD60)
#define CLASS_2_6131ABC6B1EC5318_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x134CDC80)
#define CLASS_2_6131ABC6B1EC5318_METHOD_2_641E7B7125D18308_OFFSET UNITYSDK_OFFSET(0x134CD080)
#define CLASS_2_6131ABC6B1EC5318_METHOD_2_7064FD57E22B4D05_OFFSET UNITYSDK_OFFSET(0x134CD7B0)
#define CLASS_2_6131ABC6B1EC5318_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x134CD8E0)
#define CLASS_2_6131ABC6B1EC5318_METHOD_2_8A7AC5C0FDE4B19E_OFFSET UNITYSDK_OFFSET(0x134CC110)
#define CLASS_2_6131ABC6B1EC5318_METHOD_2_91D7EF948A9227FB_OFFSET UNITYSDK_OFFSET(0x134CBFA0)
#define CLASS_2_6131ABC6B1EC5318_METHOD_2_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0x134CD8F0)
#define CLASS_2_6131ABC6B1EC5318_METHOD_2_BA80D36BDA3B5115_OFFSET UNITYSDK_OFFSET(0x134CC1C0)
#define CLASS_2_6131ABC6B1EC5318_METHOD_2_D414E8938AC1BCDF_OFFSET UNITYSDK_OFFSET(0x134CDC90)
#define CLASS_2_6131ABC6B1EC5318_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x134CD8D0)
#define CLASS_2_6131ABC6B1EC5318_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x134CC230)
#define CLASS_2_6131ABC6B1EC5318__CTOR_1_OFFSET UNITYSDK_OFFSET(0x134CBEE0)
#define CLASS_2_6131ABC6B1EC5318__CTOR_OFFSET UNITYSDK_OFFSET(0x134CBCB0)

inline static constexpr unsigned int Class_2_6131ABC6B1EC5318_TypeDefinitionIndex = 77905;

class Class_2_6131ABC6B1EC5318 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Boolean Field_2_8; // 0x10
	::System::Single Field_2_7; // 0x14
	::Foundation::ReadOnlyNativeVariable_1<::System::Single> Field_2_1; // 0x18
	::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_BBB0E5634D109F01> Field_2_3; // 0x28
	::System::Single Field_2_9; // 0x38
	::MoleMole::Photo::BlendSpaceBlendParameter Field_2_5; // 0x3C
	::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_31CE9F74ED7EF316_3> Field_2_2; // 0x48
	::Struct_2_ACD0EF80A5330786 Field_2_6; // 0x58
	::Foundation::NativeVariableArray_1<::System::Single> Field_2_4; // 0xE8
	::UnityEngine::Animations::AnimationMixerPlayable Field_2_0; // 0xF8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6131ABC6B1EC5318__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::UnityEngine::Animations::AnimationMixerPlayable a1, ::Foundation::ReadOnlyNativeVariable_1<::System::Single> a2, ::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_31CE9F74ED7EF316_3> a3, ::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_BBB0E5634D109F01> a4, ::Foundation::NativeVariableArray_1<::System::Single> a5, ::MoleMole::Photo::BlendSpaceBlendParameter a6, ::Struct_2_ACD0EF80A5330786 a7, ::System::Single a8, ::System::Boolean a9, ::System::Single a10)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationMixerPlayable, ::Foundation::ReadOnlyNativeVariable_1<::System::Single>, ::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_31CE9F74ED7EF316_3>, ::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_BBB0E5634D109F01>, ::Foundation::NativeVariableArray_1<::System::Single>, ::MoleMole::Photo::BlendSpaceBlendParameter, ::Struct_2_ACD0EF80A5330786, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6131ABC6B1EC5318__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::UnityEngine::Playables::ScriptPlayable_1<::Class_2_6131ABC6B1EC5318*> Method_2_91D7EF948A9227FB(::UnityEngine::Playables::PlayableGraph a1)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_6131ABC6B1EC5318*>(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + CLASS_2_6131ABC6B1EC5318_METHOD_2_91D7EF948A9227FB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8A7AC5C0FDE4B19E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6131ABC6B1EC5318_METHOD_2_8A7AC5C0FDE4B19E_OFFSET))(this);
	}

	::Struct_2_ACD0EF80A5330786 Method_2_BA80D36BDA3B5115()
	{
		return ((::Struct_2_ACD0EF80A5330786(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6131ABC6B1EC5318_METHOD_2_BA80D36BDA3B5115_OFFSET))(this);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_6131ABC6B1EC5318_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Double Method_2_641E7B7125D18308(::System::Single a1)
	{
		return ((::System::Double(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6131ABC6B1EC5318_METHOD_2_641E7B7125D18308_OFFSET))(this, a1);
	}

	::System::Void Method_2_7064FD57E22B4D05(::Foundation::NativeVariable_1<::System::Single> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeVariable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_2_6131ABC6B1EC5318_METHOD_2_7064FD57E22B4D05_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6131ABC6B1EC5318_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_6131ABC6B1EC5318_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6131ABC6B1EC5318_METHOD_2_AE80CBC984AADFD5_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6131ABC6B1EC5318_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::Foundation::NativeVariable_1<::System::Single> Method_2_D414E8938AC1BCDF()
	{
		return ((::Foundation::NativeVariable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6131ABC6B1EC5318_METHOD_2_D414E8938AC1BCDF_OFFSET))(this);
	}

	::System::Single Method_2_138F84DE3CAC8058()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6131ABC6B1EC5318_METHOD_2_138F84DE3CAC8058_OFFSET))(this);
	}
};
