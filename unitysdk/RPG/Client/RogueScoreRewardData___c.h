#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueScoreRewardRow; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUESCOREREWARDDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA35D050)
#define RPG_CLIENT_ROGUESCOREREWARDDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA35D080)
#define RPG_CLIENT_ROGUESCOREREWARDDATA___C__GETCURSCOREREWARDROWS_B__4_0_OFFSET UNITYSDK_OFFSET(0xA35D090)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueScoreRewardData___c_TypeDefinitionIndex = 54984;

	class RogueScoreRewardData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueScoreRewardData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueScoreRewardData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueScoreRewardData___c_TypeDefinitionIndex)->GetStaticField(0x19550);
		}
		static ::System::Comparison_1<::RPG::GameCore::RogueScoreRewardRow*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::RogueScoreRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueScoreRewardData___c_TypeDefinitionIndex)->GetStaticField(0x19558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetCurScoreRewardRows_b__4_0(::RPG::GameCore::RogueScoreRewardRow* x, ::RPG::GameCore::RogueScoreRewardRow* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueScoreRewardRow*, ::RPG::GameCore::RogueScoreRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA___C__GETCURSCOREREWARDROWS_B__4_0_OFFSET))(this, x, y);
		}
	};
}
