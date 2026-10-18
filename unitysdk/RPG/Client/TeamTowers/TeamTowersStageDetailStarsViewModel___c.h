#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TeamTowers { class TeamTowersGameStageStarInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILSTARSVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE203FF0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILSTARSVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE204030)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILSTARSVIEWMODEL___C__GET_ACHIEVEDCOUNT_B__4_0_OFFSET UNITYSDK_OFFSET(0xE204040)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersStageDetailStarsViewModel___c_TypeDefinitionIndex = 79076;

	class TeamTowersStageDetailStarsViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::TeamTowers::TeamTowersStageDetailStarsViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::TeamTowers::TeamTowersStageDetailStarsViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(TeamTowersStageDetailStarsViewModel___c_TypeDefinitionIndex)->GetStaticField(0x13F70);
		}
		static ::System::Func_2<::RPG::Client::TeamTowers::TeamTowersGameStageStarInfo*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::TeamTowers::TeamTowersGameStageStarInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TeamTowersStageDetailStarsViewModel___c_TypeDefinitionIndex)->GetStaticField(0x13F78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILSTARSVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILSTARSVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_AchievedCount_b__4_0(::RPG::Client::TeamTowers::TeamTowersGameStageStarInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersGameStageStarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILSTARSVIEWMODEL___C__GET_ACHIEVEDCOUNT_B__4_0_OFFSET))(this, a1);
		}
	};
}
