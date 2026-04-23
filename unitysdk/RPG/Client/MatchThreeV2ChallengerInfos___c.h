#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2ChallengerData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA851E60)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA851E90)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C___INIT_B__4_0_OFFSET UNITYSDK_OFFSET(0xA851EA0)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C___INIT_B__4_1_OFFSET UNITYSDK_OFFSET(0xA851F20)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ChallengerInfos___c_TypeDefinitionIndex = 60765;

	class MatchThreeV2ChallengerInfos___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MatchThreeV2ChallengerInfos___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreeV2ChallengerInfos___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2ChallengerInfos___c_TypeDefinitionIndex)->GetStaticField(0x29E60);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>, ::System::UInt32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2ChallengerInfos___c_TypeDefinitionIndex)->GetStaticField(0x29E68);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>, ::System::UInt32>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2ChallengerInfos___c_TypeDefinitionIndex)->GetStaticField(0x29E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __Init_b__4_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*> p)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C___INIT_B__4_0_OFFSET))(this, p);
		}

		::System::UInt32 __Init_b__4_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*> p)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C___INIT_B__4_1_OFFSET))(this, p);
		}
	};
}
