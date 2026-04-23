#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceGameFightResultParticipantData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EFC3C0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9EFC400)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA___C___INITPARTICIPANTDATALIST_B__23_0_OFFSET UNITYSDK_OFFSET(0x9EFC410)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameFightResultCatData___c_TypeDefinitionIndex = 58057;

	class CakeRaceGameFightResultCatData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::CakeRaceGameFightResultParticipantData*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::RPG::Client::CakeRaceGameFightResultParticipantData*>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFightResultCatData___c_TypeDefinitionIndex)->GetStaticField(0x44970);
		}
		static ::RPG::Client::CakeRaceGameFightResultCatData___c** StaticGet___9()
		{
			return (::RPG::Client::CakeRaceGameFightResultCatData___c**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFightResultCatData___c_TypeDefinitionIndex)->GetStaticField(0x44978);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitParticipantDataList_b__23_0(::RPG::Client::CakeRaceGameFightResultParticipantData* x, ::RPG::Client::CakeRaceGameFightResultParticipantData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceGameFightResultParticipantData*, ::RPG::Client::CakeRaceGameFightResultParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA___C___INITPARTICIPANTDATALIST_B__23_0_OFFSET))(this, x, y);
		}
	};
}
