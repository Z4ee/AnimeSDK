#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceFriendRankingData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CAKERACEFRIENDINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAC5340)
#define RPG_CLIENT_CAKERACEFRIENDINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAC5380)
#define RPG_CLIENT_CAKERACEFRIENDINFO___C___SORTFRIENDRANK_B__7_0_OFFSET UNITYSDK_OFFSET(0x1AAC5390)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceFriendInfo___c_TypeDefinitionIndex = 60247;

	class CakeRaceFriendInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::CakeRaceFriendInfo___c** StaticGet___9()
		{
			return (::RPG::Client::CakeRaceFriendInfo___c**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceFriendInfo___c_TypeDefinitionIndex)->GetStaticField(0x5F7A0);
		}
		static ::System::Comparison_1<::RPG::Client::CakeRaceFriendRankingData*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::CakeRaceFriendRankingData*>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceFriendInfo___c_TypeDefinitionIndex)->GetStaticField(0x5F7A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SortFriendRank_b__7_0(::RPG::Client::CakeRaceFriendRankingData* a1, ::RPG::Client::CakeRaceFriendRankingData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceFriendRankingData*, ::RPG::Client::CakeRaceFriendRankingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO___C___SORTFRIENDRANK_B__7_0_OFFSET))(this, a1, a2);
		}
	};
}
