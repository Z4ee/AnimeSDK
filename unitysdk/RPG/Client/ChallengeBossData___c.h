#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEBOSSDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA27EA0)
#define RPG_CLIENT_CHALLENGEBOSSDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA27EE0)
#define RPG_CLIENT_CHALLENGEBOSSDATA___C__GETVORACITYINVASIONLEVEL_B__18_0_OFFSET UNITYSDK_OFFSET(0xCA27EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossData___c_TypeDefinitionIndex = 63145;

	class ChallengeBossData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChallengeBossData___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengeBossData___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeBossData___c_TypeDefinitionIndex)->GetStaticField(0x20B80);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeBossData___c_TypeDefinitionIndex)->GetStaticField(0x20B88);
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
