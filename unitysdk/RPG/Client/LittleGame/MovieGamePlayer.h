#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoView.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_84;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_D33B7D6901AE39E9;
class Class_2_FD51057495DB654F;
class Class_3_7E25C9E6907AC48F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0xBE35380)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0xBE349B0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBE34AC0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_METHOD_6_E0E1BDE3C92F9C86_OFFSET UNITYSDK_OFFSET(0xBE34BF0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_ONPLAYERHITSTATEREMOVED_OFFSET UNITYSDK_OFFSET(0xBE351D0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_ONPLAYERHITSTATE_OFFSET UNITYSDK_OFFSET(0xBE35170)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_REGISTERLISTENERS_OFFSET UNITYSDK_OFFSET(0xBE34F20)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0xBE34D40)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0xBE34ED0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETANIMBOOLPARAM_OFFSET UNITYSDK_OFFSET(0xBE35220)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETANIMFLOATPARAM_OFFSET UNITYSDK_OFFSET(0xBE35290)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0xBE35310)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xBE35020)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETMATFLOATPARAM_OFFSET UNITYSDK_OFFSET(0xBE35100)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETMATINTPARAM_OFFSET UNITYSDK_OFFSET(0xBE350A0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xBE34F90)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE35440)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xBE35430)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0xBE355F0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0xBE35480)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xBE35550)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xBE35490)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGamePlayer_TypeDefinitionIndex = 71186;

	class MovieGamePlayer : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		static ::System::Int32* StaticGet_Field_6_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MovieGamePlayer_TypeDefinitionIndex)->GetStaticField(0xF2B0);
		}
		::System::String* Field_6_1; // 0x18
		::System::Int32 Field_6_2; // 0x20
		::System::String* Field_6_3; // 0x28
		::System::Single Field_6_4; // 0x30
		::System::Boolean Field_6_5; // 0x34
		::Class_1_D33B7D6901AE39E9* Field_6_6; // 0x38
		::Class_2_FD51057495DB654F* Field_6_7; // 0x40
		::Class_3_7E25C9E6907AC48F* Field_6_8; // 0x48
		::UnityEngine::Animator* AnimatorController; // 0x50
		::UnityEngine::GameObject* SpAnchor; // 0x58
		::UnityEngine::Renderer* RendererCharacter; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* BodyRenderers; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER__CCTOR_OFFSET))();
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_84* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_FD51057495DB654F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_84*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void ReleaseView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_RELEASEVIEW_OFFSET))(this, a1);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void RegisterListeners(::Class_2_FD51057495DB654F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_REGISTERLISTENERS_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::System::Void SetMatIntParam(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETMATINTPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatFloatParam(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETMATFLOATPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayerHitState(::Class_2_FD51057495DB654F* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_ONPLAYERHITSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayerHitStateRemoved(::Class_2_FD51057495DB654F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_ONPLAYERHITSTATEREMOVED_OFFSET))(this, a1);
		}

		::System::Void SetAnimBoolParam(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETANIMBOOLPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimFloatParam(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETANIMFLOATPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETANIMTRIGGER_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_GETCENTERPOSITION_OFFSET))(this);
		}

		::UnityEngine::Material* Method_6_E0E1BDE3C92F9C86()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_METHOD_6_E0E1BDE3C92F9C86_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 __iFixBaseProxy_GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET))(this);
		}
	};
}
