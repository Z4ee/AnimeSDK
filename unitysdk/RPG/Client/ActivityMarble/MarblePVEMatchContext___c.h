#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MarbleBattleSealData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A87DA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19A87DE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT___C___REQUESTPVEBATTLEFINISH_B__8_0_OFFSET UNITYSDK_OFFSET(0x19A87DF0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVEMatchContext___c_TypeDefinitionIndex = 71282;

	class MarblePVEMatchContext___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MarbleBattleSealData*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::MarbleBattleSealData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MarblePVEMatchContext___c_TypeDefinitionIndex)->GetStaticField(0x43DC0);
		}
		static ::RPG::Client::ActivityMarble::MarblePVEMatchContext___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityMarble::MarblePVEMatchContext___c**)Il2CppClass::FromTypeDefinitionIndex(MarblePVEMatchContext___c_TypeDefinitionIndex)->GetStaticField(0x43DC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __RequestPVEBattleFinish_b__8_0(::RPG::Client::MarbleBattleSealData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MarbleBattleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT___C___REQUESTPVEBATTLEFINISH_B__8_0_OFFSET))(this, a1);
		}
	};
}
