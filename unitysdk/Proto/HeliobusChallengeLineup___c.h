#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class HeliobusChallengeLineup; }

#define PROTO_HELIOBUSCHALLENGELINEUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19343200)
#define PROTO_HELIOBUSCHALLENGELINEUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19343230)
#define PROTO_HELIOBUSCHALLENGELINEUP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x19343240)

namespace Proto
{
	inline static constexpr unsigned int HeliobusChallengeLineup___c_TypeDefinitionIndex = 28017;

	class HeliobusChallengeLineup___c : public ::System::Object
	{
	public:
		static ::Proto::HeliobusChallengeLineup___c** StaticGet___9()
		{
			return (::Proto::HeliobusChallengeLineup___c**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeLineup___c_TypeDefinitionIndex)->GetStaticField(0x640B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP___C__CTOR_OFFSET))(this);
		}

		::Proto::HeliobusChallengeLineup* __cctor_b__33_0()
		{
			return ((::Proto::HeliobusChallengeLineup*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP___C___CCTOR_B__33_0_OFFSET))(this);
		}
	};
}
