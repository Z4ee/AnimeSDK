#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakTarget; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEPEAK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB55E0B0)
#define RPG_CLIENT_CHALLENGEPEAK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB55E0F0)
#define RPG_CLIENT_CHALLENGEPEAK___C__GETCOUNTOFPASSEDTARGETS_B__53_0_OFFSET UNITYSDK_OFFSET(0xB55E100)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeak___c_TypeDefinitionIndex = 59097;

	class ChallengePeak___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChallengePeak___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengePeak___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeak___c_TypeDefinitionIndex)->GetStaticField(0x5C070);
		}
		static ::System::Func_2<::RPG::Client::ChallengePeakTarget*, ::System::Boolean>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeakTarget*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeak___c_TypeDefinitionIndex)->GetStaticField(0x5C078);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCountOfPassedTargets_b__53_0(::RPG::Client::ChallengePeakTarget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___C__GETCOUNTOFPASSEDTARGETS_B__53_0_OFFSET))(this, a1);
		}
	};
}
