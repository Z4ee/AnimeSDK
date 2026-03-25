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
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9A34730)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0x9A34320)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_ONHIT_OFFSET UNITYSDK_OFFSET(0x9A34A40)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_REGISTERLISTENERS_OFFSET UNITYSDK_OFFSET(0x9A348D0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x9A34830)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x9A347D0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9A349C0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9A34930)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET__CTOR_OFFSET UNITYSDK_OFFSET(0x9A34ED0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9A34EE0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET___IFIXBASEPROXY_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x9A34FB0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET___IFIXBASEPROXY_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9A35080)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET___IFIXBASEPROXY_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9A34FC0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameBullet_TypeDefinitionIndex = 62362;

	class MovieGameBullet : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		::UnityEngine::Transform* CenterTrans; // 0x18
		::Class_1_867B6CE75953535A* Field_6_1; // 0x20
		::Class_2_9850514C0F89B91A* Field_6_2; // 0x28
		::Class_3_7E25C9E6907AC48F* Field_6_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET__CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_85* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_9850514C0F89B91A* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_85*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void ReleaseView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_RELEASEVIEW_OFFSET))(this, a1);
		}

		::System::Void RegisterListeners(::Class_2_9850514C0F89B91A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_REGISTERLISTENERS_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::System::Void OnHit(::Class_2_9850514C0F89B91A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_ONHIT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 __iFixBaseProxy_GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SafeSetActive(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET___IFIXBASEPROXY_SAFESETACTIVE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SetPosition(::UnityEngine::Vector3 P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET___IFIXBASEPROXY_SETPOSITION_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SetLocalRotation(::UnityEngine::Quaternion P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET___IFIXBASEPROXY_SETLOCALROTATION_OFFSET))(this, P0);
		}
	};
}
