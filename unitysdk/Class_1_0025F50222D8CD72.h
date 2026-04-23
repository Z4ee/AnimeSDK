#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAnchorType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_0025F50222D8CD72_GET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0x125543B0)
#define CLASS_1_0025F50222D8CD72_GET_EFFECTPATH2V1LOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x12554380)
#define CLASS_1_0025F50222D8CD72_GET_EFFECTPATH2V1TEAMMATE_OFFSET UNITYSDK_OFFSET(0x12554390)
#define CLASS_1_0025F50222D8CD72_GET_EFFECTPATHENEMY_OFFSET UNITYSDK_OFFSET(0x12554370)
#define CLASS_1_0025F50222D8CD72_GET_EFFECTPATH_OFFSET UNITYSDK_OFFSET(0x12554360)
#define CLASS_1_0025F50222D8CD72_GET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x125543C0)
#define CLASS_1_0025F50222D8CD72_GET_FADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x125543E0)
#define CLASS_1_0025F50222D8CD72_GET_FADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x125543F0)
#define CLASS_1_0025F50222D8CD72_GET_HAS2V1SPECIALVERSION_OFFSET UNITYSDK_OFFSET(0x125543A0)
#define CLASS_1_0025F50222D8CD72_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x12554100)
#define CLASS_1_0025F50222D8CD72_METHOD_1_B64782115EFE4597_OFFSET UNITYSDK_OFFSET(0x12554010)
#define CLASS_1_0025F50222D8CD72_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12554160)
#define CLASS_1_0025F50222D8CD72_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x12554090)
#define CLASS_1_0025F50222D8CD72_METHOD_1_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x125541B0)
#define CLASS_1_0025F50222D8CD72_METHOD_1_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x12554290)
#define CLASS_1_0025F50222D8CD72_SET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x125543D0)
#define CLASS_1_0025F50222D8CD72__CTOR_OFFSET UNITYSDK_OFFSET(0x12553EF0)

inline static constexpr unsigned int Class_1_0025F50222D8CD72_TypeDefinitionIndex = 69802;

class Class_1_0025F50222D8CD72 : public ::System::Object
{
public:
	::UnityEngine::GameObject* _EffectRoot_k__BackingField; // 0x10
	::System::String* _EffectPath2v1LocalPlayer_k__BackingField; // 0x18
	::System::String* _EffectPath_k__BackingField; // 0x20
	::System::String* _EffectPathEnemy_k__BackingField; // 0x28
	::System::String* _FadeInAnimation_k__BackingField; // 0x30
	::System::String* _EffectPath2v1Teammate_k__BackingField; // 0x38
	::System::String* _FadeOutAnimation_k__BackingField; // 0x40
	::System::Single Field_1_10; // 0x48
	::System::Boolean _Has2v1SpecialVersion_k__BackingField; // 0x4C
	::System::Single Field_1_0; // 0x50
	::RPG::GameCore::DiceCombatAnchorType _AnchorType_k__BackingField; // 0x54

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_0025F50222D8CD72* Method_1_B64782115EFE4597(::System::UInt32 a1)
	{
		return ((::Class_1_0025F50222D8CD72*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_METHOD_1_B64782115EFE4597_OFFSET))(a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_METHOD_1_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Void Method_1_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_METHOD_1_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::String* get_EffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_GET_EFFECTPATH_OFFSET))(this);
	}

	::System::String* get_EffectPathEnemy()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_GET_EFFECTPATHENEMY_OFFSET))(this);
	}

	::System::String* get_EffectPath2v1LocalPlayer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_GET_EFFECTPATH2V1LOCALPLAYER_OFFSET))(this);
	}

	::System::String* get_EffectPath2v1Teammate()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_GET_EFFECTPATH2V1TEAMMATE_OFFSET))(this);
	}

	::System::Boolean get_Has2v1SpecialVersion()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_GET_HAS2V1SPECIALVERSION_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatAnchorType get_AnchorType()
	{
		return ((::RPG::GameCore::DiceCombatAnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_GET_ANCHORTYPE_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_EffectRoot()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_GET_EFFECTROOT_OFFSET))(this);
	}

	::System::Void set_EffectRoot(::UnityEngine::GameObject* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_SET_EFFECTROOT_OFFSET))(this, value);
	}

	::System::String* get_FadeInAnimation()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_GET_FADEINANIMATION_OFFSET))(this);
	}

	::System::String* get_FadeOutAnimation()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0025F50222D8CD72_GET_FADEOUTANIMATION_OFFSET))(this);
	}
};
