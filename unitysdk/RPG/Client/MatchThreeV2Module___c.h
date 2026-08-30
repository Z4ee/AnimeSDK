#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class MatchThreeGameProp; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2MODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9A0EB0)
#define RPG_CLIENT_MATCHTHREEV2MODULE___C__CREATESOLOPVPGAME_B__94_0_OFFSET UNITYSDK_OFFSET(0x1C9A1020)
#define RPG_CLIENT_MATCHTHREEV2MODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A0EF0)
#define RPG_CLIENT_MATCHTHREEV2MODULE___C__RESTARTPVEONEONONEGAME_B__93_0_OFFSET UNITYSDK_OFFSET(0x1C9A1000)
#define RPG_CLIENT_MATCHTHREEV2MODULE___C__SENDLEVELRESULTTOSERVER_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C9A0F00)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2Module___c_TypeDefinitionIndex = 66081;

	class MatchThreeV2Module___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MatchThreeGameProp*, ::RPG::Client::IMatchThreePropData*>** StaticGet___9__93_0()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeGameProp*, ::RPG::Client::IMatchThreePropData*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2Module___c_TypeDefinitionIndex)->GetStaticField(0x660F0);
		}
		static ::RPG::Client::MatchThreeV2Module___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreeV2Module___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2Module___c_TypeDefinitionIndex)->GetStaticField(0x660F8);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__94_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2Module___c_TypeDefinitionIndex)->GetStaticField(0x66100);
		}
		static ::System::Func_2<::RPG::Client::IMatchThreePropData*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::IMatchThreePropData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2Module___c_TypeDefinitionIndex)->GetStaticField(0x66108);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SendLevelResultToServer_b__5_0(::RPG::Client::IMatchThreePropData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IMatchThreePropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE___C__SENDLEVELRESULTTOSERVER_B__5_0_OFFSET))(this, a1);
		}

		::RPG::Client::IMatchThreePropData* _RestartPVEOneOnOneGame_b__93_0(::RPG::Client::MatchThreeGameProp* a1)
		{
			return ((::RPG::Client::IMatchThreePropData*(*)(::PVOID, ::RPG::Client::MatchThreeGameProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE___C__RESTARTPVEONEONONEGAME_B__93_0_OFFSET))(this, a1);
		}

		::System::UInt32 _CreateSoloPvpGame_b__94_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE___C__CREATESOLOPVPGAME_B__94_0_OFFSET))(this, a1);
		}
	};
}
