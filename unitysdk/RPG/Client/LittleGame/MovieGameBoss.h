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
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9A33BD0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0x9A33150)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONHIT_OFFSET UNITYSDK_OFFSET(0x9A33D80)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONINVISIBLEREMOVED_OFFSET UNITYSDK_OFFSET(0x9A33F40)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONPLAYERHITSTATEREMOVED_OFFSET UNITYSDK_OFFSET(0x9A339F0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONPLAYERHITSTATE_OFFSET UNITYSDK_OFFSET(0x9A33800)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_REGISTERLISTENERS_OFFSET UNITYSDK_OFFSET(0x9A33780)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x9A334D0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x9A33730)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETANIMBOOLPARAM_OFFSET UNITYSDK_OFFSET(0x9A33DE0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETANIMFLOATPARAM_OFFSET UNITYSDK_OFFSET(0x9A33E50)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0x9A33ED0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9A33D00)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9A33C70)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A34030)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS__CTOR_OFFSET UNITYSDK_OFFSET(0x9A34020)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9A340E0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS___IFIXBASEPROXY_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x9A340D0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS___IFIXBASEPROXY_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9A34270)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS___IFIXBASEPROXY_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9A341B0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameBoss_TypeDefinitionIndex = 62361;

	class MovieGameBoss : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		static ::System::Int32* StaticGet_Field_6_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MovieGameBoss_TypeDefinitionIndex)->GetStaticField(0xC780);
		}
		static ::System::Int32* StaticGet_Field_6_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MovieGameBoss_TypeDefinitionIndex)->GetStaticField(0xC784);
		}
		static ::System::Int32* StaticGet_Field_6_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MovieGameBoss_TypeDefinitionIndex)->GetStaticField(0xC788);
		}
		static ::System::Int32* StaticGet_Field_6_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MovieGameBoss_TypeDefinitionIndex)->GetStaticField(0xC78C);
		}
		::Class_1_867B6CE75953535A* Field_6_0; // 0x18
		::Class_2_9850514C0F89B91A* Field_6_1; // 0x20
		::Class_3_7E25C9E6907AC48F* Field_6_2; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* BodyRenderers; // 0x30
		::System::Boolean Field_6_4; // 0x38
		::UnityEngine::Animator* AnimatorController; // 0x40
		::UnityEngine::Transform* CenterTrans; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS__CCTOR_OFFSET))();
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_85* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_9850514C0F89B91A* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_85*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReleaseView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_RELEASEVIEW_OFFSET))(this, a1);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void RegisterListeners(::Class_2_9850514C0F89B91A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_REGISTERLISTENERS_OFFSET))(this, a1);
		}

		::System::Void OnPlayerHitState(::Class_2_9850514C0F89B91A* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONPLAYERHITSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayerHitStateRemoved(::Class_2_9850514C0F89B91A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONPLAYERHITSTATEREMOVED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::System::Void OnHit(::Class_2_9850514C0F89B91A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONHIT_OFFSET))(this, a1);
		}

		::System::Void SetAnimBoolParam(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETANIMBOOLPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimFloatParam(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETANIMFLOATPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETANIMTRIGGER_OFFSET))(this, a1);
		}

		::System::Void OnInvisibleRemoved(::Class_2_9850514C0F89B91A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONINVISIBLEREMOVED_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_SafeSetActive(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS___IFIXBASEPROXY_SAFESETACTIVE_OFFSET))(this, P0);
		}

		::UnityEngine::Vector3 __iFixBaseProxy_GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SetPosition(::UnityEngine::Vector3 P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS___IFIXBASEPROXY_SETPOSITION_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SetLocalRotation(::UnityEngine::Quaternion P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS___IFIXBASEPROXY_SETLOCALROTATION_OFFSET))(this, P0);
		}
	};
}
