#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_821;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCBDEAC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCBDEB00)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__TRYTRIGGERPENDINGPERFORMANCE_B__49_0_OFFSET UNITYSDK_OFFSET(0xCBDEB10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionShop___c_TypeDefinitionIndex = 63383;

	class ChimeraDuelGameSessionShop___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_0_16E4307DCC419505_821*>** StaticGet___9__49_0()
		{
			return (::System::Predicate_1<::Class_0_16E4307DCC419505_821*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameSessionShop___c_TypeDefinitionIndex)->GetStaticField(0x46820);
		}
		static ::RPG::Client::ChimeraDuelGameSessionShop___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuelGameSessionShop___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameSessionShop___c_TypeDefinitionIndex)->GetStaticField(0x46828);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryTriggerPendingPerformance_b__49_0(::Class_0_16E4307DCC419505_821* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_821*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__TRYTRIGGERPENDINGPERFORMANCE_B__49_0_OFFSET))(this, a1);
		}
	};
}
