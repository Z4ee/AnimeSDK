#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingGameView.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierView_AnimationCurveEntry.h"
#include "unitysdk/RPG/GameCore/ChenLingSoldierScale.h"
#include "unitysdk/UnityEngine/Vector3.h"

class SoftBodyIK;
namespace RPG::Client::LittleGame::ChenLing { class ChenLingRagdollPart; }
namespace RPG::GameCore { class ChenLingDeathEffectConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_APPLYPERFORMANCEFORCE_OFFSET UNITYSDK_OFFSET(0xD4B9C30)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_GETANIMATIONCURVEBYNAME_OFFSET UNITYSDK_OFFSET(0xD4B9D90)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_GET_AIRMOTIONCURVE_OFFSET UNITYSDK_OFFSET(0xD4B9D70)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_GET_DEATHFLYCURVE_OFFSET UNITYSDK_OFFSET(0xD4B9D80)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_2C95AFAD0256302F_1_OFFSET UNITYSDK_OFFSET(0xD4B9AF0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xD4B97C0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_2D1F8ED8124956FF_OFFSET UNITYSDK_OFFSET(0xD4BA250)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_2D52D50D51494A66_OFFSET UNITYSDK_OFFSET(0xD4BA840)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_4A86D80F89BDABD3_OFFSET UNITYSDK_OFFSET(0xD4BA980)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xD4B9AA0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_5D85010F084295E6_OFFSET UNITYSDK_OFFSET(0xD4BAE10)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0xD4BB7E0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0xD4B9830)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_8F59470D29B43916_OFFSET UNITYSDK_OFFSET(0xD4BA610)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD4BB8F0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0xD4BA4D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_F1BFC2CD2ECE3431_OFFSET UNITYSDK_OFFSET(0xD4BB6B0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_SETCHENLINGAUDIOGROUP_OFFSET UNITYSDK_OFFSET(0xD4BB980)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_START_OFFSET UNITYSDK_OFFSET(0xD4B9B60)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_TRIGGERDEATHEFFECT_OFFSET UNITYSDK_OFFSET(0xD4B9EA0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xD4BBAE0)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingSoldierView_TypeDefinitionIndex = 77506;

	class ChenLingSoldierView : public ::RPG::Client::LittleGame::ChenLing::ChenLingGameView
	{
	public:
		::SoftBodyIK* DIKBMPOEIFK; // 0x48
		::UnityEngine::Transform* _WeaponAttachPoint; // 0x50
		::UnityEngine::Transform* _NodeShadowPlugin; // 0x58
		::UnityEngine::AnimationCurve* _AirMotionCurve; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::ChenLingSoldierView_AnimationCurveEntry>* _AnimationCurves; // 0x68
		::UnityEngine::AnimationCurve* _DeathFlyCurve; // 0x70
		::System::Single DeathXMaxDistance; // 0x78
		::System::Single DeathXMinDistance; // 0x7C
		::System::Single DeathYMaxHeight; // 0x80
		::System::Single DeathYMinHeight; // 0x84
		::System::Boolean AEJONBIOOPO; // 0x88
		::System::Action* CIFOILLJFNF; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::ChenLingRagdollPart*>* INALEIOJCPJ; // 0x98
		::System::Int32 AAFFNEGHJDG; // 0xA0
		::RPG::GameCore::ChenLingDeathEffectConfig* GAKDCABGLDP; // 0xA8
		::UnityEngine::AnimationClip* AttackAnimation; // 0xB0
		::UnityEngine::GameObject* ArtGO; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Method_7_2C95AFAD0256302F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_2C95AFAD0256302F_OFFSET))(this);
		}

		::System::Void Method_7_2C95AFAD0256302F_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_2C95AFAD0256302F_1_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_START_OFFSET))(this);
		}

		::System::Void ApplyPerformanceForce(::UnityEngine::Vector3 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_APPLYPERFORMANCEFORCE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AnimationCurve* get_AirMotionCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_GET_AIRMOTIONCURVE_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_DeathFlyCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_GET_DEATHFLYCURVE_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* GetAnimationCurveByName(::System::String* a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_GETANIMATIONCURVEBYNAME_OFFSET))(this, a1);
		}

		::System::Void TriggerDeathEffect(::UnityEngine::Vector3 a1, ::System::Action* a2, ::RPG::GameCore::ChenLingSoldierScale a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*, ::RPG::GameCore::ChenLingSoldierScale, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_TRIGGERDEATHEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_7_4A86D80F89BDABD3(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_4A86D80F89BDABD3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_7_2D52D50D51494A66(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_2D52D50D51494A66_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_7_F1BFC2CD2ECE3431(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_F1BFC2CD2ECE3431_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_7_5D85010F084295E6(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_5D85010F084295E6_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 Method_7_2D1F8ED8124956FF(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_2D1F8ED8124956FF_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_7_A1C464B05BB7A5C1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_A1C464B05BB7A5C1_OFFSET))(this);
		}

		::System::Void Method_7_763B70E1B527E566()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_763B70E1B527E566_OFFSET))(this);
		}

		::System::Void Method_7_60451B2DE9D371C9(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_60451B2DE9D371C9_OFFSET))(this, a1);
		}

		::System::Void Method_7_56CE4AFC5339F746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_56CE4AFC5339F746_OFFSET))(this);
		}

		::System::Void Method_7_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_9681042564541CD6_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingDeathEffectConfig* Method_7_8F59470D29B43916()
		{
			return ((::RPG::GameCore::ChenLingDeathEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_METHOD_7_8F59470D29B43916_OFFSET))(this);
		}

		::System::Void SetChenLingAudioGroup(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_SETCHENLINGAUDIOGROUP_OFFSET))(this, a1);
		}
	};
}
