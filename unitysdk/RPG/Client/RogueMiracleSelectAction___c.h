#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournMiracleData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEMIRACLESELECTACTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC7C3780)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC7C37B0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION___C___REPORTSELECTMIRACLE_B__30_0_OFFSET UNITYSDK_OFFSET(0xC7C37C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleSelectAction___c_TypeDefinitionIndex = 62672;

	class RogueMiracleSelectAction___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueTournMiracleData*, ::System::Boolean>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTournMiracleData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleSelectAction___c_TypeDefinitionIndex)->GetStaticField(0x34410);
		}
		static ::RPG::Client::RogueMiracleSelectAction___c** StaticGet___9()
		{
			return (::RPG::Client::RogueMiracleSelectAction___c**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleSelectAction___c_TypeDefinitionIndex)->GetStaticField(0x34418);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ReportSelectMiracle_b__30_0(::RPG::Client::RogueTournMiracleData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournMiracleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION___C___REPORTSELECTMIRACLE_B__30_0_OFFSET))(this, a1);
		}
	};
}
