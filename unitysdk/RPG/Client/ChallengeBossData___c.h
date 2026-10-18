#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEBOSSDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC976510)
#define RPG_CLIENT_CHALLENGEBOSSDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC976550)
#define RPG_CLIENT_CHALLENGEBOSSDATA___C__GETVORACITYINVASIONLEVEL_B__18_0_OFFSET UNITYSDK_OFFSET(0xC976560)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossData___c_TypeDefinitionIndex = 63078;

	class ChallengeBossData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChallengeBossData___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengeBossData___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeBossData___c_TypeDefinitionIndex)->GetStaticField(0x6CB80);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeBossData___c_TypeDefinitionIndex)->GetStaticField(0x6CB88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetVoracityInvasionLevel_b__18_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___C__GETVORACITYINVASIONLEVEL_B__18_0_OFFSET))(this, a1);
		}
	};
}
