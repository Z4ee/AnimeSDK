#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoView.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_103;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_D33B7D6901AE39E9;
class Class_2_FD51057495DB654F;
class Class_3_7E25C9E6907AC48F;
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x19AB13C0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0x19AB12B0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_ONHIT_OFFSET UNITYSDK_OFFSET(0x19AB16C0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_REGISTERLISTENERS_OFFSET UNITYSDK_OFFSET(0x19AB1550)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x19AB1460)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x19AB1500)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x19AB1640)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x19AB15B0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x19AAD7B0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameProp_TypeDefinitionIndex = 72700;

	class MovieGameProp : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		::Class_1_D33B7D6901AE39E9* Field_6_0; // 0x18
		::Class_2_FD51057495DB654F* Field_6_1; // 0x20
		::Class_3_7E25C9E6907AC48F* Field_6_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP__CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_103* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_FD51057495DB654F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
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

		::System::Void RegisterListeners(::Class_2_FD51057495DB654F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_REGISTERLISTENERS_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::System::Void OnHit(::Class_2_FD51057495DB654F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_ONHIT_OFFSET))(this, a1);
		}
	};
}
