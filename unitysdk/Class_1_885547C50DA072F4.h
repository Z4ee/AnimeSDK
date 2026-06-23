#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class AnimatorRandomIntConfig; }
namespace MoleMole { class UIAvatarCameraAnimationSetting; }
namespace MoleMole { class UIAvatarCameraSetting; }
namespace MoleMole { class UICameraAnimator; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_885547C50DA072F4_METHOD_1_0717423DDEA0E9A4_OFFSET UNITYSDK_OFFSET(0x108199E0)
#define CLASS_1_885547C50DA072F4_METHOD_1_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x10818580)
#define CLASS_1_885547C50DA072F4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10819540)
#define CLASS_1_885547C50DA072F4_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10818410)
#define CLASS_1_885547C50DA072F4_METHOD_1_366BD3C692610EBF_OFFSET UNITYSDK_OFFSET(0x10819D50)
#define CLASS_1_885547C50DA072F4_METHOD_1_3B5D4C1326D5130E_OFFSET UNITYSDK_OFFSET(0x108190C0)
#define CLASS_1_885547C50DA072F4_METHOD_1_5C553FF0EAD3715A_OFFSET UNITYSDK_OFFSET(0x10818B50)
#define CLASS_1_885547C50DA072F4_METHOD_1_7AB9DD428E230713_OFFSET UNITYSDK_OFFSET(0x10819680)
#define CLASS_1_885547C50DA072F4_METHOD_1_7D25AEBB6993B499_OFFSET UNITYSDK_OFFSET(0x10819F80)
#define CLASS_1_885547C50DA072F4_METHOD_1_899724505166BB52_OFFSET UNITYSDK_OFFSET(0x10818DD0)
#define CLASS_1_885547C50DA072F4_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10817700)
#define CLASS_1_885547C50DA072F4_METHOD_1_A5DE3ADF3D0115AD_OFFSET UNITYSDK_OFFSET(0x10817920)
#define CLASS_1_885547C50DA072F4_METHOD_1_BCB087DFB7399B96_OFFSET UNITYSDK_OFFSET(0x108177E0)
#define CLASS_1_885547C50DA072F4_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x108178B0)
#define CLASS_1_885547C50DA072F4_METHOD_1_DFECC21D09CAD603_OFFSET UNITYSDK_OFFSET(0x108179C0)
#define CLASS_1_885547C50DA072F4_METHOD_1_EFFC7693432621C2_OFFSET UNITYSDK_OFFSET(0x10817270)
#define CLASS_1_885547C50DA072F4_METHOD_1_F7477A09881FB5EA_OFFSET UNITYSDK_OFFSET(0x10817630)
#define CLASS_1_885547C50DA072F4__CTOR_OFFSET UNITYSDK_OFFSET(0x10817200)

inline static constexpr unsigned int Class_1_885547C50DA072F4_TypeDefinitionIndex = 57309;

class Class_1_885547C50DA072F4 : public ::System::Object
{
public:
	::MoleMole::UICameraAnimator* Field_1_20; // 0x10
	::MoleMole::UIAvatarCameraSetting* Field_1_15; // 0x18
	::MoleMole::AnimatorRandomIntConfig* Field_1_18; // 0x20
	::UnityEngine::Camera* Field_1_13; // 0x28
	::UnityEngine::Transform* Field_1_1; // 0x30
	::MoleMole::UIAvatarCameraAnimationSetting* Field_1_16; // 0x38
	::UnityEngine::Transform* Field_1_0; // 0x40
	::System::Single Field_1_12; // 0x48
	::UnityEngine::Vector3 Field_1_6; // 0x4C
	::UnityEngine::Vector3 Field_1_10; // 0x58
	::UnityEngine::Vector3 Field_1_2; // 0x64
	::System::Boolean Field_1_5; // 0x70
	::System::Boolean Field_1_14; // 0x71
	::System::Boolean Field_1_3; // 0x72
	::System::Single Field_1_17; // 0x74
	::UnityEngine::Quaternion Field_1_11; // 0x78
	::System::Int32 Field_1_19; // 0x88
	::System::Single Field_1_9; // 0x8C
	::UnityEngine::Vector3 Field_1_4; // 0x90
	::UnityEngine::Vector3 Field_1_7; // 0x9C
	::UnityEngine::Quaternion Field_1_8; // 0xA8

	::System::Void _ctor(::UnityEngine::Camera* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Quaternion Method_1_EFFC7693432621C2(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_EFFC7693432621C2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F7477A09881FB5EA(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_F7477A09881FB5EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCB087DFB7399B96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_BCB087DFB7399B96_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_A5DE3ADF3D0115AD()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_A5DE3ADF3D0115AD_OFFSET))(this);
	}

	::System::Void Method_1_DFECC21D09CAD603(::UnityEngine::Vector3 a1, ::MoleMole::UIAvatarCameraSetting* a2, ::MoleMole::UIAvatarCameraAnimationSetting* a3, ::MoleMole::AnimatorRandomIntConfig* a4, ::System::Int32 a5, ::UnityEngine::Vector3 a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::UIAvatarCameraSetting*, ::MoleMole::UIAvatarCameraAnimationSetting*, ::MoleMole::AnimatorRandomIntConfig*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_DFECC21D09CAD603_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_5C553FF0EAD3715A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_5C553FF0EAD3715A_OFFSET))(this);
	}

	::System::Void Method_1_899724505166BB52(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_899724505166BB52_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3B5D4C1326D5130E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_3B5D4C1326D5130E_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Quaternion Method_1_7AB9DD428E230713()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_7AB9DD428E230713_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_0717423DDEA0E9A4(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_0717423DDEA0E9A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_366BD3C692610EBF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_366BD3C692610EBF_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D25AEBB6993B499(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_7D25AEBB6993B499_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_885547C50DA072F4_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
