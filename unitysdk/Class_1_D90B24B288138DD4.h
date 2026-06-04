#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorOverrideController; }

#define CLASS_1_D90B24B288138DD4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13ACA680)
#define CLASS_1_D90B24B288138DD4_GET_CLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x13AC9DC0)
#define CLASS_1_D90B24B288138DD4_GET_CLIP0NAME_OFFSET UNITYSDK_OFFSET(0x13AC9D80)
#define CLASS_1_D90B24B288138DD4_GET_CLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x13AC9DE0)
#define CLASS_1_D90B24B288138DD4_GET_CLIP1NAME_OFFSET UNITYSDK_OFFSET(0x13AC9DA0)
#define CLASS_1_D90B24B288138DD4_GET_DISABLEANIMEVENT_OFFSET UNITYSDK_OFFSET(0x13AC9C70)
#define CLASS_1_D90B24B288138DD4_GET_FREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x13AC9C30)
#define CLASS_1_D90B24B288138DD4_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x13AC9C20)
#define CLASS_1_D90B24B288138DD4_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x13AC9CA0)
#define CLASS_1_D90B24B288138DD4_GET_LAYERNAME_OFFSET UNITYSDK_OFFSET(0x13AC9C90)
#define CLASS_1_D90B24B288138DD4_GET_PRELOADFREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x13AC9C50)
#define CLASS_1_D90B24B288138DD4_METHOD_1_08CCBB9E689D6A81_OFFSET UNITYSDK_OFFSET(0x13AC9E00)
#define CLASS_1_D90B24B288138DD4_METHOD_1_4B6DEDB9FF4B740B_OFFSET UNITYSDK_OFFSET(0x13ACA6D0)
#define CLASS_1_D90B24B288138DD4_METHOD_1_6011AA7C1E79F305_OFFSET UNITYSDK_OFFSET(0x13ACA730)
#define CLASS_1_D90B24B288138DD4_METHOD_1_6A5926614A3A36F5_OFFSET UNITYSDK_OFFSET(0x13ACA860)
#define CLASS_1_D90B24B288138DD4_METHOD_1_94C6143A2B7B129F_OFFSET UNITYSDK_OFFSET(0x13ACA000)
#define CLASS_1_D90B24B288138DD4_METHOD_1_954EB24DA065442A_OFFSET UNITYSDK_OFFSET(0x13ACA790)
#define CLASS_1_D90B24B288138DD4_METHOD_1_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x13AC9F90)
#define CLASS_1_D90B24B288138DD4_METHOD_1_A37026F5FDBACF68_OFFSET UNITYSDK_OFFSET(0x13ACA7F0)
#define CLASS_1_D90B24B288138DD4_METHOD_1_C86F0349DCEC0A70_1_OFFSET UNITYSDK_OFFSET(0x13AC9D20)
#define CLASS_1_D90B24B288138DD4_METHOD_1_C86F0349DCEC0A70_OFFSET UNITYSDK_OFFSET(0x13AC9CC0)
#define CLASS_1_D90B24B288138DD4_METHOD_1_E7677D973959F8AF_OFFSET UNITYSDK_OFFSET(0x13ACA530)
#define CLASS_1_D90B24B288138DD4_METHOD_1_E8867F567A99B8B7_OFFSET UNITYSDK_OFFSET(0x13ACA180)
#define CLASS_1_D90B24B288138DD4_METHOD_1_F54DE4640CE99063_1_OFFSET UNITYSDK_OFFSET(0x13ACA920)
#define CLASS_1_D90B24B288138DD4_METHOD_1_F54DE4640CE99063_OFFSET UNITYSDK_OFFSET(0x13ACA8D0)
#define CLASS_1_D90B24B288138DD4_SET_CLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x13AC9DD0)
#define CLASS_1_D90B24B288138DD4_SET_CLIP0NAME_OFFSET UNITYSDK_OFFSET(0x13AC9D90)
#define CLASS_1_D90B24B288138DD4_SET_CLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x13AC9DF0)
#define CLASS_1_D90B24B288138DD4_SET_CLIP1NAME_OFFSET UNITYSDK_OFFSET(0x13AC9DB0)
#define CLASS_1_D90B24B288138DD4_SET_DISABLEANIMEVENT_OFFSET UNITYSDK_OFFSET(0x13AC9C80)
#define CLASS_1_D90B24B288138DD4_SET_FREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x13AC9C40)
#define CLASS_1_D90B24B288138DD4_SET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x13AC9CB0)
#define CLASS_1_D90B24B288138DD4_SET_PRELOADFREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x13AC9C60)
#define CLASS_1_D90B24B288138DD4__CTOR_OFFSET UNITYSDK_OFFSET(0x13AC9E10)

inline static constexpr unsigned int Class_1_D90B24B288138DD4_TypeDefinitionIndex = 53511;

class Class_1_D90B24B288138DD4 : public ::System::Object
{
public:
	::System::String* _Clip0Name_k__BackingField; // 0x10
	::System::String* _LayerName_k__BackingField; // 0x18
	::Il2CppArray<::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* Field_1_3; // 0x28
	::System::String* _Clip1Name_k__BackingField; // 0x30
	::UnityEngine::AnimationClip* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40
	::System::String* Field_1_7; // 0x48
	::UnityEngine::AnimationClip* Field_1_8; // 0x50
	::System::UInt32 _FreeStyleMotionID_k__BackingField; // 0x58
	::System::Int32 _LayerIndex_k__BackingField; // 0x5C
	::System::Boolean _DisableAnimEvent_k__BackingField; // 0x60
	::System::Boolean Field_1_12; // 0x61
	::System::Boolean Field_1_13; // 0x62
	::System::Boolean Field_1_14; // 0x63
	::System::Int32 _GroupIndex_k__BackingField; // 0x64
	::System::Int32 Field_1_16; // 0x68
	::System::Int32 _Clip1NameHash_k__BackingField; // 0x6C
	::System::Int32 Field_1_18; // 0x70
	::System::UInt32 _PreloadFreeStyleMotionID_k__BackingField; // 0x74
	::System::Int32 Field_1_20; // 0x78
	::System::Int32 _Clip0NameHash_k__BackingField; // 0x7C
	::System::Int32 Field_1_22; // 0x80
	::System::Int32 Field_1_23; // 0x84

	::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>*& a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>*&, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 get_GroupIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_GROUPINDEX_OFFSET))(this);
	}

	::System::UInt32 get_FreeStyleMotionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_FREESTYLEMOTIONID_OFFSET))(this);
	}

	::System::Void set_FreeStyleMotionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_FREESTYLEMOTIONID_OFFSET))(this, a1);
	}

	::System::UInt32 get_PreloadFreeStyleMotionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_PRELOADFREESTYLEMOTIONID_OFFSET))(this);
	}

	::System::Void set_PreloadFreeStyleMotionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_PRELOADFREESTYLEMOTIONID_OFFSET))(this, a1);
	}

	::System::Boolean get_DisableAnimEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_DISABLEANIMEVENT_OFFSET))(this);
	}

	::System::Void set_DisableAnimEvent(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_DISABLEANIMEVENT_OFFSET))(this, a1);
	}

	::System::String* get_LayerName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_LAYERNAME_OFFSET))(this);
	}

	::System::Int32 get_LayerIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_LAYERINDEX_OFFSET))(this);
	}

	::System::Void set_LayerIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_LAYERINDEX_OFFSET))(this, a1);
	}

	::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF Method_1_C86F0349DCEC0A70()
	{
		return ((::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_C86F0349DCEC0A70_OFFSET))(this);
	}

	::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF Method_1_C86F0349DCEC0A70_1()
	{
		return ((::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_C86F0349DCEC0A70_1_OFFSET))(this);
	}

	::System::String* get_Clip0Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_CLIP0NAME_OFFSET))(this);
	}

	::System::Void set_Clip0Name(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_CLIP0NAME_OFFSET))(this, a1);
	}

	::System::String* get_Clip1Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_CLIP1NAME_OFFSET))(this);
	}

	::System::Void set_Clip1Name(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_CLIP1NAME_OFFSET))(this, a1);
	}

	::System::Int32 get_Clip0NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_CLIP0NAMEHASH_OFFSET))(this);
	}

	::System::Void set_Clip0NameHash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_CLIP0NAMEHASH_OFFSET))(this, a1);
	}

	::System::Int32 get_Clip1NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_CLIP1NAMEHASH_OFFSET))(this);
	}

	::System::Void set_Clip1NameHash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_CLIP1NAMEHASH_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* Method_1_08CCBB9E689D6A81()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_08CCBB9E689D6A81_OFFSET))(this);
	}

	::System::Boolean Method_1_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::Void Method_1_94C6143A2B7B129F(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorOverrideController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_94C6143A2B7B129F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E8867F567A99B8B7(::System::UInt32 a1, ::UnityEngine::AnimatorOverrideController* a2, ::UnityEngine::AnimationClip* a3, ::UnityEngine::AnimationClip* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::AnimatorOverrideController*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_E8867F567A99B8B7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E7677D973959F8AF(::UnityEngine::AnimatorOverrideController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_E7677D973959F8AF_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_4B6DEDB9FF4B740B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_4B6DEDB9FF4B740B_OFFSET))(this, a1);
	}

	::System::String* Method_1_6011AA7C1E79F305(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_6011AA7C1E79F305_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_954EB24DA065442A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_954EB24DA065442A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A37026F5FDBACF68(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_A37026F5FDBACF68_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6A5926614A3A36F5(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_6A5926614A3A36F5_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F54DE4640CE99063(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_F54DE4640CE99063_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F54DE4640CE99063_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_F54DE4640CE99063_1_OFFSET))(this, a1);
	}
};
