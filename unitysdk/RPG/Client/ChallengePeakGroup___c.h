#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeak; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x191E8F40)
#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__CHECKALLNORMALHASPERFECTPASSED_B__54_0_OFFSET UNITYSDK_OFFSET(0x191E8FD0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__CHECKHASANYPEAKISPASSEDINBESTRECORD_B__53_0_OFFSET UNITYSDK_OFFSET(0x191E8FB0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__CHECKHASANYPEAKISPASSED_B__52_0_OFFSET UNITYSDK_OFFSET(0x191E8F90)
#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x191E8F80)
#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__GETLEVELPROGRESSINFO_B__59_0_OFFSET UNITYSDK_OFFSET(0x191E9010)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakGroup___c_TypeDefinitionIndex = 60394;

	class ChallengePeakGroup___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakGroup___c_TypeDefinitionIndex)->GetStaticField(0x62E40);
		}
		static ::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakGroup___c_TypeDefinitionIndex)->GetStaticField(0x62E48);
		}
		static ::RPG::Client::ChallengePeakGroup___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengePeakGroup___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakGroup___c_TypeDefinitionIndex)->GetStaticField(0x62E50);
		}
		static ::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakGroup___c_TypeDefinitionIndex)->GetStaticField(0x62E58);
		}
		static ::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengePeakGroup___c_TypeDefinitionIndex)->GetStaticField(0x62E60);
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
