#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::ChenLingBattle { class IEntity; }
namespace RPG::Client::ChenLingBattle { class StageWave; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5BA400)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB5BA440)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__GETTOTALBATTLESCORE_B__92_0_OFFSET UNITYSDK_OFFSET(0xB5BA4E0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C___INITWAVES_B__27_0_OFFSET UNITYSDK_OFFSET(0xB5BA490)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C___SORTHANDCARD_B__2_0_OFFSET UNITYSDK_OFFSET(0xB5BA450)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameSession___c_TypeDefinitionIndex = 70902;

	class ChenLingBattleGameSession___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattle::ChenLingBattleGameSession___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleGameSession___c_TypeDefinitionIndex)->GetStaticField(0x5FA70);
		}
		static ::System::Comparison_1<::RPG::Client::ChenLingBattle::HandCard*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChenLingBattle::HandCard*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleGameSession___c_TypeDefinitionIndex)->GetStaticField(0x5FA78);
		}
		static ::System::Comparison_1<::RPG::Client::ChenLingBattle::StageWave*>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChenLingBattle::StageWave*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleGameSession___c_TypeDefinitionIndex)->GetStaticField(0x5FA80);
		}
		static ::System::Func_2<::RPG::Client::ChenLingBattle::IEntity*, ::System::UInt32>** StaticGet___9__92_0()
		{
			return (::System::Func_2<::RPG::Client::ChenLingBattle::IEntity*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleGameSession___c_TypeDefinitionIndex)->GetStaticField(0x5FA88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SortHandCard_b__2_0(::RPG::Client::ChenLingBattle::HandCard* a1, ::RPG::Client::ChenLingBattle::HandCard* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C___SORTHANDCARD_B__2_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __InitWaves_b__27_0(::RPG::Client::ChenLingBattle::StageWave* a1, ::RPG::Client::ChenLingBattle::StageWave* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingBattle::StageWave*, ::RPG::Client::ChenLingBattle::StageWave*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C___INITWAVES_B__27_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetTotalBattleScore_b__92_0(::RPG::Client::ChenLingBattle::IEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChenLingBattle::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__GETTOTALBATTLESCORE_B__92_0_OFFSET))(this, a1);
		}
	};
}
