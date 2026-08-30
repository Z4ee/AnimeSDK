#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TreasureChallengeTargetStatus.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TREASURECHALLENGETARGET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE299D30)
#define RPG_CLIENT_TREASURECHALLENGETARGET___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE299D70)
#define RPG_CLIENT_TREASURECHALLENGETARGET___C__GET_FINISHEDCOUNT_B__13_0_OFFSET UNITYSDK_OFFSET(0xE299D80)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureChallengeTarget___c_TypeDefinitionIndex = 66784;

	class TreasureChallengeTarget___c : public ::System::Object
	{
	public:
		static ::RPG::Client::TreasureChallengeTarget___c** StaticGet___9()
		{
			return (::RPG::Client::TreasureChallengeTarget___c**)Il2CppClass::FromTypeDefinitionIndex(TreasureChallengeTarget___c_TypeDefinitionIndex)->GetStaticField(0x5E820);
		}
		static ::System::Func_2<::RPG::Client::TreasureChallengeTargetStatus, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::RPG::Client::TreasureChallengeTargetStatus, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TreasureChallengeTarget___c_TypeDefinitionIndex)->GetStaticField(0x5E828);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_FinishedCount_b__13_0(::RPG::Client::TreasureChallengeTargetStatus a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TreasureChallengeTargetStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET___C__GET_FINISHEDCOUNT_B__13_0_OFFSET))(this, a1);
		}
	};
}
