#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyRankingInfo; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9357C90)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9357CD0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO___C___SORT_B__4_0_OFFSET UNITYSDK_OFFSET(0x9357CE0)

namespace RPG::Client::ChenLingGameBoy
{
	inline static constexpr unsigned int ChenLingGameBoyPlayerRankingListInfo___c_TypeDefinitionIndex = 61511;

	class ChenLingGameBoyPlayerRankingListInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyRankingInfo*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyRankingInfo*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingGameBoyPlayerRankingListInfo___c_TypeDefinitionIndex)->GetStaticField(0x46580);
		}
		static ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPlayerRankingListInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPlayerRankingListInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingGameBoyPlayerRankingListInfo___c_TypeDefinitionIndex)->GetStaticField(0x46588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __Sort_b__4_0(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyRankingInfo* a, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyRankingInfo* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyRankingInfo*, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyRankingInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO___C___SORT_B__4_0_OFFSET))(this, a, b);
		}
	};
}
