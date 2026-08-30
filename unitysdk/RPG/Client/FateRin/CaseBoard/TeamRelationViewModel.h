#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardRelationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace RPG::GameCore { class FateRinCaseBoardTeamRelationInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_COMPUTECATENARYPOINTS_OFFSET UNITYSDK_OFFSET(0xCFFB080)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_COMPUTECATENARYSHADOWPOINTS_OFFSET UNITYSDK_OFFSET(0xCFFB2D0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_GET_FROMTEAM_OFFSET UNITYSDK_OFFSET(0xCFFAF00)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_GET_RELATIONTYPE_OFFSET UNITYSDK_OFFSET(0xCFFAF40)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_GET_TOTEAM_OFFSET UNITYSDK_OFFSET(0xCFFAF20)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_SET_FROMTEAM_OFFSET UNITYSDK_OFFSET(0xCFFAF10)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_SET_RELATIONTYPE_OFFSET UNITYSDK_OFFSET(0xCFFAF50)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_SET_TOTEAM_OFFSET UNITYSDK_OFFSET(0xCFFAF30)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_UPDATE_OFFSET UNITYSDK_OFFSET(0xCFFB020)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCFFAF60)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int TeamRelationViewModel_TypeDefinitionIndex = 79490;

	class TeamRelationViewModel : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::CaseBoard::TeamViewModel* _ToTeam_k__BackingField; // 0x10
		::RPG::Client::FateRin::CaseBoard::TeamViewModel* _FromTeam_k__BackingField; // 0x18
		::RPG::GameCore::FateRinCaseBoardRelationType _RelationType_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1, ::RPG::Client::FateRin::CaseBoard::TeamViewModel* a2, ::RPG::GameCore::FateRinCaseBoardRelationType a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*, ::RPG::GameCore::FateRinCaseBoardRelationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::FateRin::CaseBoard::TeamViewModel* get_FromTeam()
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_GET_FROMTEAM_OFFSET))(this);
		}

		::System::Void set_FromTeam(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_SET_FROMTEAM_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::CaseBoard::TeamViewModel* get_ToTeam()
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_GET_TOTEAM_OFFSET))(this);
		}

		::System::Void set_ToTeam(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_SET_TOTEAM_OFFSET))(this, a1);
		}

		::RPG::GameCore::FateRinCaseBoardRelationType get_RelationType()
		{
			return ((::RPG::GameCore::FateRinCaseBoardRelationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_GET_RELATIONTYPE_OFFSET))(this);
		}

		::System::Void set_RelationType(::RPG::GameCore::FateRinCaseBoardRelationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardRelationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_SET_RELATIONTYPE_OFFSET))(this, a1);
		}

		::System::Void Update(::RPG::GameCore::FateRinCaseBoardTeamRelationInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamRelationInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_UPDATE_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* ComputeCatenaryPoints(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_COMPUTECATENARYPOINTS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* ComputeCatenaryShadowPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMRELATIONVIEWMODEL_COMPUTECATENARYSHADOWPOINTS_OFFSET))(a1, a2, a3);
		}
	};
}
