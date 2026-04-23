#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMatchThreeScore; }
namespace RPG::Client { class MatchThreeGameOpponent; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_MATCHTHREEGAME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA8366F0)
#define RPG_CLIENT_MATCHTHREEGAME___C__CREATEPVPGAME_B__50_0_OFFSET UNITYSDK_OFFSET(0xA8367E0)
#define RPG_CLIENT_MATCHTHREEGAME___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA836730)
#define RPG_CLIENT_MATCHTHREEGAME___C__GETALLOPPONENTS_B__69_0_OFFSET UNITYSDK_OFFSET(0xA836840)
#define RPG_CLIENT_MATCHTHREEGAME___C__GETRESULTSCORES_B__75_0_OFFSET UNITYSDK_OFFSET(0xA8369B0)
#define RPG_CLIENT_MATCHTHREEGAME___C__INITPLAYERS_B__70_0_OFFSET UNITYSDK_OFFSET(0xA836870)
#define RPG_CLIENT_MATCHTHREEGAME___C___REFRESHLOCALRANKDATA_B__44_0_OFFSET UNITYSDK_OFFSET(0xA836740)
#define RPG_CLIENT_MATCHTHREEGAME___C___REFRESHLOCALRANKDATA_B__44_1_OFFSET UNITYSDK_OFFSET(0xA836780)
#define RPG_CLIENT_MATCHTHREEGAME___C___REFRESHLOCALRANKDATA_B__44_2_OFFSET UNITYSDK_OFFSET(0xA8367C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c_TypeDefinitionIndex = 60702;

	class MatchThreeGame___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MatchThreeGame___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreeGame___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x279A0);
		}
		static ::System::Func_2<::RPG::Client::MatchThreeGameOpponent*, ::System::Boolean>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeGameOpponent*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x279A8);
		}
		static ::System::Comparison_1<::RPG::Client::IMatchThreeScore*>** StaticGet___9__75_0()
		{
			return (::System::Comparison_1<::RPG::Client::IMatchThreeScore*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x279B0);
		}
		static ::System::Comparison_1<::RPG::Client::MatchThreeGameOpponent*>** StaticGet___9__69_0()
		{
			return (::System::Comparison_1<::RPG::Client::MatchThreeGameOpponent*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x279B8);
		}
		static ::System::Comparison_1<::RPG::Client::MatchThreeGameOpponent*>** StaticGet___9__44_1()
		{
			return (::System::Comparison_1<::RPG::Client::MatchThreeGameOpponent*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x279C0);
		}
		static ::System::Predicate_1<::RPG::Client::MatchThreeGameOpponent*>** StaticGet___9__70_0()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeGameOpponent*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x279C8);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x279D0);
		}
		static ::System::Func_2<::RPG::Client::MatchThreeGameOpponent*, ::System::Boolean>** StaticGet___9__44_2()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeGameOpponent*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x279D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshLocalRankData_b__44_0(::RPG::Client::MatchThreeGameOpponent* opponent)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C___REFRESHLOCALRANKDATA_B__44_0_OFFSET))(this, opponent);
		}

		::System::Int32 __RefreshLocalRankData_b__44_1(::RPG::Client::MatchThreeGameOpponent* lhs, ::RPG::Client::MatchThreeGameOpponent* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C___REFRESHLOCALRANKDATA_B__44_1_OFFSET))(this, lhs, rhs);
		}

		::System::Boolean __RefreshLocalRankData_b__44_2(::RPG::Client::MatchThreeGameOpponent* opponent)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C___REFRESHLOCALRANKDATA_B__44_2_OFFSET))(this, opponent);
		}

		::System::UInt32 _CreatePVPGame_b__50_0(::RPG::GameCore::DynamicValue* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__CREATEPVPGAME_B__50_0_OFFSET))(this, x);
		}

		::System::Int32 _GetAllOpponents_b__69_0(::RPG::Client::MatchThreeGameOpponent* lhs, ::RPG::Client::MatchThreeGameOpponent* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__GETALLOPPONENTS_B__69_0_OFFSET))(this, lhs, rhs);
		}

		::System::Boolean _InitPlayers_b__70_0(::RPG::Client::MatchThreeGameOpponent* opponent)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__INITPLAYERS_B__70_0_OFFSET))(this, opponent);
		}

		::System::Int32 _GetResultScores_b__75_0(::RPG::Client::IMatchThreeScore* lhs, ::RPG::Client::IMatchThreeScore* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IMatchThreeScore*, ::RPG::Client::IMatchThreeScore*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__GETRESULTSCORES_B__75_0_OFFSET))(this, lhs, rhs);
		}
	};
}
