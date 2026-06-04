#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB690370)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB6903B0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__TRYTRIGGERPENDINGPERFORMANCE_B__49_0_OFFSET UNITYSDK_OFFSET(0xB6903C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionShop___c_TypeDefinitionIndex = 59259;

	class ChimeraDuelGameSessionShop___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_0_16E4307DCC419505_747*>** StaticGet___9__49_0()
		{
			return (::System::Predicate_1<::Class_0_16E4307DCC419505_747*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameSessionShop___c_TypeDefinitionIndex)->GetStaticField(0x64180);
		}
		static ::RPG::Client::ChimeraDuelGameSessionShop___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuelGameSessionShop___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameSessionShop___c_TypeDefinitionIndex)->GetStaticField(0x64188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryTriggerPendingPerformance_b__49_0(::Class_0_16E4307DCC419505_747* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_747*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__TRYTRIGGERPENDINGPERFORMANCE_B__49_0_OFFSET))(this, a1);
		}
	};
}
