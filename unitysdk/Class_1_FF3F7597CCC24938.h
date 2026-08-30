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

#define CLASS_1_FF3F7597CCC24938_DISPOSE_OFFSET UNITYSDK_OFFSET(0x160E10A0)
#define CLASS_1_FF3F7597CCC24938_GET_CLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x160E0190)
#define CLASS_1_FF3F7597CCC24938_GET_CLIP0NAME_OFFSET UNITYSDK_OFFSET(0x160E0150)
#define CLASS_1_FF3F7597CCC24938_GET_CLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x160E01B0)
#define CLASS_1_FF3F7597CCC24938_GET_CLIP1NAME_OFFSET UNITYSDK_OFFSET(0x160E0170)
#define CLASS_1_FF3F7597CCC24938_GET_DISABLEANIMEVENT_OFFSET UNITYSDK_OFFSET(0x160E0070)
#define CLASS_1_FF3F7597CCC24938_GET_FREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x160E0030)
#define CLASS_1_FF3F7597CCC24938_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x160E0020)
#define CLASS_1_FF3F7597CCC24938_GET_PRELOADFREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x160E0050)
#define CLASS_1_FF3F7597CCC24938_GET_RIBBONCLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x160E01D0)
#define CLASS_1_FF3F7597CCC24938_GET_RIBBONCLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x160E01F0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_0552BEF80A6A3BAA_1_OFFSET UNITYSDK_OFFSET(0x160DFFB0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_0552BEF80A6A3BAA_OFFSET UNITYSDK_OFFSET(0x160DFD00)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_08CCBB9E689D6A81_OFFSET UNITYSDK_OFFSET(0x160E0210)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_102192C05CB5CDCB_OFFSET UNITYSDK_OFFSET(0x160DFBC0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_2950A42D31005822_OFFSET UNITYSDK_OFFSET(0x160E07B0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_4A6695F863A75568_OFFSET UNITYSDK_OFFSET(0x160E0E00)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_4B6DEDB9FF4B740B_OFFSET UNITYSDK_OFFSET(0x160E10F0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_6011AA7C1E79F305_OFFSET UNITYSDK_OFFSET(0x160E1150)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_6A5926614A3A36F5_OFFSET UNITYSDK_OFFSET(0x160E12D0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_78A1456A6DBF4558_OFFSET UNITYSDK_OFFSET(0x160DFAD0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_86EDAAEABA959F35_OFFSET UNITYSDK_OFFSET(0x160DFD70)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_954EB24DA065442A_1_OFFSET UNITYSDK_OFFSET(0x160E1340)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_954EB24DA065442A_2_OFFSET UNITYSDK_OFFSET(0x160E13A0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_954EB24DA065442A_OFFSET UNITYSDK_OFFSET(0x160E11C0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x160E0550)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_A37026F5FDBACF68_OFFSET UNITYSDK_OFFSET(0x160E1230)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_AE51354F9458E8B7_OFFSET UNITYSDK_OFFSET(0x160E05C0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_C86F0349DCEC0A70_1_OFFSET UNITYSDK_OFFSET(0x160E00F0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_C86F0349DCEC0A70_OFFSET UNITYSDK_OFFSET(0x160E0090)
#define CLASS_1_FF3F7597CCC24938_SET_CLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x160E01A0)
#define CLASS_1_FF3F7597CCC24938_SET_CLIP0NAME_OFFSET UNITYSDK_OFFSET(0x160E0160)
#define CLASS_1_FF3F7597CCC24938_SET_CLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x160E01C0)
#define CLASS_1_FF3F7597CCC24938_SET_CLIP1NAME_OFFSET UNITYSDK_OFFSET(0x160E0180)
#define CLASS_1_FF3F7597CCC24938_SET_DISABLEANIMEVENT_OFFSET UNITYSDK_OFFSET(0x160E0080)
#define CLASS_1_FF3F7597CCC24938_SET_FREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x160E0040)
#define CLASS_1_FF3F7597CCC24938_SET_PRELOADFREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x160E0060)
#define CLASS_1_FF3F7597CCC24938_SET_RIBBONCLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x160E01E0)
#define CLASS_1_FF3F7597CCC24938_SET_RIBBONCLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x160E0200)
#define CLASS_1_FF3F7597CCC24938__CCTOR_OFFSET UNITYSDK_OFFSET(0x160E1400)
#define CLASS_1_FF3F7597CCC24938__CTOR_OFFSET UNITYSDK_OFFSET(0x160E0220)

inline static constexpr unsigned int Class_1_FF3F7597CCC24938_TypeDefinitionIndex = 57451;

class Class_1_FF3F7597CCC24938 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_IIOGALCBHGI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF3F7597CCC24938_TypeDefinitionIndex)->GetStaticField(0x2DE70);
	}
	// static const ::System::String* CKILBBNMPBJ; // 0x0
	// static const ::System::Int32 FNCJNOCCNHI = 0x2; // 0x0
	::System::String* MMMJBLGMDHG; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* BADIPHHBBJC; // 0x18
	::UnityEngine::AnimationClip* CMOOEJBJILE; // 0x20
	::UnityEngine::AnimationClip* IONFOGLJECB; // 0x28
	::UnityEngine::AnimationClip* CALPEKNOOID; // 0x30
	::Il2CppArray<::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF>* LGGJLMANEJF; // 0x38
	::System::String* GNAHLKCNFEA; // 0x40
	::System::String* KKBIKLPNAPE; // 0x48
	::System::String* _Clip0Name_k__BackingField; // 0x50
	::System::String* DIGDPJDEFFD; // 0x58
	::UnityEngine::AnimationClip* EHIOFJJKLNO; // 0x60
	::System::String* _Clip1Name_k__BackingField; // 0x68
	::System::UInt32 _FreeStyleMotionID_k__BackingField; // 0x70
	::System::Int32 MILHFMNBLGE; // 0x74
	::System::UInt32 _PreloadFreeStyleMotionID_k__BackingField; // 0x78
	::System::Int32 AAPBDMEIPEI; // 0x7C
	::System::Int32 HFCEDENGGNL; // 0x80
	::System::Int32 _Clip0NameHash_k__BackingField; // 0x84
	::System::Int32 PAJCGAHCINH; // 0x88
	::System::Int32 GAJBICOMABH; // 0x8C
	::System::Int32 _Clip1NameHash_k__BackingField; // 0x90
	::System::Int32 _RibbonClip1NameHash_k__BackingField; // 0x94
	::System::Int32 MJNCMEMBGLO; // 0x98
	::System::Int32 _GroupIndex_k__BackingField; // 0x9C
	::System::Int32 JGLKNIMKIMI; // 0xA0
	::System::Int32 _RibbonClip0NameHash_k__BackingField; // 0xA4
	::System::Boolean HHNIJEPEELB; // 0xA8
	::System::Boolean AAFDNLMOHEB; // 0xA9
	::System::Boolean DNDHCFFOGJK; // 0xAA
	::System::Boolean _DisableAnimEvent_k__BackingField; // 0xAB
	::System::Int32 NMFILPIBIJC; // 0xAC
	::System::Int32 IDDLEBNMPIG; // 0xB0

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

	static ::System::Void Method_1_102192C05CB5CDCB(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_102192C05CB5CDCB_OFFSET))(a1, a2);
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

	::System::Void set_FreeStyleMotionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_FREESTYLEMOTIONID_OFFSET))(this, a1);
	}

	::System::UInt32 get_PreloadFreeStyleMotionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_PRELOADFREESTYLEMOTIONID_OFFSET))(this);
	}

	::System::Void set_PreloadFreeStyleMotionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_PRELOADFREESTYLEMOTIONID_OFFSET))(this, a1);
	}

	::System::Boolean get_DisableAnimEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_DISABLEANIMEVENT_OFFSET))(this);
	}

	::System::Void set_DisableAnimEvent(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_DISABLEANIMEVENT_OFFSET))(this, a1);
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

	::System::Void set_Clip0Name(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_CLIP0NAME_OFFSET))(this, a1);
	}

	::System::String* get_Clip1Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_CLIP1NAME_OFFSET))(this);
	}

	::System::Void set_Clip1Name(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_CLIP1NAME_OFFSET))(this, a1);
	}

	::System::Int32 get_Clip0NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_CLIP0NAMEHASH_OFFSET))(this);
	}

	::System::Void set_Clip0NameHash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_CLIP0NAMEHASH_OFFSET))(this, a1);
	}

	::System::Int32 get_Clip1NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_CLIP1NAMEHASH_OFFSET))(this);
	}

	::System::Void set_Clip1NameHash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_CLIP1NAMEHASH_OFFSET))(this, a1);
	}

	::System::Int32 get_RibbonClip0NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_RIBBONCLIP0NAMEHASH_OFFSET))(this);
	}

	::System::Void set_RibbonClip0NameHash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_RIBBONCLIP0NAMEHASH_OFFSET))(this, a1);
	}

	::System::Int32 get_RibbonClip1NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_RIBBONCLIP1NAMEHASH_OFFSET))(this);
	}

	::System::Void set_RibbonClip1NameHash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_RIBBONCLIP1NAMEHASH_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* Method_1_08CCBB9E689D6A81()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_08CCBB9E689D6A81_OFFSET))(this);
	}

	::System::Boolean Method_1_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE51354F9458E8B7(::UnityEngine::AnimatorOverrideController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_AE51354F9458E8B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_2950A42D31005822(::System::UInt32 a1, ::UnityEngine::AnimatorOverrideController* a2, ::UnityEngine::AnimationClip* a3, ::UnityEngine::AnimationClip* a4, ::UnityEngine::AnimationClip* a5, ::UnityEngine::AnimationClip* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::AnimatorOverrideController*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_2950A42D31005822_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_4A6695F863A75568(::UnityEngine::AnimatorOverrideController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_4A6695F863A75568_OFFSET))(this, a1);
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
