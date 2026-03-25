#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ParkourRank; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_PARKOURSETTLEMENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F11A80)
#define RPG_CLIENT_PARKOURSETTLEMENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9F11AC0)
#define RPG_CLIENT_PARKOURSETTLEMENT___C__SORTRANKS_B__37_0_OFFSET UNITYSDK_OFFSET(0x9F11AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourSettlement___c_TypeDefinitionIndex = 50217;

	class ParkourSettlement___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ParkourSettlement___c** StaticGet___9()
		{
			return (::RPG::Client::ParkourSettlement___c**)Il2CppClass::FromTypeDefinitionIndex(ParkourSettlement___c_TypeDefinitionIndex)->GetStaticField(0x45660);
		}
		static ::System::Predicate_1<::RPG::Client::ParkourRank*>** StaticGet___9__37_0()
		{
			return (::System::Predicate_1<::RPG::Client::ParkourRank*>**)Il2CppClass::FromTypeDefinitionIndex(ParkourSettlement___c_TypeDefinitionIndex)->GetStaticField(0x45668);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SortRanks_b__37_0(::RPG::Client::ParkourRank* rank)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT___C__SORTRANKS_B__37_0_OFFSET))(this, rank);
		}
	};
}
