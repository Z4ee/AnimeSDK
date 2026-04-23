#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class FABRIK; }
namespace RPG::Client { class LookAtIK; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define BABYHIPPLENCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9B8FB20)
#define BABYHIPPLENCONTROLLER_ENABLENECKIK_OFFSET UNITYSDK_OFFSET(0x9B8FAD0)
#define BABYHIPPLENCONTROLLER_GETHEADTRANS_OFFSET UNITYSDK_OFFSET(0x9B8F5C0)
#define BABYHIPPLENCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9B8FE40)
#define BABYHIPPLENCONTROLLER_METHOD_5_0BA114B592B3A582_OFFSET UNITYSDK_OFFSET(0x9B90AF0)
#define BABYHIPPLENCONTROLLER_METHOD_5_491027A35182E1D6_OFFSET UNITYSDK_OFFSET(0x9B8FA10)
#define BABYHIPPLENCONTROLLER_METHOD_5_627C7524E98F4AC5_1_OFFSET UNITYSDK_OFFSET(0x9B8F970)
#define BABYHIPPLENCONTROLLER_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x9B8F8F0)
#define BABYHIPPLENCONTROLLER_METHOD_5_6A6A96FBD090C99D_OFFSET UNITYSDK_OFFSET(0x9B8FF70)
#define BABYHIPPLENCONTROLLER_METHOD_5_DE4BD3007909A465_OFFSET UNITYSDK_OFFSET(0x9B91C40)
#define BABYHIPPLENCONTROLLER_METHOD_5_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x9B91880)
#define BABYHIPPLENCONTROLLER_METHOD_5_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x9B8FF00)
#define BABYHIPPLENCONTROLLER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x9B91D10)
#define BABYHIPPLENCONTROLLER_PLAYANIMSEQ_OFFSET UNITYSDK_OFFSET(0x9B8F720)
#define BABYHIPPLENCONTROLLER_RISEHEADFORSECONDS_OFFSET UNITYSDK_OFFSET(0x9B8F680)
#define BABYHIPPLENCONTROLLER_SETATTENTIONTRANS_OFFSET UNITYSDK_OFFSET(0x9B8F600)
#define BABYHIPPLENCONTROLLER_STARTPETTING_OFFSET UNITYSDK_OFFSET(0x9B91E00)
#define BABYHIPPLENCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x9B8FC10)
#define BABYHIPPLENCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9B8FD70)
#define BABYHIPPLENCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9B92220)

inline static constexpr unsigned int BabyHipplenController_TypeDefinitionIndex = 43986;

class BabyHipplenController : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* AttentionTrans; // 0x18
	::UnityEngine::Transform* MoveTrans; // 0x20
	::UnityEngine::Transform* LookAtTrans; // 0x28
	::UnityEngine::Transform* LookAtTargetTransform; // 0x30
	::UnityEngine::Transform* NeckIKTargetTrans; // 0x38
	::UnityEngine::Transform* NeckIKTargetTransDefault; // 0x40
	::UnityEngine::Transform* RiseHeadTrans; // 0x48
	::UnityEngine::Transform* ArtTrans; // 0x50
	::UnityEngine::Transform* HeadTrans; // 0x58
	::UnityEngine::Transform* NeckRootTrans; // 0x60
	::RPG::Client::FABRIK* NeckIK; // 0x68
	::RPG::Client::LookAtIK* LookAtIK; // 0x70
	::System::Single lookAtLerpSpd; // 0x78
	::System::Single lookAtPointDist; // 0x7C
	::System::Boolean NeckIKEnabled; // 0x80
	::System::Single neckAngleRestraint; // 0x84
	::UnityEngine::Vector2 neckDeltaHeightRangeSmall; // 0x88
	::UnityEngine::Vector2 neckDeltaHeightRangeBig; // 0x90
	::System::Single neckIKLerpSpd; // 0x98
	::System::Single minNeckDist; // 0x9C
	::System::Single maxNeckDist; // 0xA0
	::System::Boolean isMoveEnabled; // 0xA4
	::System::Boolean isRun; // 0xA5
	::System::Single moveSpdMax; // 0xA8
	::System::Single runSpdMult; // 0xAC
	::System::Single moveAcc; // 0xB0
	::System::Single steerSpdMax; // 0xB4
	::System::Single steerAcc; // 0xB8
	::UnityEngine::Transform* Field_5_28; // 0xC0
	::UnityEngine::Transform* Field_5_29; // 0xC8
	::UnityEngine::Animator* Field_5_30; // 0xD0
	::UnityEngine::Transform* Field_5_31; // 0xD8
	::System::Single Field_5_32; // 0xE0
	::UnityEngine::Vector2 Field_5_33; // 0xE4
	::System::Single Field_5_34; // 0xEC
	::System::Single Field_5_35; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* GetHeadTrans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_GETHEADTRANS_OFFSET))(this);
	}

	::System::Void SetAttentionTrans(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_SETATTENTIONTRANS_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IEnumerator* RiseHeadForSeconds(::System::Single a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_RISEHEADFORSECONDS_OFFSET))(this, a1);
	}

	::System::Void PlayAnimSeq(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_PLAYANIMSEQ_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5_1()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_METHOD_5_627C7524E98F4AC5_1_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_5_491027A35182E1D6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_METHOD_5_491027A35182E1D6_OFFSET))(this, a1, a2);
	}

	::System::Void EnableNeckIK(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_ENABLENECKIK_OFFSET))(this, a1);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_AWAKE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_5_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_METHOD_5_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::System::Void Method_5_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_METHOD_5_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_5_6A6A96FBD090C99D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_METHOD_5_6A6A96FBD090C99D_OFFSET))(this);
	}

	::System::Void Method_5_0BA114B592B3A582()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_METHOD_5_0BA114B592B3A582_OFFSET))(this);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}

	::System::Single Method_5_DE4BD3007909A465(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_METHOD_5_DE4BD3007909A465_OFFSET))(this, a1, a2);
	}

	::System::Void StartPetting(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_STARTPETTING_OFFSET))(this, a1, a2);
	}
};
