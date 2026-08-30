#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MatchThreeFighterState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class CharacterAtlasFace; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::Client::LittleGame { class MatchThreeFighter_Class_1_3ABCC41A05D06339_3; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B1CD950)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x1B1CD550)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1B1CD220)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x1B1CD170)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_653EEB7EF259681D_OFFSET UNITYSDK_OFFSET(0x1B1CDCF0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x1B1CD6A0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1B1CD0F0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1B1CD9A0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1B1CD730)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_RESET_OFFSET UNITYSDK_OFFSET(0x1B1CD370)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETBODYMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1CCCD0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETEMO_OFFSET UNITYSDK_OFFSET(0x1B1CCC50)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETFACEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1CCD80)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETSCALE_OFFSET UNITYSDK_OFFSET(0x1B1CCE30)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_STARTBATTLESHOW_OFFSET UNITYSDK_OFFSET(0x1B1CD280)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_STARTLOOKAT_OFFSET UNITYSDK_OFFSET(0x1B1CD320)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B1CD5E0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1CDE50)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1CDDD0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MatchThreeFighter_TypeDefinitionIndex = 76076;

	class MatchThreeFighter : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_GAOPHHCMAEE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeFighter_TypeDefinitionIndex)->GetStaticField(0x14540);
		}
		// static const ::System::String* ADCPKADKEDM; // 0x0
		::RPG::Client::LittleGame::MatchThreeFighterState State; // 0x18
		::System::Single MoveToBornAlpha; // 0x1C
		::System::Single FaceToBornAlpha; // 0x20
		::System::Single TargetToNormalScaleAlpha; // 0x24
		::RPG::Client::CharacterAtlasFace* CharacterAtlasFace; // 0x28
		::UnityEngine::Renderer* FaceRenderer; // 0x30
		::UnityEngine::Renderer* BodyRenderer; // 0x38
		::UnityEngine::Transform* ArtMotion; // 0x40
		::UnityEngine::Transform* DeployPoint; // 0x48
		::UnityEngine::AnimationCurve* ScaleChangeCurve; // 0x50
		::UnityEngine::Animation* BlowUpAnimation; // 0x58
		::UnityEngine::Animator* ArtAnimator; // 0x60
		::RPG::Client::LookAtIK* LookAtIK; // 0x68
		::System::Single TargetScale; // 0x70
		::UnityEngine::Transform* Glow; // 0x78
		::System::Int32 IOHCHCCBMDH; // 0x80
		::System::Int32 PHIBKEPIHGC; // 0x84
		::System::Int32 KIJJJDNMFIA; // 0x88
		::System::Int32 DOFLPLKDHJJ; // 0x8C
		::System::Boolean MBCFNFILJBH; // 0x90
		::UnityEngine::Transform* NHNJKCPPLBA; // 0x98
		::RPG::Client::LittleGame::MatchThreeFighter_Class_1_3ABCC41A05D06339_3* MAKGPNKGLFH; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER__CCTOR_OFFSET))();
		}

		::System::Void SetEmo(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETEMO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetBodyMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETBODYMATERIAL_OFFSET))(this, a1);
		}

		::System::Void SetFaceMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETFACEMATERIAL_OFFSET))(this, a1);
		}

		::System::Void SetScale(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETSCALE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartBattleShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_STARTBATTLESHOW_OFFSET))(this);
		}

		::System::Void StartLookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_STARTLOOKAT_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_RESET_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_7033EFB970A18315()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_7033EFB970A18315_OFFSET))(this);
		}

		::System::Void Method_5_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_5_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Single Method_5_3422201382CE593B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_3422201382CE593B_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_102A1038C38883F3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_102A1038C38883F3_OFFSET))(this);
		}

		::System::Single Method_5_653EEB7EF259681D()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_METHOD_5_653EEB7EF259681D_OFFSET))(this);
		}
	};
}
