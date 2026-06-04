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

#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_DISABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xC543FE0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5428A0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xC5440C0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_INITCHESS_OFFSET UNITYSDK_OFFSET(0xC53FB90)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_0F3706CF1F1EEA61_OFFSET UNITYSDK_OFFSET(0xC542AE0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xC543D90)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_218124418542E081_1_OFFSET UNITYSDK_OFFSET(0xC544900)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_218124418542E081_OFFSET UNITYSDK_OFFSET(0xC544840)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xC543EE0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xC5445D0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_7DD2435811BE9431_OFFSET UNITYSDK_OFFSET(0xC544660)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_916EAABDA2B41A03_OFFSET UNITYSDK_OFFSET(0xC5441B0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0xC544790)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xC5449C0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_D16D471AE6EB753A_OFFSET UNITYSDK_OFFSET(0xC543BA0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_D20F759FC2EC43FB_OFFSET UNITYSDK_OFFSET(0xC544710)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0xC542ED0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONCHESSVIEWREFRESH_OFFSET UNITYSDK_OFFSET(0xC543560)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONCHESSVIEWRESET_OFFSET UNITYSDK_OFFSET(0xC5435C0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONLASERHIT_OFFSET UNITYSDK_OFFSET(0xC543E50)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONSTARTSHOOTPERFORM_OFFSET UNITYSDK_OFFSET(0xC543FA0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_RESETCHESS_OFFSET UNITYSDK_OFFSET(0xC543200)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_SETREFACTORLAUNCH_OFFSET UNITYSDK_OFFSET(0xC541EC0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_STARTMOVE_OFFSET UNITYSDK_OFFSET(0xC543610)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_TICK_OFFSET UNITYSDK_OFFSET(0xC541580)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__CCTOR_OFFSET UNITYSDK_OFFSET(0xC544A80)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__CTOR_OFFSET UNITYSDK_OFFSET(0xC544A70)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__SETREFACTORHIT_OFFSET UNITYSDK_OFFSET(0xC543C30)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__TRIGGERROOTBROKEN_OFFSET UNITYSDK_OFFSET(0xC543CE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DestroyRootPuzzleChess_TypeDefinitionIndex = 73064;

	class DestroyRootPuzzleChess : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x7E20);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x7E24);
		}
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x7E28);
		}
		static ::System::Int32* StaticGet_InteractivePos()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x7E2C);
		}
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x7E30);
		}
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleChess_TypeDefinitionIndex)->GetStaticField(0x7E34);
		}
		// static const ::System::Int32 Field_5_6 = 0x2D; // 0x0
		// static const ::System::String* Field_5_7; // 0x0
		// static const ::System::String* Field_5_8; // 0x0
		// static const ::System::String* Field_5_9; // 0x0
		// static const ::System::String* Field_5_10; // 0x0
		// static const ::System::String* Field_5_11; // 0x0
		// static const ::System::String* Field_5_12; // 0x0
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
		::System::Int32 Field_5_23; // 0x5C
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_5_24; // 0x60
		::System::Collections::Generic::List_1<::System::Single>* Field_5_25; // 0x68
		::System::Single Field_5_26; // 0x70
		::UnityEngine::Vector3 Field_5_27; // 0x74
		::System::Int32 Field_5_28; // 0x80
		::UnityEngine::AnimationCurve* Field_5_29; // 0x88
		::System::Single Field_5_30; // 0x90
		::System::Single Field_5_31; // 0x94
		::System::Boolean Field_5_32; // 0x98
		::UnityEngine::Vector3 Field_5_33; // 0x9C
		::UnityEngine::Quaternion Field_5_34; // 0xA8
		::UnityEngine::Quaternion Field_5_35; // 0xB8
		::UnityEngine::Quaternion Field_5_36; // 0xC8
		::System::Single Field_5_37; // 0xD8
		::System::Single Field_5_38; // 0xDC
		::RPG::Client::Prop::ChessDirection Field_5_39; // 0xE0
		::UnityEngine::Vector2Int Field_5_40; // 0xE4
		::System::Boolean Field_5_41; // 0xEC
		::UnityEngine::Animator* Field_5_42; // 0xF0
		::UnityEngine::Animator* Field_5_43; // 0xF8
		::UnityEngine::Transform* Field_5_44; // 0x100
		::RPG::Client::Prop::DestroyRootPuzzleBoard* Field_5_45; // 0x108
		::Class_2_2679F01039F3FC24* Field_5_46; // 0x110
		::Class_2_2679F01039F3FC24* Field_5_47; // 0x118
		::UnityEngine::Coroutine* Field_5_48; // 0x120
		::UnityEngine::Coroutine* Field_5_49; // 0x128

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

		::System::Void Method_5_D20F759FC2EC43FB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_METHOD_5_D20F759FC2EC43FB_OFFSET))(this);
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
