#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakTarget; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEPEAK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD4F330)
#define RPG_CLIENT_CHALLENGEPEAK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD4F370)
#define RPG_CLIENT_CHALLENGEPEAK___C__GETCOUNTOFPASSEDTARGETS_B__55_0_OFFSET UNITYSDK_OFFSET(0x1AD4F3B0)
#define RPG_CLIENT_CHALLENGEPEAK___C__GET_VORACITYINVASIONLEVEL_B__22_0_OFFSET UNITYSDK_OFFSET(0x1AD4F380)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeak___c_TypeDefinitionIndex = 63220;

	class ChallengePeak___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChallengePeakTarget*, ::System::Boolean>** StaticGet___9__55_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeakTarget*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeak___c_TypeDefinitionIndex)->GetStaticField(0x21740);
		}
		static ::RPG::Client::ChallengePeak___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengePeak___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeak___c_TypeDefinitionIndex)->GetStaticField(0x21748);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeak___c_TypeDefinitionIndex)->GetStaticField(0x21750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _get_VoracityInvasionLevel_b__22_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___C__GET_VORACITYINVASIONLEVEL_B__22_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCountOfPassedTargets_b__55_0(::RPG::Client::ChallengePeakTarget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___C__GETCOUNTOFPASSEDTARGETS_B__55_0_OFFSET))(this, a1);
		}
	};
}
