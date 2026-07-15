#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAnchorType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_5A5E289E67F88592_GET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0x16F2F380)
#define CLASS_1_5A5E289E67F88592_GET_EFFECTPATH2V1LOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x16F2F350)
#define CLASS_1_5A5E289E67F88592_GET_EFFECTPATH2V1TEAMMATE_OFFSET UNITYSDK_OFFSET(0x16F2F360)
#define CLASS_1_5A5E289E67F88592_GET_EFFECTPATHENEMY_OFFSET UNITYSDK_OFFSET(0x16F2F340)
#define CLASS_1_5A5E289E67F88592_GET_EFFECTPATH_OFFSET UNITYSDK_OFFSET(0x16F2F330)
#define CLASS_1_5A5E289E67F88592_GET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x16F2F390)
#define CLASS_1_5A5E289E67F88592_GET_FADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x16F2F3B0)
#define CLASS_1_5A5E289E67F88592_GET_FADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x16F2F3C0)
#define CLASS_1_5A5E289E67F88592_GET_HAS2V1SPECIALVERSION_OFFSET UNITYSDK_OFFSET(0x16F2F370)
#define CLASS_1_5A5E289E67F88592_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16F2F0F0)
#define CLASS_1_5A5E289E67F88592_METHOD_1_B64782115EFE4597_OFFSET UNITYSDK_OFFSET(0x16F2F000)
#define CLASS_1_5A5E289E67F88592_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16F2F150)
#define CLASS_1_5A5E289E67F88592_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x16F2F080)
#define CLASS_1_5A5E289E67F88592_METHOD_1_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x16F2F1A0)
#define CLASS_1_5A5E289E67F88592_METHOD_1_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x16F2F270)
#define CLASS_1_5A5E289E67F88592_SET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x16F2F3A0)
#define CLASS_1_5A5E289E67F88592__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2EEE0)

inline static constexpr unsigned int Class_1_5A5E289E67F88592_TypeDefinitionIndex = 72127;

class Class_1_5A5E289E67F88592 : public ::System::Object
{
public:
	::UnityEngine::GameObject* _EffectRoot_k__BackingField; // 0x10
	::System::String* _EffectPathEnemy_k__BackingField; // 0x18
	::System::String* _EffectPath2v1LocalPlayer_k__BackingField; // 0x20
	::System::String* _EffectPath_k__BackingField; // 0x28
	::System::String* _EffectPath2v1Teammate_k__BackingField; // 0x30
	::System::String* _FadeOutAnimation_k__BackingField; // 0x38
	::System::String* _FadeInAnimation_k__BackingField; // 0x40
	::RPG::GameCore::DiceCombatAnchorType _AnchorType_k__BackingField; // 0x48
	::System::Single Field_1_8; // 0x4C
	::System::Single Field_1_9; // 0x50
	::System::Boolean _Has2v1SpecialVersion_k__BackingField; // 0x54

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_5A5E289E67F88592* Method_1_B64782115EFE4597(::System::UInt32 a1)
	{
		return ((::Class_1_5A5E289E67F88592*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_METHOD_1_B64782115EFE4597_OFFSET))(a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_METHOD_1_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Void Method_1_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_METHOD_1_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::String* get_EffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_GET_EFFECTPATH_OFFSET))(this);
	}

	::System::String* get_EffectPathEnemy()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_GET_EFFECTPATHENEMY_OFFSET))(this);
	}

	::System::String* get_EffectPath2v1LocalPlayer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_GET_EFFECTPATH2V1LOCALPLAYER_OFFSET))(this);
	}

	::System::String* get_EffectPath2v1Teammate()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_GET_EFFECTPATH2V1TEAMMATE_OFFSET))(this);
	}

	::System::Boolean get_Has2v1SpecialVersion()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_GET_HAS2V1SPECIALVERSION_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatAnchorType get_AnchorType()
	{
		return ((::RPG::GameCore::DiceCombatAnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_GET_ANCHORTYPE_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_EffectRoot()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_GET_EFFECTROOT_OFFSET))(this);
	}

	::System::Void set_EffectRoot(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_SET_EFFECTROOT_OFFSET))(this, a1);
	}

	::System::String* get_FadeInAnimation()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_GET_FADEINANIMATION_OFFSET))(this);
	}

	::System::String* get_FadeOutAnimation()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A5E289E67F88592_GET_FADEOUTANIMATION_OFFSET))(this);
	}
};
