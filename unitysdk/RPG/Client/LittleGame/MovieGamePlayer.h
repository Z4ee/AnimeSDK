#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoView.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_85;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_867B6CE75953535A;
class Class_2_9850514C0F89B91A;
class Class_3_7E25C9E6907AC48F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9A374E0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0x9A36B20)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9A36C20)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_METHOD_6_96E3AF7BDBEF1FD2_OFFSET UNITYSDK_OFFSET(0x9A36D50)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_ONPLAYERHITSTATEREMOVED_OFFSET UNITYSDK_OFFSET(0x9A37330)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_ONPLAYERHITSTATE_OFFSET UNITYSDK_OFFSET(0x9A372D0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_REGISTERLISTENERS_OFFSET UNITYSDK_OFFSET(0x9A37080)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x9A36EA0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x9A37030)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETANIMBOOLPARAM_OFFSET UNITYSDK_OFFSET(0x9A37380)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETANIMFLOATPARAM_OFFSET UNITYSDK_OFFSET(0x9A373F0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0x9A37470)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9A37180)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETMATFLOATPARAM_OFFSET UNITYSDK_OFFSET(0x9A37260)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETMATINTPARAM_OFFSET UNITYSDK_OFFSET(0x9A37200)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9A370F0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A375A0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x9A37590)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9A37760)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x9A375E0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9A376B0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9A375F0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGamePlayer_TypeDefinitionIndex = 62371;

	class MovieGamePlayer : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		static ::System::Int32* StaticGet_Field_6_12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MovieGamePlayer_TypeDefinitionIndex)->GetStaticField(0xC800);
		}
		::System::String* Field_6_0; // 0x18
		::System::Int32 Field_6_1; // 0x20
		::System::String* Field_6_2; // 0x28
		::System::Single Field_6_3; // 0x30
		::System::Boolean Field_6_4; // 0x34
		::Class_1_867B6CE75953535A* Field_6_5; // 0x38
		::Class_2_9850514C0F89B91A* Field_6_6; // 0x40
		::Class_3_7E25C9E6907AC48F* Field_6_7; // 0x48
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

		::System::Void InitializeView(::Class_0_16E4307DCC419505_85* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_9850514C0F89B91A* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_85*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
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

		::System::Void RegisterListeners(::Class_2_9850514C0F89B91A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_REGISTERLISTENERS_OFFSET))(this, a1);
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

		::System::Void OnPlayerHitState(::Class_2_9850514C0F89B91A* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_ONPLAYERHITSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayerHitStateRemoved(::Class_2_9850514C0F89B91A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_ONPLAYERHITSTATEREMOVED_OFFSET))(this, a1);
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

		::UnityEngine::Material* Method_6_96E3AF7BDBEF1FD2()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER_METHOD_6_96E3AF7BDBEF1FD2_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SafeSetActive(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_SAFESETACTIVE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SetPosition(::UnityEngine::Vector3 P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_SETPOSITION_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SetLocalRotation(::UnityEngine::Quaternion P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_SETLOCALROTATION_OFFSET))(this, P0);
		}

		::UnityEngine::Vector3 __iFixBaseProxy_GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLAYER___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET))(this);
		}
	};
}
