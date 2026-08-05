#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Battle/NPCSinglePlayableAnimLayer.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutput.h"

class Class_1_446AB32268DB4603;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AvatarMask; }

#define CLASS_3_EE9AE7CCEB67E962_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17C2B3F0)
#define CLASS_3_EE9AE7CCEB67E962_METHOD_3_1866C34E68E9B138_OFFSET UNITYSDK_OFFSET(0x17C2D580)
#define CLASS_3_EE9AE7CCEB67E962_METHOD_3_1FF1B9D7D269D25F_OFFSET UNITYSDK_OFFSET(0x17C2BFA0)
#define CLASS_3_EE9AE7CCEB67E962_METHOD_3_2996A480CB9DCF8C_OFFSET UNITYSDK_OFFSET(0x17C2C630)
#define CLASS_3_EE9AE7CCEB67E962_METHOD_3_2F24BCAEF99607CF_OFFSET UNITYSDK_OFFSET(0x17C2D0E0)
#define CLASS_3_EE9AE7CCEB67E962_METHOD_3_3BDE2C9BF55E53AD_OFFSET UNITYSDK_OFFSET(0x17C2CE20)
#define CLASS_3_EE9AE7CCEB67E962_METHOD_3_62053EF65C1E2E75_OFFSET UNITYSDK_OFFSET(0x17C2BCC0)
#define CLASS_3_EE9AE7CCEB67E962_METHOD_3_7854AA0B7A17DA18_OFFSET UNITYSDK_OFFSET(0x17C2B650)
#define CLASS_3_EE9AE7CCEB67E962_METHOD_3_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x17C2C1F0)
#define CLASS_3_EE9AE7CCEB67E962_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17C2CD90)
#define CLASS_3_EE9AE7CCEB67E962_METHOD_3_B1C710D901F6F7E9_OFFSET UNITYSDK_OFFSET(0x17C2CEB0)
#define CLASS_3_EE9AE7CCEB67E962_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x17C2B550)
#define CLASS_3_EE9AE7CCEB67E962_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17C2B0D0)
#define CLASS_3_EE9AE7CCEB67E962__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C2B440)
#define CLASS_3_EE9AE7CCEB67E962__CTOR_OFFSET UNITYSDK_OFFSET(0x17C2B4C0)

inline static constexpr unsigned int Class_3_EE9AE7CCEB67E962_TypeDefinitionIndex = 60756;

class Class_3_EE9AE7CCEB67E962 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_0 = 0x1; // 0x0
	// static const ::System::Int32 Field_3_7 = 0x0; // 0x0
	// static const ::System::Int32 Field_3_6 = 0x1; // 0x0
	// static const ::MoleMole::Battle::NPCSinglePlayableAnimLayer Field_3_5; // 0x0
	// static const ::System::Int32 Field_3_16 = 0x59; // 0x0
	::System::Collections::Generic::List_1<::Class_1_446AB32268DB4603*>* Field_3_13; // 0x48
	::UnityEngine::Animator* Field_3_18; // 0x50
	::UnityEngine::Animations::AnimationLayerMixerPlayable Field_3_4; // 0x58
	::UnityEngine::Playables::PlayableOutput Field_3_11; // 0x68
	::System::Int32 Field_3_19; // 0x78
	::System::Boolean Field_3_9; // 0x7C
	::System::Boolean Field_3_17; // 0x7D
	::System::Boolean Field_3_12; // 0x7E
	::System::Int32 Field_3_10; // 0x80
	::System::Single Field_3_8; // 0x84
	::System::Single Field_3_15; // 0x88
	::System::Single Field_3_14; // 0x8C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_EE9AE7CCEB67E962__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE9AE7CCEB67E962__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE9AE7CCEB67E962_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE9AE7CCEB67E962_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_EE9AE7CCEB67E962* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_EE9AE7CCEB67E962*(*)())((::PBYTE)hIl2Cpp + CLASS_3_EE9AE7CCEB67E962_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}

	::System::Void Method_3_7854AA0B7A17DA18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE9AE7CCEB67E962_METHOD_3_7854AA0B7A17DA18_OFFSET))(this, a1);
	}

	::System::Void Method_3_1FF1B9D7D269D25F(::Foundation::AssetPath a1, ::MoleMole::Battle::NPCSinglePlayableAnimLayer a2, ::UnityEngine::AvatarMask* a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Battle::NPCSinglePlayableAnimLayer, ::UnityEngine::AvatarMask*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EE9AE7CCEB67E962_METHOD_3_1FF1B9D7D269D25F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE9AE7CCEB67E962_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_2996A480CB9DCF8C(::UnityEngine::AnimationClip* a1, ::Foundation::AssetRequestHandle a2, ::MoleMole::Battle::NPCSinglePlayableAnimLayer a3, ::UnityEngine::AvatarMask* a4, ::System::Single a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::Foundation::AssetRequestHandle, ::MoleMole::Battle::NPCSinglePlayableAnimLayer, ::UnityEngine::AvatarMask*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EE9AE7CCEB67E962_METHOD_3_2996A480CB9DCF8C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_3BDE2C9BF55E53AD(::Foundation::AssetPath a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE9AE7CCEB67E962_METHOD_3_3BDE2C9BF55E53AD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B1C710D901F6F7E9(::UnityEngine::AnimationClip* a1, ::MoleMole::Battle::NPCSinglePlayableAnimLayer a2, ::UnityEngine::AvatarMask* a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::MoleMole::Battle::NPCSinglePlayableAnimLayer, ::UnityEngine::AvatarMask*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EE9AE7CCEB67E962_METHOD_3_B1C710D901F6F7E9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_2F24BCAEF99607CF(::MoleMole::Battle::NPCSinglePlayableAnimLayer a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::NPCSinglePlayableAnimLayer, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE9AE7CCEB67E962_METHOD_3_2F24BCAEF99607CF_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Animator* Method_3_62053EF65C1E2E75()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE9AE7CCEB67E962_METHOD_3_62053EF65C1E2E75_OFFSET))(this);
	}

	::System::Void Method_3_1866C34E68E9B138(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE9AE7CCEB67E962_METHOD_3_1866C34E68E9B138_OFFSET))(this, a1);
	}

	::System::Void Method_3_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE9AE7CCEB67E962_METHOD_3_805C56F44231AEF9_OFFSET))(this);
	}
};
