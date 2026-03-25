#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A794720E3EA5DFF0;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F7EEE0)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9F7EF20)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER___C___INITMESSAGES_B__6_0_OFFSET UNITYSDK_OFFSET(0x9F7EF30)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAssistantController___c_TypeDefinitionIndex = 54067;

	class PlanetFesAssistantController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_A794720E3EA5DFF0*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::Class_1_A794720E3EA5DFF0*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAssistantController___c_TypeDefinitionIndex)->GetStaticField(0x46430);
		}
		static ::RPG::Client::PlanetFesAssistantController___c** StaticGet___9()
		{
			return (::RPG::Client::PlanetFesAssistantController___c**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAssistantController___c_TypeDefinitionIndex)->GetStaticField(0x46438);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitMessages_b__6_0(::Class_1_A794720E3EA5DFF0* lhs, ::Class_1_A794720E3EA5DFF0* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A794720E3EA5DFF0*, ::Class_1_A794720E3EA5DFF0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER___C___INITMESSAGES_B__6_0_OFFSET))(this, lhs, rhs);
		}
	};
}
