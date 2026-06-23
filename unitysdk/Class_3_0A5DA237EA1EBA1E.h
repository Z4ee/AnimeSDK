#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_655E7DDEB09A6D25.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutput.h"

class Class_1_18F6C97C1D2D9017;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AvatarMask; }

#define CLASS_3_0A5DA237EA1EBA1E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16324A70)
#define CLASS_3_0A5DA237EA1EBA1E_METHOD_3_1866C34E68E9B138_OFFSET UNITYSDK_OFFSET(0x16326C20)
#define CLASS_3_0A5DA237EA1EBA1E_METHOD_3_3BDE2C9BF55E53AD_OFFSET UNITYSDK_OFFSET(0x16326000)
#define CLASS_3_0A5DA237EA1EBA1E_METHOD_3_62053EF65C1E2E75_OFFSET UNITYSDK_OFFSET(0x16325330)
#define CLASS_3_0A5DA237EA1EBA1E_METHOD_3_7854AA0B7A17DA18_OFFSET UNITYSDK_OFFSET(0x163262E0)
#define CLASS_3_0A5DA237EA1EBA1E_METHOD_3_7B3B49CFC1AEF15E_OFFSET UNITYSDK_OFFSET(0x16324BD0)
#define CLASS_3_0A5DA237EA1EBA1E_METHOD_3_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x16325AB0)
#define CLASS_3_0A5DA237EA1EBA1E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16326B90)
#define CLASS_3_0A5DA237EA1EBA1E_METHOD_3_A6CFB95D40EAF639_OFFSET UNITYSDK_OFFSET(0x16325610)
#define CLASS_3_0A5DA237EA1EBA1E_METHOD_3_C0FA88B18BE74E15_OFFSET UNITYSDK_OFFSET(0x16326090)
#define CLASS_3_0A5DA237EA1EBA1E_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x16325F00)
#define CLASS_3_0A5DA237EA1EBA1E_METHOD_3_F2594079E12BE803_OFFSET UNITYSDK_OFFSET(0x16326960)
#define CLASS_3_0A5DA237EA1EBA1E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16324750)
#define CLASS_3_0A5DA237EA1EBA1E__CCTOR_OFFSET UNITYSDK_OFFSET(0x16324AC0)
#define CLASS_3_0A5DA237EA1EBA1E__CTOR_OFFSET UNITYSDK_OFFSET(0x16324B40)

inline static constexpr unsigned int Class_3_0A5DA237EA1EBA1E_TypeDefinitionIndex = 81037;

class Class_3_0A5DA237EA1EBA1E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_0 = 0x1; // 0x0
	// static const ::System::Int32 Field_3_1 = 0x0; // 0x0
	// static const ::System::Int32 Field_3_2 = 0x1; // 0x0
	// static const ::Enum_3_655E7DDEB09A6D25 Field_3_3; // 0x0
	// static const ::System::Int32 Field_3_16 = 0x58; // 0x0
	::UnityEngine::Animator* Field_3_14; // 0x48
	::System::Collections::Generic::List_1<::Class_1_18F6C97C1D2D9017*>* Field_3_11; // 0x50
	::UnityEngine::Animations::AnimationLayerMixerPlayable Field_3_4; // 0x58
	::System::Single Field_3_8; // 0x68
	::System::Boolean Field_3_7; // 0x6C
	::System::Boolean Field_3_12; // 0x6D
	::System::Boolean Field_3_15; // 0x6E
	::System::Int32 Field_3_6; // 0x70
	::System::Int32 Field_3_13; // 0x74
	::UnityEngine::Playables::PlayableOutput Field_3_5; // 0x78
	::System::Single Field_3_9; // 0x88
	::System::Single Field_3_10; // 0x8C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0A5DA237EA1EBA1E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A5DA237EA1EBA1E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A5DA237EA1EBA1E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A5DA237EA1EBA1E_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_7B3B49CFC1AEF15E(::UnityEngine::AnimationClip* a1, ::Foundation::AssetRequestHandle a2, ::Enum_3_655E7DDEB09A6D25 a3, ::UnityEngine::AvatarMask* a4, ::System::Single a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::Foundation::AssetRequestHandle, ::Enum_3_655E7DDEB09A6D25, ::UnityEngine::AvatarMask*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_0A5DA237EA1EBA1E_METHOD_3_7B3B49CFC1AEF15E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_A6CFB95D40EAF639(::Enum_3_655E7DDEB09A6D25 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_655E7DDEB09A6D25, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0A5DA237EA1EBA1E_METHOD_3_A6CFB95D40EAF639_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Animator* Method_3_62053EF65C1E2E75()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A5DA237EA1EBA1E_METHOD_3_62053EF65C1E2E75_OFFSET))(this);
	}

	static ::Class_3_0A5DA237EA1EBA1E* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_0A5DA237EA1EBA1E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_0A5DA237EA1EBA1E_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}

	::System::Void Method_3_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A5DA237EA1EBA1E_METHOD_3_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_3_3BDE2C9BF55E53AD(::Foundation::AssetPath a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0A5DA237EA1EBA1E_METHOD_3_3BDE2C9BF55E53AD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7854AA0B7A17DA18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0A5DA237EA1EBA1E_METHOD_3_7854AA0B7A17DA18_OFFSET))(this, a1);
	}

	::System::Void Method_3_F2594079E12BE803(::UnityEngine::AnimationClip* a1, ::Enum_3_655E7DDEB09A6D25 a2, ::UnityEngine::AvatarMask* a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::Enum_3_655E7DDEB09A6D25, ::UnityEngine::AvatarMask*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_0A5DA237EA1EBA1E_METHOD_3_F2594079E12BE803_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A5DA237EA1EBA1E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_1866C34E68E9B138(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0A5DA237EA1EBA1E_METHOD_3_1866C34E68E9B138_OFFSET))(this, a1);
	}

	::System::Void Method_3_C0FA88B18BE74E15(::Foundation::AssetPath a1, ::Enum_3_655E7DDEB09A6D25 a2, ::UnityEngine::AvatarMask* a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::Enum_3_655E7DDEB09A6D25, ::UnityEngine::AvatarMask*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_0A5DA237EA1EBA1E_METHOD_3_C0FA88B18BE74E15_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
