#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAA5950)
#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAA5990)
#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C__SORT_B__5_0_OFFSET UNITYSDK_OFFSET(0x1AAA59A0)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceCatRankGameData___c_TypeDefinitionIndex = 72519;

	class CakeRaceCatRankGameData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::CakeRace::CakeRaceCatRankGameData___c** StaticGet___9()
		{
			return (::RPG::Client::CakeRace::CakeRaceCatRankGameData___c**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceCatRankGameData___c_TypeDefinitionIndex)->GetStaticField(0x5EF60);
		}
		static ::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::UnityEngine::Vector3>>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::UnityEngine::Vector3>>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceCatRankGameData___c_TypeDefinitionIndex)->GetStaticField(0x5EF68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Sort_b__5_0(::System::ValueTuple_2<::System::UInt32, ::UnityEngine::Vector3> a1, ::System::ValueTuple_2<::System::UInt32, ::UnityEngine::Vector3> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::UnityEngine::Vector3>, ::System::ValueTuple_2<::System::UInt32, ::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C__SORT_B__5_0_OFFSET))(this, a1, a2);
		}
	};
}
