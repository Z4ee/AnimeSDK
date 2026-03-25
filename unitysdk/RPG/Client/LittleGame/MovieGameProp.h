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

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9A330B0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0x9A37830)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_ONHIT_OFFSET UNITYSDK_OFFSET(0x9A32EA0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_REGISTERLISTENERS_OFFSET UNITYSDK_OFFSET(0x9A37A20)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x9A37930)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x9A379D0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9A37B10)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9A37A80)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x9A32E80)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9A37B90)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP___IFIXBASEPROXY_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x9A37C60)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP___IFIXBASEPROXY_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9A37D30)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP___IFIXBASEPROXY_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9A37C70)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameProp_TypeDefinitionIndex = 62372;

	class MovieGameProp : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		::Class_1_867B6CE75953535A* Field_6_0; // 0x18
		::Class_2_9850514C0F89B91A* Field_6_1; // 0x20
		::Class_3_7E25C9E6907AC48F* Field_6_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP__CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_85* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_9850514C0F89B91A* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_85*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void ReleaseView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_RELEASEVIEW_OFFSET))(this, a1);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void RegisterListeners(::Class_2_9850514C0F89B91A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_REGISTERLISTENERS_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::System::Void OnHit(::Class_2_9850514C0F89B91A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_ONHIT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 __iFixBaseProxy_GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SafeSetActive(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP___IFIXBASEPROXY_SAFESETACTIVE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SetPosition(::UnityEngine::Vector3 P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP___IFIXBASEPROXY_SETPOSITION_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SetLocalRotation(::UnityEngine::Quaternion P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP___IFIXBASEPROXY_SETLOCALROTATION_OFFSET))(this, P0);
		}
	};
}
