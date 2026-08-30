#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2ReputationData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD6734B0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD6734F0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS___C__GETCHALLENGINGREPUTATIONDATALIST_B__6_0_OFFSET UNITYSDK_OFFSET(0xD673500)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ReputationInfos___c_TypeDefinitionIndex = 66073;

	class MatchThreeV2ReputationInfos___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MatchThreeV2ReputationInfos___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreeV2ReputationInfos___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2ReputationInfos___c_TypeDefinitionIndex)->GetStaticField(0x66670);
		}
		static ::System::Func_2<::RPG::Client::MatchThreeV2ReputationData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeV2ReputationData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2ReputationInfos___c_TypeDefinitionIndex)->GetStaticField(0x66678);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChallengingReputationDataList_b__6_0(::RPG::Client::MatchThreeV2ReputationData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2ReputationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS___C__GETCHALLENGINGREPUTATIONDATALIST_B__6_0_OFFSET))(this, a1);
		}
	};
}
