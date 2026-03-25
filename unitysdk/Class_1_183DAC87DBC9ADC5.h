#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAnchorType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_183DAC87DBC9ADC5_GET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0x8DC6DB0)
#define CLASS_1_183DAC87DBC9ADC5_GET_EFFECTPATHENEMY_OFFSET UNITYSDK_OFFSET(0x8DC6DA0)
#define CLASS_1_183DAC87DBC9ADC5_GET_EFFECTPATH_OFFSET UNITYSDK_OFFSET(0x8DC6D90)
#define CLASS_1_183DAC87DBC9ADC5_GET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x8DC6DC0)
#define CLASS_1_183DAC87DBC9ADC5_GET_FADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x8DC6DE0)
#define CLASS_1_183DAC87DBC9ADC5_GET_FADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x8DC6DF0)
#define CLASS_1_183DAC87DBC9ADC5_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x8DC6B30)
#define CLASS_1_183DAC87DBC9ADC5_METHOD_1_B64782115EFE4597_OFFSET UNITYSDK_OFFSET(0x8DC6A40)
#define CLASS_1_183DAC87DBC9ADC5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8DC6B90)
#define CLASS_1_183DAC87DBC9ADC5_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x8DC6AC0)
#define CLASS_1_183DAC87DBC9ADC5_METHOD_1_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x8DC6BE0)
#define CLASS_1_183DAC87DBC9ADC5_METHOD_1_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x8DC6CC0)
#define CLASS_1_183DAC87DBC9ADC5_SET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x8DC6DD0)
#define CLASS_1_183DAC87DBC9ADC5__CTOR_OFFSET UNITYSDK_OFFSET(0x8DC6970)

inline static constexpr unsigned int Class_1_183DAC87DBC9ADC5_TypeDefinitionIndex = 61895;

class Class_1_183DAC87DBC9ADC5 : public ::System::Object
{
public:
	::System::String* _FadeOutAnimation_k__BackingField; // 0x10
	::System::String* _EffectPathEnemy_k__BackingField; // 0x18
	::System::String* _EffectPath_k__BackingField; // 0x20
	::UnityEngine::GameObject* _EffectRoot_k__BackingField; // 0x28
	::System::String* _FadeInAnimation_k__BackingField; // 0x30
	::System::Single Field_1_7; // 0x38
	::System::Single Field_1_0; // 0x3C
	::RPG::GameCore::DiceCombatAnchorType _AnchorType_k__BackingField; // 0x40

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_183DAC87DBC9ADC5__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_183DAC87DBC9ADC5* Method_1_B64782115EFE4597(::System::UInt32 a1)
	{
		return ((::Class_1_183DAC87DBC9ADC5*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_183DAC87DBC9ADC5_METHOD_1_B64782115EFE4597_OFFSET))(a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_183DAC87DBC9ADC5_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_183DAC87DBC9ADC5_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_183DAC87DBC9ADC5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_183DAC87DBC9ADC5_METHOD_1_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Void Method_1_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_183DAC87DBC9ADC5_METHOD_1_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::String* get_EffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_183DAC87DBC9ADC5_GET_EFFECTPATH_OFFSET))(this);
	}

	::System::String* get_EffectPathEnemy()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_183DAC87DBC9ADC5_GET_EFFECTPATHENEMY_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatAnchorType get_AnchorType()
	{
		return ((::RPG::GameCore::DiceCombatAnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_183DAC87DBC9ADC5_GET_ANCHORTYPE_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_EffectRoot()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_183DAC87DBC9ADC5_GET_EFFECTROOT_OFFSET))(this);
	}

	::System::Void set_EffectRoot(::UnityEngine::GameObject* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_183DAC87DBC9ADC5_SET_EFFECTROOT_OFFSET))(this, value);
	}

	::System::String* get_FadeInAnimation()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_183DAC87DBC9ADC5_GET_FADEINANIMATION_OFFSET))(this);
	}

	::System::String* get_FadeOutAnimation()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_183DAC87DBC9ADC5_GET_FADEOUTANIMATION_OFFSET))(this);
	}
};
