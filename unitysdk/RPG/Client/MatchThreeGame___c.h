#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMatchThreeScore; }
namespace RPG::Client { class MatchThreeGameOpponent; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_MATCHTHREEGAME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B3F4F0)
#define RPG_CLIENT_MATCHTHREEGAME___C__CREATEPVPGAME_B__50_0_OFFSET UNITYSDK_OFFSET(0x9B3F5E0)
#define RPG_CLIENT_MATCHTHREEGAME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B3F530)
#define RPG_CLIENT_MATCHTHREEGAME___C__GETALLOPPONENTS_B__69_0_OFFSET UNITYSDK_OFFSET(0x9B3F640)
#define RPG_CLIENT_MATCHTHREEGAME___C__GETRESULTSCORES_B__75_0_OFFSET UNITYSDK_OFFSET(0x9B3F7B0)
#define RPG_CLIENT_MATCHTHREEGAME___C__INITPLAYERS_B__70_0_OFFSET UNITYSDK_OFFSET(0x9B3F670)
#define RPG_CLIENT_MATCHTHREEGAME___C___REFRESHLOCALRANKDATA_B__44_0_OFFSET UNITYSDK_OFFSET(0x9B3F540)
#define RPG_CLIENT_MATCHTHREEGAME___C___REFRESHLOCALRANKDATA_B__44_1_OFFSET UNITYSDK_OFFSET(0x9B3F580)
#define RPG_CLIENT_MATCHTHREEGAME___C___REFRESHLOCALRANKDATA_B__44_2_OFFSET UNITYSDK_OFFSET(0x9B3F5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c_TypeDefinitionIndex = 53558;

	class MatchThreeGame___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x2F5F0);
		}
		static ::System::Comparison_1<::RPG::Client::MatchThreeGameOpponent*>** StaticGet___9__69_0()
		{
			return (::System::Comparison_1<::RPG::Client::MatchThreeGameOpponent*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x2F5F8);
		}
		static ::System::Func_2<::RPG::Client::MatchThreeGameOpponent*, ::System::Boolean>** StaticGet___9__44_2()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeGameOpponent*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x2F600);
		}
		static ::RPG::Client::MatchThreeGame___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreeGame___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x2F608);
		}
		static ::System::Comparison_1<::RPG::Client::IMatchThreeScore*>** StaticGet___9__75_0()
		{
			return (::System::Comparison_1<::RPG::Client::IMatchThreeScore*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x2F610);
		}
		static ::System::Predicate_1<::RPG::Client::MatchThreeGameOpponent*>** StaticGet___9__70_0()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeGameOpponent*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x2F618);
		}
		static ::System::Func_2<::RPG::Client::MatchThreeGameOpponent*, ::System::Boolean>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeGameOpponent*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x2F620);
		}
		static ::System::Comparison_1<::RPG::Client::MatchThreeGameOpponent*>** StaticGet___9__44_1()
		{
			return (::System::Comparison_1<::RPG::Client::MatchThreeGameOpponent*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeGame___c_TypeDefinitionIndex)->GetStaticField(0x2F628);
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
