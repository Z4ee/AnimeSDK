#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2ChallengerData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB81DC0)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB81DF0)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C___INIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x1AB81E00)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C___INIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x1AB81E20)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ChallengerInfos___c_TypeDefinitionIndex = 63061;

	class MatchThreeV2ChallengerInfos___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>, ::System::UInt32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2ChallengerInfos___c_TypeDefinitionIndex)->GetStaticField(0x47840);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>, ::System::UInt32>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2ChallengerInfos___c_TypeDefinitionIndex)->GetStaticField(0x47848);
		}
		static ::RPG::Client::MatchThreeV2ChallengerInfos___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreeV2ChallengerInfos___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2ChallengerInfos___c_TypeDefinitionIndex)->GetStaticField(0x47850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __Init_b__4_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C___INIT_B__4_0_OFFSET))(this, a1);
		}

		::System::UInt32 __Init_b__4_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C___INIT_B__4_1_OFFSET))(this, a1);
		}
	};
}
