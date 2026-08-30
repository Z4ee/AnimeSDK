#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoView.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_103;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_FD51057495DB654F;
namespace RPG::Client { class BezierCurve; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0xD522740)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0xD522420)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0xD5225D0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0xD5226F0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_SAMPLEHEIGHT_OFFSET UNITYSDK_OFFSET(0xD522D30)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_SAMPLEPOSITION_OFFSET UNITYSDK_OFFSET(0xD522860)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xD5227E0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xD522660)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL__CTOR_OFFSET UNITYSDK_OFFSET(0xD522DE0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameRail_TypeDefinitionIndex = 76138;

	class MovieGameRail : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		::RPG::Client::BezierCurve* _BezierCurve; // 0x18
		::RPG::Client::BezierCurve* _BezierCurveBranch; // 0x20
		::System::Single KNIFFECNDJD; // 0x28
		::System::Single GEDEMBNMMAH; // 0x2C
		::System::Single PJLDJKHAMOA; // 0x30
		::System::Single JGJBBGGCEDI; // 0x34
		::System::Single JJMKFDKAOHC; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL__CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_103* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_FD51057495DB654F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReleaseView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_RELEASEVIEW_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::RPG::MVector3 SamplePosition(::System::Single a1, ::Class_2_FD51057495DB654F* a2)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Single, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_SAMPLEPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Single SampleHeight(::System::Single a1, ::Class_2_FD51057495DB654F* a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMERAIL_SAMPLEHEIGHT_OFFSET))(this, a1, a2);
		}
	};
}
