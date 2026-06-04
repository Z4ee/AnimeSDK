#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AnimTriggerType.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/Struct_2_FBA4730A60751401.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Anim;
class GroupTransformAnimationData;
class RootPoint;
class WaterInteractor;
namespace RPG::Client { class MonoEffect; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MARBLETRANSFORMANIMATIONHANDLE_ANIMRESET_OFFSET UNITYSDK_OFFSET(0xA84A2D0)
#define MARBLETRANSFORMANIMATIONHANDLE_ANIMSTOPPLAYING_OFFSET UNITYSDK_OFFSET(0xA848030)
#define MARBLETRANSFORMANIMATIONHANDLE_BEGINTESTANIM_OFFSET UNITYSDK_OFFSET(0xA849240)
#define MARBLETRANSFORMANIMATIONHANDLE_BREAKACITVEANIMLOOP_OFFSET UNITYSDK_OFFSET(0xA849970)
#define MARBLETRANSFORMANIMATIONHANDLE_CHECKANIMPLAYING_1_OFFSET UNITYSDK_OFFSET(0xA84A500)
#define MARBLETRANSFORMANIMATIONHANDLE_CHECKANIMPLAYING_OFFSET UNITYSDK_OFFSET(0xA84A4C0)
#define MARBLETRANSFORMANIMATIONHANDLE_FINDPOINT_OFFSET UNITYSDK_OFFSET(0xA8490A0)
#define MARBLETRANSFORMANIMATIONHANDLE_INIT_OFFSET UNITYSDK_OFFSET(0xA847710)
#define MARBLETRANSFORMANIMATIONHANDLE_LOOPBREAKTEST_OFFSET UNITYSDK_OFFSET(0xA849920)
#define MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_142C1F65818B83FC_OFFSET UNITYSDK_OFFSET(0xA849AD0)
#define MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xA8489E0)
#define MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_773796562D326B0E_OFFSET UNITYSDK_OFFSET(0xA848E20)
#define MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_906BACE05D971306_OFFSET UNITYSDK_OFFSET(0xA8492C0)
#define MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_BA5CD3C0B7AB5DDD_OFFSET UNITYSDK_OFFSET(0xA848080)
#define MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_C0AC14CF94069BDD_OFFSET UNITYSDK_OFFSET(0xA84A560)
#define MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_C2D6D64ED269E595_OFFSET UNITYSDK_OFFSET(0xA849D00)
#define MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_DD09D1BAD4E36891_OFFSET UNITYSDK_OFFSET(0xA84A760)
#define MARBLETRANSFORMANIMATIONHANDLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA84ADE0)
#define MARBLETRANSFORMANIMATIONHANDLE_START_OFFSET UNITYSDK_OFFSET(0xA8476C0)
#define MARBLETRANSFORMANIMATIONHANDLE_TRIGGERTRANSFORMANIMATION_1_OFFSET UNITYSDK_OFFSET(0xA849C70)
#define MARBLETRANSFORMANIMATIONHANDLE_TRIGGERTRANSFORMANIMATION_2_OFFSET UNITYSDK_OFFSET(0xA84AC50)
#define MARBLETRANSFORMANIMATIONHANDLE_TRIGGERTRANSFORMANIMATION_OFFSET UNITYSDK_OFFSET(0xA849C00)
#define MARBLETRANSFORMANIMATIONHANDLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA8479B0)
#define MARBLETRANSFORMANIMATIONHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA84B090)

inline static constexpr unsigned int MarbleTransformAnimationHandle_TypeDefinitionIndex = 44479;

class MarbleTransformAnimationHandle : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::RootPoint*>* Points; // 0x18
	::System::Collections::Generic::List_1<::GroupTransformAnimationData*>* Animations; // 0x20
	::GroupTransformAnimationData* activeData; // 0x28
	::System::Boolean Field_5_3; // 0x30
	::System::Boolean Field_5_4; // 0x31
	::System::Boolean Field_5_5; // 0x32
	::System::Single Field_5_6; // 0x34
	::System::Single Field_5_7; // 0x38
	::System::Action* Field_5_8; // 0x40
	::System::Single Field_5_9; // 0x48
	::System::Single Field_5_10; // 0x4C
	::WaterInteractor* Field_5_11; // 0x50
	::System::Boolean AnimTest; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_START_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_INIT_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_UPDATE_OFFSET))(this);
	}

	::System::Void Method_5_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_5_BA5CD3C0B7AB5DDD(::Struct_2_FBA4730A60751401& a1, ::Anim* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FBA4730A60751401&, ::Anim*, ::System::Single))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_BA5CD3C0B7AB5DDD_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Transform* FindPoint(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_FINDPOINT_OFFSET))(this, a1);
	}

	::System::Void BeginTestAnim()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_BEGINTESTANIM_OFFSET))(this);
	}

	::System::Void LoopBreakTest()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_LOOPBREAKTEST_OFFSET))(this);
	}

	::System::Void BreakAcitveAnimLoop(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_BREAKACITVEANIMLOOP_OFFSET))(this, a1);
	}

	::GroupTransformAnimationData* Method_5_142C1F65818B83FC(::AnimTriggerType a1)
	{
		return ((::GroupTransformAnimationData*(*)(::PVOID, ::AnimTriggerType))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_142C1F65818B83FC_OFFSET))(this, a1);
	}

	::System::Void TriggerTransformAnimation(::AnimTriggerType a1)
	{
		return ((::System::Void(*)(::PVOID, ::AnimTriggerType))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_TRIGGERTRANSFORMANIMATION_OFFSET))(this, a1);
	}

	::System::Void TriggerTransformAnimation_1(::AnimTriggerType a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::AnimTriggerType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_TRIGGERTRANSFORMANIMATION_1_OFFSET))(this, a1, a2);
	}

	::System::Void AnimStopPlaying()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_ANIMSTOPPLAYING_OFFSET))(this);
	}

	::System::Void AnimReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_ANIMRESET_OFFSET))(this);
	}

	::System::Boolean CheckAnimPlaying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_CHECKANIMPLAYING_OFFSET))(this);
	}

	::System::Boolean CheckAnimPlaying_1(::AnimTriggerType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AnimTriggerType))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_CHECKANIMPLAYING_1_OFFSET))(this, a1);
	}

	::System::Void Method_5_906BACE05D971306(::GroupTransformAnimationData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::GroupTransformAnimationData*))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_906BACE05D971306_OFFSET))(this, a1);
	}

	::System::Void Method_5_C2D6D64ED269E595(::GroupTransformAnimationData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::GroupTransformAnimationData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_C2D6D64ED269E595_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_DD09D1BAD4E36891(::GroupTransformAnimationData* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::GroupTransformAnimationData*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_DD09D1BAD4E36891_OFFSET))(this, a1, a2, a3);
	}

	::System::Void TriggerTransformAnimation_2(::AnimTriggerType a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::AnimTriggerType, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_TRIGGERTRANSFORMANIMATION_2_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_5_C0AC14CF94069BDD(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_C0AC14CF94069BDD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_773796562D326B0E(::System::String* a1, ::System::Nullable_1<::UnityEngine::Vector3> a2, ::System::Nullable_1<::UnityEngine::Quaternion> a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::UnityEngine::Transform* a5, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a6, ::System::String* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Vector3>, ::UnityEngine::Transform*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*, ::System::String*))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_METHOD_5_773796562D326B0E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLETRANSFORMANIMATIONHANDLE_ONDESTROY_OFFSET))(this);
	}
};
