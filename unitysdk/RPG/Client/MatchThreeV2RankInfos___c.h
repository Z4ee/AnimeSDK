#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2RankData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2RANKINFOS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9F5CF0)
#define RPG_CLIENT_MATCHTHREEV2RANKINFOS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9F5D20)
#define RPG_CLIENT_MATCHTHREEV2RANKINFOS___C___INIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x1A9F5D30)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2RankInfos___c_TypeDefinitionIndex = 63083;

	class MatchThreeV2RankInfos___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MatchThreeV2RankData*, ::System::UInt32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeV2RankData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2RankInfos___c_TypeDefinitionIndex)->GetStaticField(0x48510);
		}
		static ::RPG::Client::MatchThreeV2RankInfos___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreeV2RankInfos___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2RankInfos___c_TypeDefinitionIndex)->GetStaticField(0x48518);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKINFOS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKINFOS___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __Init_b__3_0(::RPG::Client::MatchThreeV2RankData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MatchThreeV2RankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKINFOS___C___INIT_B__3_0_OFFSET))(this, a1);
		}
	};
}
