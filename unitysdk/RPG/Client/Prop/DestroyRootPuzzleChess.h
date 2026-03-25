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

#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_DISABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xA07FC10)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA07E530)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xA07FD00)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_INITCHESS_OFFSET UNITYSDK_OFFSET(0xA07B8B0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA07F9C0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_218124418542E081_1_OFFSET UNITYSDK_OFFSET(0xA080560)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_218124418542E081_OFFSET UNITYSDK_OFFSET(0xA0804A0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA07FB10)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xA080220)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_7DD2435811BE9431_OFFSET UNITYSDK_OFFSET(0xA0802B0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_84BD5F32715F1DFB_OFFSET UNITYSDK_OFFSET(0xA07E730)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_916EAABDA2B41A03_OFFSET UNITYSDK_OFFSET(0xA07FE00)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0xA0803F0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xA080620)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_D16D471AE6EB753A_OFFSET UNITYSDK_OFFSET(0xA07F7D0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0xA07EAD0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_E83C51340BE6FC16_OFFSET UNITYSDK_OFFSET(0xA080370)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONCHESSVIEWREFRESH_OFFSET UNITYSDK_OFFSET(0xA07F110)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONCHESSVIEWRESET_OFFSET UNITYSDK_OFFSET(0xA07F170)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONLASERHIT_OFFSET UNITYSDK_OFFSET(0xA07FA80)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONSTARTSHOOTPERFORM_OFFSET UNITYSDK_OFFSET(0xA07FBD0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_RESETCHESS_OFFSET UNITYSDK_OFFSET(0xA07EE00)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_SETREFACTORLAUNCH_OFFSET UNITYSDK_OFFSET(0xA07DB80)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_STARTMOVE_OFFSET UNITYSDK_OFFSET(0xA07F1C0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_TICK_OFFSET UNITYSDK_OFFSET(0xA07D210)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0806E0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0806D0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__SETREFACTORHIT_OFFSET UNITYSDK_OFFSET(0xA07F860)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__TRIGGERROOTBROKEN_OFFSET UNITYSDK_OFFSET(0xA07F910)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DestroyRootPuzzleChess_TypeDefinitionIndex = 63995;

	class DestroyRootPuzzleChess : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_32()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x12C60);
		}
		static ::System::Int32* StaticGet_InteractivePos()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x12C64);
		}
		static ::System::Int32* StaticGet_Field_5_34()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x12C68);
		}
		static ::System::Int32* StaticGet_Field_5_33()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x12C6C);
		}
		static ::System::Int32* StaticGet_Field_5_35()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x12C70);
		}
		static ::System::Int32* StaticGet_Field_5_31()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x12C74);
		}
		// static const ::System::Int32 Field_5_11 = 0x2D; // 0x0
		// static const ::System::String* Field_5_44; // 0x0
		// static const ::System::String* Field_5_45; // 0x0
		// static const ::System::String* Field_5_46; // 0x0
		// static const ::System::String* Field_5_47; // 0x0
		// static const ::System::String* Field_5_48; // 0x0
		// static const ::System::String* Field_5_49; // 0x0
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
		::System::Int32 Field_5_12; // 0x5C
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_5_13; // 0x60
		::System::Collections::Generic::List_1<::System::Single>* Field_5_14; // 0x68
		::System::Single Field_5_15; // 0x70
		::UnityEngine::Vector3 Field_5_16; // 0x74
		::System::Int32 Field_5_17; // 0x80
		::UnityEngine::AnimationCurve* Field_5_18; // 0x88
		::System::Single Field_5_19; // 0x90
		::System::Single Field_5_20; // 0x94
		::System::Boolean Field_5_21; // 0x98
		::UnityEngine::Vector3 Field_5_22; // 0x9C
		::UnityEngine::Quaternion Field_5_23; // 0xA8
		::UnityEngine::Quaternion Field_5_24; // 0xB8
		::UnityEngine::Quaternion Field_5_25; // 0xC8
		::System::Single Field_5_26; // 0xD8
		::System::Single Field_5_27; // 0xDC
		::RPG::Client::Prop::ChessDirection Field_5_28; // 0xE0
		::UnityEngine::Vector2Int Field_5_29; // 0xE4
		::System::Boolean Field_5_30; // 0xEC
		::UnityEngine::Animator* Field_5_36; // 0xF0
		::UnityEngine::Animator* Field_5_37; // 0xF8
		::UnityEngine::Transform* Field_5_38; // 0x100
		::RPG::Client::Prop::DestroyRootPuzzleBoard* Field_5_39; // 0x108
		::Class_2_2679F01039F3FC24* Field_5_40; // 0x110
		::Class_2_2679F01039F3FC24* Field_5_41; // 0x118
		::UnityEngine::Coroutine* Field_5_42; // 0x120
		::UnityEngine::Coroutine* Field_5_43; // 0x128

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

		::System::Void Method_5_84BD5F32715F1DFB(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_84BD5F32715F1DFB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E83C51340BE6FC16()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_E83C51340BE6FC16_OFFSET))(this);
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
