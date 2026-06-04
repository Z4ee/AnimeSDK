#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeak; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB569F70)
#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__CHECKALLNORMALHASPERFECTPASSED_B__54_0_OFFSET UNITYSDK_OFFSET(0xB56A000)
#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__CHECKHASANYPEAKISPASSEDINBESTRECORD_B__53_0_OFFSET UNITYSDK_OFFSET(0xB569FE0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__CHECKHASANYPEAKISPASSED_B__52_0_OFFSET UNITYSDK_OFFSET(0xB569FC0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB569FB0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__GETLEVELPROGRESSINFO_B__59_0_OFFSET UNITYSDK_OFFSET(0xB56A040)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakGroup___c_TypeDefinitionIndex = 59123;

	class ChallengePeakGroup___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakGroup___c_TypeDefinitionIndex)->GetStaticField(0x5C200);
		}
		static ::RPG::Client::ChallengePeakGroup___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengePeakGroup___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakGroup___c_TypeDefinitionIndex)->GetStaticField(0x5C208);
		}
		static ::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakGroup___c_TypeDefinitionIndex)->GetStaticField(0x5C210);
		}
		static ::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakGroup___c_TypeDefinitionIndex)->GetStaticField(0x5C218);
		}
		static ::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakGroup___c_TypeDefinitionIndex)->GetStaticField(0x5C220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckHasAnyPeakIsPassed_b__52_0(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP___C__CHECKHASANYPEAKISPASSED_B__52_0_OFFSET))(this, a1);
		}

		::System::Boolean _CheckHasAnyPeakIsPassedInBestRecord_b__53_0(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP___C__CHECKHASANYPEAKISPASSEDINBESTRECORD_B__53_0_OFFSET))(this, a1);
		}

		::System::Boolean _CheckAllNormalHasPerfectPassed_b__54_0(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP___C__CHECKALLNORMALHASPERFECTPASSED_B__54_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetLevelProgressInfo_b__59_0(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP___C__GETLEVELPROGRESSINFO_B__59_0_OFFSET))(this, a1);
		}
	};
}
