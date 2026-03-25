#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceGameFightResultParticipantData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9238E10)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9238E50)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA___C___INITPARTICIPANTDATALIST_B__23_0_OFFSET UNITYSDK_OFFSET(0x9238E60)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameFightResultCatData___c_TypeDefinitionIndex = 51137;

	class CakeRaceGameFightResultCatData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::CakeRaceGameFightResultCatData___c** StaticGet___9()
		{
			return (::RPG::Client::CakeRaceGameFightResultCatData___c**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFightResultCatData___c_TypeDefinitionIndex)->GetStaticField(0x445C0);
		}
		static ::System::Comparison_1<::RPG::Client::CakeRaceGameFightResultParticipantData*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::RPG::Client::CakeRaceGameFightResultParticipantData*>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFightResultCatData___c_TypeDefinitionIndex)->GetStaticField(0x445C8);
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
