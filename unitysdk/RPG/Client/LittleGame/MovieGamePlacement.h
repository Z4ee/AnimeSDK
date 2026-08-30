#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoView.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_103;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_FD51057495DB654F;
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1B1D6120)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0x1B1D5FA0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x1B1D6000)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x1B1D6240)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1B1D61C0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B1D6090)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D6290)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGamePlacement_TypeDefinitionIndex = 76134;

	class MovieGamePlacement : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT__CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_103* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_FD51057495DB654F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPLACEMENT_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
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
	};
}
