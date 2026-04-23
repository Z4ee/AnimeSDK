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

#define CLASS_1_D90B24B288138DD4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118708E0)
#define CLASS_1_D90B24B288138DD4_GET_CLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x1186FFE0)
#define CLASS_1_D90B24B288138DD4_GET_CLIP0NAME_OFFSET UNITYSDK_OFFSET(0x1186FFA0)
#define CLASS_1_D90B24B288138DD4_GET_CLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x11870000)
#define CLASS_1_D90B24B288138DD4_GET_CLIP1NAME_OFFSET UNITYSDK_OFFSET(0x1186FFC0)
#define CLASS_1_D90B24B288138DD4_GET_DISABLEANIMEVENT_OFFSET UNITYSDK_OFFSET(0x1186FE70)
#define CLASS_1_D90B24B288138DD4_GET_FREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x1186FE30)
#define CLASS_1_D90B24B288138DD4_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x1186FE20)
#define CLASS_1_D90B24B288138DD4_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1186FEA0)
#define CLASS_1_D90B24B288138DD4_GET_LAYERNAME_OFFSET UNITYSDK_OFFSET(0x1186FE90)
#define CLASS_1_D90B24B288138DD4_GET_PRELOADFREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x1186FE50)
#define CLASS_1_D90B24B288138DD4_METHOD_1_08CCBB9E689D6A81_OFFSET UNITYSDK_OFFSET(0x11870020)
#define CLASS_1_D90B24B288138DD4_METHOD_1_45CBF9C7C67B3D75_OFFSET UNITYSDK_OFFSET(0x11870240)
#define CLASS_1_D90B24B288138DD4_METHOD_1_4B6DEDB9FF4B740B_OFFSET UNITYSDK_OFFSET(0x11870930)
#define CLASS_1_D90B24B288138DD4_METHOD_1_6011AA7C1E79F305_OFFSET UNITYSDK_OFFSET(0x11870990)
#define CLASS_1_D90B24B288138DD4_METHOD_1_6A5926614A3A36F5_OFFSET UNITYSDK_OFFSET(0x11870AC0)
#define CLASS_1_D90B24B288138DD4_METHOD_1_747157871209F931_OFFSET UNITYSDK_OFFSET(0x11870790)
#define CLASS_1_D90B24B288138DD4_METHOD_1_954EB24DA065442A_OFFSET UNITYSDK_OFFSET(0x118709F0)
#define CLASS_1_D90B24B288138DD4_METHOD_1_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x118701D0)
#define CLASS_1_D90B24B288138DD4_METHOD_1_A37026F5FDBACF68_OFFSET UNITYSDK_OFFSET(0x11870A50)
#define CLASS_1_D90B24B288138DD4_METHOD_1_C86F0349DCEC0A70_1_OFFSET UNITYSDK_OFFSET(0x1186FF30)
#define CLASS_1_D90B24B288138DD4_METHOD_1_C86F0349DCEC0A70_OFFSET UNITYSDK_OFFSET(0x1186FEC0)
#define CLASS_1_D90B24B288138DD4_METHOD_1_E8867F567A99B8B7_OFFSET UNITYSDK_OFFSET(0x118703A0)
#define CLASS_1_D90B24B288138DD4_METHOD_1_F54DE4640CE99063_1_OFFSET UNITYSDK_OFFSET(0x11870B70)
#define CLASS_1_D90B24B288138DD4_METHOD_1_F54DE4640CE99063_OFFSET UNITYSDK_OFFSET(0x11870B20)
#define CLASS_1_D90B24B288138DD4_SET_CLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x1186FFF0)
#define CLASS_1_D90B24B288138DD4_SET_CLIP0NAME_OFFSET UNITYSDK_OFFSET(0x1186FFB0)
#define CLASS_1_D90B24B288138DD4_SET_CLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x11870010)
#define CLASS_1_D90B24B288138DD4_SET_CLIP1NAME_OFFSET UNITYSDK_OFFSET(0x1186FFD0)
#define CLASS_1_D90B24B288138DD4_SET_DISABLEANIMEVENT_OFFSET UNITYSDK_OFFSET(0x1186FE80)
#define CLASS_1_D90B24B288138DD4_SET_FREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x1186FE40)
#define CLASS_1_D90B24B288138DD4_SET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1186FEB0)
#define CLASS_1_D90B24B288138DD4_SET_PRELOADFREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x1186FE60)
#define CLASS_1_D90B24B288138DD4__CTOR_OFFSET UNITYSDK_OFFSET(0x11870030)

inline static constexpr unsigned int Class_1_D90B24B288138DD4_TypeDefinitionIndex = 52805;

class Class_1_D90B24B288138DD4 : public ::System::Object
{
public:
	::UnityEngine::AnimationClip* Field_1_16; // 0x10
	::System::String* _LayerName_k__BackingField; // 0x18
	::System::String* Field_1_7; // 0x20
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* Field_1_22; // 0x28
	::System::String* _Clip1Name_k__BackingField; // 0x30
	::System::String* Field_1_6; // 0x38
	::Il2CppArray<::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF>* Field_1_23; // 0x40
	::UnityEngine::AnimationClip* Field_1_17; // 0x48
	::System::String* _Clip0Name_k__BackingField; // 0x50
	::System::Int32 Field_1_21; // 0x58
	::System::Int32 Field_1_9; // 0x5C
	::System::Int32 _LayerIndex_k__BackingField; // 0x60
	::System::Int32 Field_1_20; // 0x64
	::System::Boolean Field_1_18; // 0x68
	::System::Boolean Field_1_19; // 0x69
	::System::Boolean _DisableAnimEvent_k__BackingField; // 0x6A
	::System::Boolean Field_1_11; // 0x6B
	::System::Int32 _Clip0NameHash_k__BackingField; // 0x6C
	::System::UInt32 _PreloadFreeStyleMotionID_k__BackingField; // 0x70
	::System::Int32 _Clip1NameHash_k__BackingField; // 0x74
	::System::UInt32 _FreeStyleMotionID_k__BackingField; // 0x78
	::System::Int32 Field_1_8; // 0x7C
	::System::Int32 Field_1_10; // 0x80
	::System::Int32 _GroupIndex_k__BackingField; // 0x84

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

	::System::Void set_FreeStyleMotionID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_FREESTYLEMOTIONID_OFFSET))(this, value);
	}

	::System::UInt32 get_PreloadFreeStyleMotionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_PRELOADFREESTYLEMOTIONID_OFFSET))(this);
	}

	::System::Void set_PreloadFreeStyleMotionID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_PRELOADFREESTYLEMOTIONID_OFFSET))(this, value);
	}

	::System::Boolean get_DisableAnimEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_DISABLEANIMEVENT_OFFSET))(this);
	}

	::System::Void set_DisableAnimEvent(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_DISABLEANIMEVENT_OFFSET))(this, value);
	}

	::System::String* get_LayerName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_LAYERNAME_OFFSET))(this);
	}

	::System::Int32 get_LayerIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_LAYERINDEX_OFFSET))(this);
	}

	::System::Void set_LayerIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_LAYERINDEX_OFFSET))(this, value);
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

	::System::Void set_Clip0Name(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_CLIP0NAME_OFFSET))(this, value);
	}

	::System::String* get_Clip1Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_CLIP1NAME_OFFSET))(this);
	}

	::System::Void set_Clip1Name(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_CLIP1NAME_OFFSET))(this, value);
	}

	::System::Int32 get_Clip0NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_CLIP0NAMEHASH_OFFSET))(this);
	}

	::System::Void set_Clip0NameHash(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_CLIP0NAMEHASH_OFFSET))(this, value);
	}

	::System::Int32 get_Clip1NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_GET_CLIP1NAMEHASH_OFFSET))(this);
	}

	::System::Void set_Clip1NameHash(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_SET_CLIP1NAMEHASH_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* Method_1_08CCBB9E689D6A81()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_08CCBB9E689D6A81_OFFSET))(this);
	}

	::System::Boolean Method_1_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::Void Method_1_45CBF9C7C67B3D75(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorOverrideController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_45CBF9C7C67B3D75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E8867F567A99B8B7(::System::UInt32 a1, ::UnityEngine::AnimatorOverrideController* a2, ::UnityEngine::AnimationClip* a3, ::UnityEngine::AnimationClip* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::AnimatorOverrideController*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_E8867F567A99B8B7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_747157871209F931(::UnityEngine::AnimatorOverrideController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + CLASS_1_D90B24B288138DD4_METHOD_1_747157871209F931_OFFSET))(this, a1);
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
