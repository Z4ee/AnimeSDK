#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimatorOverrideController; }

#define CLASS_1_FF3F7597CCC24938_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1139AD50)
#define CLASS_1_FF3F7597CCC24938_GET_CLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x11399DF0)
#define CLASS_1_FF3F7597CCC24938_GET_CLIP0NAME_OFFSET UNITYSDK_OFFSET(0x11399DB0)
#define CLASS_1_FF3F7597CCC24938_GET_CLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x11399E10)
#define CLASS_1_FF3F7597CCC24938_GET_CLIP1NAME_OFFSET UNITYSDK_OFFSET(0x11399DD0)
#define CLASS_1_FF3F7597CCC24938_GET_DISABLEANIMEVENT_OFFSET UNITYSDK_OFFSET(0x11399CB0)
#define CLASS_1_FF3F7597CCC24938_GET_FREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x11399C70)
#define CLASS_1_FF3F7597CCC24938_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x11399C60)
#define CLASS_1_FF3F7597CCC24938_GET_PRELOADFREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x11399C90)
#define CLASS_1_FF3F7597CCC24938_GET_RIBBONCLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x11399E30)
#define CLASS_1_FF3F7597CCC24938_GET_RIBBONCLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x11399E50)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_0552BEF80A6A3BAA_1_OFFSET UNITYSDK_OFFSET(0x11399BF0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_0552BEF80A6A3BAA_OFFSET UNITYSDK_OFFSET(0x11399940)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_08CCBB9E689D6A81_OFFSET UNITYSDK_OFFSET(0x11399E70)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_2950A42D31005822_OFFSET UNITYSDK_OFFSET(0x1139A440)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_4B6DEDB9FF4B740B_OFFSET UNITYSDK_OFFSET(0x1139ADA0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_6011AA7C1E79F305_OFFSET UNITYSDK_OFFSET(0x1139AE00)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_6A5926614A3A36F5_OFFSET UNITYSDK_OFFSET(0x1139AF70)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_78A1456A6DBF4558_OFFSET UNITYSDK_OFFSET(0x113996E0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_86EDAAEABA959F35_OFFSET UNITYSDK_OFFSET(0x113999B0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_954EB24DA065442A_1_OFFSET UNITYSDK_OFFSET(0x1139AFE0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_954EB24DA065442A_2_OFFSET UNITYSDK_OFFSET(0x1139B040)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_954EB24DA065442A_OFFSET UNITYSDK_OFFSET(0x1139AE70)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x1139A210)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_A37026F5FDBACF68_OFFSET UNITYSDK_OFFSET(0x1139AEE0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_C30B43666254BC3C_OFFSET UNITYSDK_OFFSET(0x1139AAB0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_C86F0349DCEC0A70_1_OFFSET UNITYSDK_OFFSET(0x11399D40)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_C86F0349DCEC0A70_OFFSET UNITYSDK_OFFSET(0x11399CD0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_D754865255622448_OFFSET UNITYSDK_OFFSET(0x113997D0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_ED919F1FFEC5E0FD_OFFSET UNITYSDK_OFFSET(0x1139A290)
#define CLASS_1_FF3F7597CCC24938_SET_CLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x11399E00)
#define CLASS_1_FF3F7597CCC24938_SET_CLIP0NAME_OFFSET UNITYSDK_OFFSET(0x11399DC0)
#define CLASS_1_FF3F7597CCC24938_SET_CLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x11399E20)
#define CLASS_1_FF3F7597CCC24938_SET_CLIP1NAME_OFFSET UNITYSDK_OFFSET(0x11399DE0)
#define CLASS_1_FF3F7597CCC24938_SET_DISABLEANIMEVENT_OFFSET UNITYSDK_OFFSET(0x11399CC0)
#define CLASS_1_FF3F7597CCC24938_SET_FREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x11399C80)
#define CLASS_1_FF3F7597CCC24938_SET_PRELOADFREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x11399CA0)
#define CLASS_1_FF3F7597CCC24938_SET_RIBBONCLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x11399E40)
#define CLASS_1_FF3F7597CCC24938_SET_RIBBONCLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x11399E60)
#define CLASS_1_FF3F7597CCC24938__CCTOR_OFFSET UNITYSDK_OFFSET(0x1139B0A0)
#define CLASS_1_FF3F7597CCC24938__CTOR_OFFSET UNITYSDK_OFFSET(0x11399E80)

inline static constexpr unsigned int Class_1_FF3F7597CCC24938_TypeDefinitionIndex = 46144;

class Class_1_FF3F7597CCC24938 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF3F7597CCC24938_TypeDefinitionIndex)->GetStaticField(0x31040);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::UnityEngine::AnimationClip* Field_1_25; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* Field_1_33; // 0x18
	::System::String* Field_1_11; // 0x20
	::System::String* _Clip0Name_k__BackingField; // 0x28
	::UnityEngine::AnimationClip* Field_1_26; // 0x30
	::UnityEngine::AnimationClip* Field_1_24; // 0x38
	::System::String* Field_1_12; // 0x40
	::Il2CppArray<::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF>* Field_1_34; // 0x48
	::UnityEngine::AnimationClip* Field_1_23; // 0x50
	::System::String* _Clip1Name_k__BackingField; // 0x58
	::System::String* Field_1_8; // 0x60
	::System::String* Field_1_7; // 0x68
	::System::UInt32 _PreloadFreeStyleMotionID_k__BackingField; // 0x70
	::System::UInt32 _FreeStyleMotionID_k__BackingField; // 0x74
	::System::Int32 _RibbonClip0NameHash_k__BackingField; // 0x78
	::System::Int32 _Clip1NameHash_k__BackingField; // 0x7C
	::System::Int32 Field_1_31; // 0x80
	::System::Int32 Field_1_14; // 0x84
	::System::Int32 Field_1_29; // 0x88
	::System::Int32 Field_1_10; // 0x8C
	::System::Int32 Field_1_13; // 0x90
	::System::Int32 Field_1_15; // 0x94
	::System::Int32 _RibbonClip1NameHash_k__BackingField; // 0x98
	::System::Boolean Field_1_28; // 0x9C
	::System::Boolean _DisableAnimEvent_k__BackingField; // 0x9D
	::System::Boolean Field_1_27; // 0x9E
	::System::Boolean Field_1_16; // 0x9F
	::System::Int32 Field_1_9; // 0xA0
	::System::Int32 _Clip0NameHash_k__BackingField; // 0xA4
	::System::Int32 Field_1_32; // 0xA8
	::System::Int32 Field_1_30; // 0xAC
	::System::Int32 _GroupIndex_k__BackingField; // 0xB0

	::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>*&))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_78A1456A6DBF4558(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_78A1456A6DBF4558_OFFSET))(a1);
	}

	static ::System::Void Method_1_D754865255622448(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_D754865255622448_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_0552BEF80A6A3BAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_0552BEF80A6A3BAA_OFFSET))(this);
	}

	::System::Boolean Method_1_0552BEF80A6A3BAA_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_0552BEF80A6A3BAA_1_OFFSET))(this);
	}

	static ::System::Boolean Method_1_86EDAAEABA959F35(::UnityEngine::AnimationClip* a1, ::UnityEngine::AnimationClip* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_86EDAAEABA959F35_OFFSET))(a1, a2);
	}

	::System::Int32 get_GroupIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_GROUPINDEX_OFFSET))(this);
	}

	::System::UInt32 get_FreeStyleMotionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_FREESTYLEMOTIONID_OFFSET))(this);
	}

	::System::Void set_FreeStyleMotionID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_FREESTYLEMOTIONID_OFFSET))(this, value);
	}

	::System::UInt32 get_PreloadFreeStyleMotionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_PRELOADFREESTYLEMOTIONID_OFFSET))(this);
	}

	::System::Void set_PreloadFreeStyleMotionID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_PRELOADFREESTYLEMOTIONID_OFFSET))(this, value);
	}

	::System::Boolean get_DisableAnimEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_DISABLEANIMEVENT_OFFSET))(this);
	}

	::System::Void set_DisableAnimEvent(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_DISABLEANIMEVENT_OFFSET))(this, value);
	}

	::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF Method_1_C86F0349DCEC0A70()
	{
		return ((::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_C86F0349DCEC0A70_OFFSET))(this);
	}

	::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF Method_1_C86F0349DCEC0A70_1()
	{
		return ((::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_C86F0349DCEC0A70_1_OFFSET))(this);
	}

	::System::String* get_Clip0Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_CLIP0NAME_OFFSET))(this);
	}

	::System::Void set_Clip0Name(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_CLIP0NAME_OFFSET))(this, value);
	}

	::System::String* get_Clip1Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_CLIP1NAME_OFFSET))(this);
	}

	::System::Void set_Clip1Name(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_CLIP1NAME_OFFSET))(this, value);
	}

	::System::Int32 get_Clip0NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_CLIP0NAMEHASH_OFFSET))(this);
	}

	::System::Void set_Clip0NameHash(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_CLIP0NAMEHASH_OFFSET))(this, value);
	}

	::System::Int32 get_Clip1NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_CLIP1NAMEHASH_OFFSET))(this);
	}

	::System::Void set_Clip1NameHash(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_CLIP1NAMEHASH_OFFSET))(this, value);
	}

	::System::Int32 get_RibbonClip0NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_RIBBONCLIP0NAMEHASH_OFFSET))(this);
	}

	::System::Void set_RibbonClip0NameHash(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_RIBBONCLIP0NAMEHASH_OFFSET))(this, value);
	}

	::System::Int32 get_RibbonClip1NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_RIBBONCLIP1NAMEHASH_OFFSET))(this);
	}

	::System::Void set_RibbonClip1NameHash(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_RIBBONCLIP1NAMEHASH_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* Method_1_08CCBB9E689D6A81()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_08CCBB9E689D6A81_OFFSET))(this);
	}

	::System::Boolean Method_1_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED919F1FFEC5E0FD(::UnityEngine::AnimatorOverrideController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_ED919F1FFEC5E0FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_2950A42D31005822(::System::UInt32 a1, ::UnityEngine::AnimatorOverrideController* a2, ::UnityEngine::AnimationClip* a3, ::UnityEngine::AnimationClip* a4, ::UnityEngine::AnimationClip* a5, ::UnityEngine::AnimationClip* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::AnimatorOverrideController*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_2950A42D31005822_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_C30B43666254BC3C(::UnityEngine::AnimatorOverrideController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_C30B43666254BC3C_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_4B6DEDB9FF4B740B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_4B6DEDB9FF4B740B_OFFSET))(this, a1);
	}

	::System::String* Method_1_6011AA7C1E79F305(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_6011AA7C1E79F305_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_954EB24DA065442A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_954EB24DA065442A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A37026F5FDBACF68(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_A37026F5FDBACF68_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6A5926614A3A36F5(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_6A5926614A3A36F5_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_954EB24DA065442A_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_954EB24DA065442A_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_954EB24DA065442A_2(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_954EB24DA065442A_2_OFFSET))(this, a1);
	}
};
