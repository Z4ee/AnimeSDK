#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleChessType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_2679F01039F3FC24;
namespace RPG::Client::Prop { class DestroyRootPuzzleBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_DISABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xDC4EBD0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC4D4D0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xDC4EC60)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_INITCHESS_OFFSET UNITYSDK_OFFSET(0xDC4A9D0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_0F3706CF1F1EEA61_OFFSET UNITYSDK_OFFSET(0xDC4D710)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xDC4E980)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_218124418542E081_1_OFFSET UNITYSDK_OFFSET(0xDC4F450)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_218124418542E081_OFFSET UNITYSDK_OFFSET(0xDC4F390)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xDC4EAD0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xDC4F120)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_71912DBB0D113575_OFFSET UNITYSDK_OFFSET(0xDC4F260)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_7DD2435811BE9431_OFFSET UNITYSDK_OFFSET(0xDC4F1B0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_916EAABDA2B41A03_OFFSET UNITYSDK_OFFSET(0xDC4ED00)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0xDC4F2E0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xDC4F510)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_D16D471AE6EB753A_OFFSET UNITYSDK_OFFSET(0xDC4E790)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0xDC4DB00)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONCHESSVIEWREFRESH_OFFSET UNITYSDK_OFFSET(0xDC4E140)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONCHESSVIEWRESET_OFFSET UNITYSDK_OFFSET(0xDC4E1A0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONLASERHIT_OFFSET UNITYSDK_OFFSET(0xDC4EA40)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONSTARTSHOOTPERFORM_OFFSET UNITYSDK_OFFSET(0xDC4EB90)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_RESETCHESS_OFFSET UNITYSDK_OFFSET(0xDC4DE30)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_SETREFACTORLAUNCH_OFFSET UNITYSDK_OFFSET(0xDC4CD00)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_STARTMOVE_OFFSET UNITYSDK_OFFSET(0xDC4E1F0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_TICK_OFFSET UNITYSDK_OFFSET(0xDC4C3C0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__CCTOR_OFFSET UNITYSDK_OFFSET(0xDC4F5D0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__CTOR_OFFSET UNITYSDK_OFFSET(0xDC4F5C0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__SETREFACTORHIT_OFFSET UNITYSDK_OFFSET(0xDC4E820)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__TRIGGERROOTBROKEN_OFFSET UNITYSDK_OFFSET(0xDC4E8D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DestroyRootPuzzleChess_TypeDefinitionIndex = 78075;

	class DestroyRootPuzzleChess : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_JBANDPFHHCO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x14800);
		}
		static ::System::Int32* StaticGet_GJKILAGNCNM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x14804);
		}
		static ::System::Int32* StaticGet_InteractivePos()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x14808);
		}
		static ::System::Int32* StaticGet_DBEOKDCFLME()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x1480C);
		}
		static ::System::Int32* StaticGet_OHAOCMMMJKJ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x14810);
		}
		static ::System::Int32* StaticGet_OHPEADIPOCP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x14814);
		}
		// static const ::System::Int32 DGLGPLADDFB = 0x2D; // 0x0
		// static const ::System::String* NDCCCKDCEOK; // 0x0
		// static const ::System::String* AHMBBPHFEML; // 0x0
		// static const ::System::String* GEFOCIFADBD; // 0x0
		// static const ::System::String* FELEBNOJPCL; // 0x0
		// static const ::System::String* OGAHKJKEHHL; // 0x0
		// static const ::System::String* FGPOLMPLLPK; // 0x0
		::RPG::Client::Prop::DestroyRootPuzzleChessType ChessType; // 0x18
		::UnityEngine::Vector2Int Position; // 0x1C
		::RPG::Client::Prop::ChessDirection Direction; // 0x24
		::UnityEngine::GameObject* Center; // 0x28
		::UnityEngine::GameObject* AnimObject; // 0x30
		::UnityEngine::GameObject* AnimObject2; // 0x38
		::System::String* AnimEventPath; // 0x40
		::System::String* AnimEventPath2; // 0x48
		::UnityEngine::Transform* CenterTransform; // 0x50
		::System::Int32 ChessID; // 0x58
		::System::Int32 GFBMBPMHBID; // 0x5C
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GKKIAEMIDDP; // 0x60
		::System::Collections::Generic::List_1<::System::Single>* CMMOCANLFDC; // 0x68
		::System::Single PEBDLEECBEE; // 0x70
		::UnityEngine::Vector3 DEOPLHLBDHO; // 0x74
		::System::Int32 FLHOEGBFPJB; // 0x80
		::UnityEngine::AnimationCurve* BFOMGPHKBMA; // 0x88
		::System::Single EJGDNPHNEHG; // 0x90
		::System::Single LBDIOHKGBCM; // 0x94
		::System::Boolean MEKAIIEIDHC; // 0x98
		::UnityEngine::Vector3 LLGMDMOOJJN; // 0x9C
		::UnityEngine::Quaternion PCJHIDGGJGL; // 0xA8
		::UnityEngine::Quaternion GFGCJMPMAFO; // 0xB8
		::UnityEngine::Quaternion KNEHKCIAOMC; // 0xC8
		::System::Single BCGHNNBGMCM; // 0xD8
		::System::Single AEADLPOLBMO; // 0xDC
		::RPG::Client::Prop::ChessDirection JEPNAFFPNOH; // 0xE0
		::UnityEngine::Vector2Int ODNBPHHFFJN; // 0xE4
		::System::Boolean PPJFOGPPGPH; // 0xEC
		::UnityEngine::Animator* APPGGMLEPLN; // 0xF0
		::UnityEngine::Animator* HMFGKOPOKPE; // 0xF8
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x100
		::RPG::Client::Prop::DestroyRootPuzzleBoard* COAMCKILKPH; // 0x108
		::Class_2_2679F01039F3FC24* BCALOKFAJFH; // 0x110
		::Class_2_2679F01039F3FC24* BIFKFAKLJAA; // 0x118
		::UnityEngine::Coroutine* NBHDAIOKOMP; // 0x120
		::UnityEngine::Coroutine* IPDJIJLNDMM; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_DISPOSE_OFFSET))(this);
		}

		::System::Void InitChess(::RPG::Client::Prop::DestroyRootPuzzleBoard* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::UnityEngine::AnimationCurve* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::DestroyRootPuzzleBoard*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_INITCHESS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ResetChess(::UnityEngine::Vector2Int& a1, ::UnityEngine::Vector2Int& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int&, ::UnityEngine::Vector2Int&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_RESETCHESS_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_TICK_OFFSET))(this, a1);
		}

		::System::Void StartMove(::Il2CppArray<::UnityEngine::GameObject*>* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3, ::UnityEngine::Vector2Int a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::UnityEngine::GameObject*, ::System::Boolean, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_STARTMOVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SetRefactorHit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__SETREFACTORHIT_OFFSET))(this);
		}

		::System::Void _TriggerRootBroken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__TRIGGERROOTBROKEN_OFFSET))(this);
		}

		::System::Void OnChessViewRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONCHESSVIEWREFRESH_OFFSET))(this);
		}

		::System::Void OnChessViewReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONCHESSVIEWRESET_OFFSET))(this);
		}

		::System::Void OnLaserHit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONLASERHIT_OFFSET))(this, a1);
		}

		::System::Void OnStartShootPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONSTARTSHOOTPERFORM_OFFSET))(this);
		}

		::System::Void DisableTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_DISABLETRIGGER_OFFSET))(this);
		}

		::System::Void EnableTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ENABLETRIGGER_OFFSET))(this);
		}

		::System::Void SetRefactorLaunch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_SETREFACTORLAUNCH_OFFSET))(this, a1);
		}

		::System::Void Method_5_D737CD2779D51A4E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_D737CD2779D51A4E_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_D16D471AE6EB753A(::UnityEngine::GameObject* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_D16D471AE6EB753A_OFFSET))(this, a1);
		}

		::System::Void Method_5_916EAABDA2B41A03(::RPG::Client::Prop::ChessDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_916EAABDA2B41A03_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Void Method_5_0F3706CF1F1EEA61(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_0F3706CF1F1EEA61_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_71912DBB0D113575()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_71912DBB0D113575_OFFSET))(this);
		}

		::System::Void Method_5_7DD2435811BE9431(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::Action*>* a2, ::System::String* a3, ::System::Action* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Action*>*, ::System::String*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_7DD2435811BE9431_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_AAD21DE195D05736()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_AAD21DE195D05736_OFFSET))(this);
		}

		::System::Void Method_5_218124418542E081()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_218124418542E081_OFFSET))(this);
		}

		::System::Void Method_5_218124418542E081_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_218124418542E081_1_OFFSET))(this);
		}

		::System::Void Method_5_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_D0BD1377F2594D33_OFFSET))(this);
		}
	};
}
