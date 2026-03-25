#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoView.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_85;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_9850514C0F89B91A;
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9A36750)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0x9A365D0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x9A36630)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x9A36870)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9A367F0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9A366C0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9A368C0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9A36990)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x9A36B10)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9A36A60)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9A368D0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGamePlacement_TypeDefinitionIndex = 62370;

	class MovieGamePlacement : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT__CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_85* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_9850514C0F89B91A* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_85*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReleaseView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_RELEASEVIEW_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_SETPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_SetPosition(::UnityEngine::Vector3 P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_SETPOSITION_OFFSET))(this, P0);
		}

		::UnityEngine::Vector3 __iFixBaseProxy_GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SetLocalRotation(::UnityEngine::Quaternion P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_SETLOCALROTATION_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SafeSetActive(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_SAFESETACTIVE_OFFSET))(this, P0);
		}
	};
}
