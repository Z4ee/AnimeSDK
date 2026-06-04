#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoView.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_84;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_FD51057495DB654F;
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0xBE34600)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0xBE34480)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0xBE344E0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0xBE34720)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xBE346A0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xBE34570)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xBE34770)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0xBE34840)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0xBE349A0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xBE34900)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xBE34780)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGamePlacement_TypeDefinitionIndex = 71185;

	class MovieGamePlacement : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT__CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_84* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_FD51057495DB654F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_84*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
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

		::System::Void __iFixBaseProxy_SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_SETPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 __iFixBaseProxy_GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT___IFIXBASEPROXY_SAFESETACTIVE_OFFSET))(this, a1);
		}
	};
}
